#include <bits/stdc++.h>
using namespace std;
struct node {
    int x;
    int y;
};
queue<node> q;
int mp[11][11] = {};
int vis[11][11] = {};
int dx[8] = {1, -1, 2, 2, 1, -1, -2, -2};
int dy[8] = {2, 2, 1, -1, -2, -2, 1, -1};
int n, m;
int ex, ey;
void bfs() {
    node a = {1, 1};
    q.push(a);
    vis[1][1] = 1;
    while (q.empty() != 1) {
        node f = q.front();
        if (f.x == ex && f.y == ey) {
            cout << "YES";
            return;
        }
        for (int i = 0; i < 8; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] != 1 && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny};
                q.push(r);
            }
        }
        q.pop();
    }
    cout << "NO";
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }
    cin >> ex >> ey;
    bfs();
    return 0;
}
