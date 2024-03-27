#include <bits/stdc++.h>
using namespace std;
struct node {
    int x;
    int y;
};
queue<node> q;
char mp[15][15] = {};
int vis[15][15] = {};
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int n;
void bfs() {
    node a = {1, 1};
    q.push(a);
    vis[1][1] = 1;
    while (q.empty() != 1) {
        node f = q.front();
        if (f.x == n && f.y == n) {
            cout << "YES";
            return;
        }
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n && mp[nx][ny] == '.' && vis[nx][ny] == 0) {
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
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> mp[i][j];
        }
    }
    bfs();
    return 0;
}
