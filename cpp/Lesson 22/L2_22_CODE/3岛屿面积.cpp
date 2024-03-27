#include <bits/stdc++.h>
using namespace std;
struct node {
    int x;
    int y;
};
queue<node> q;
int mp[51][51] = {};
int vis[51][51] = {};
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int n, m;
int sx, sy;
int ans;
void bfs() {
    node a = {sx, sx};
    q.push(a);
    vis[sx][sy] = 1;
    ans++;
    while (q.empty() != 1) {
        node f = q.front();
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] == 1 && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny};
                q.push(r);
                ans++;
            }
        }
        q.pop();
    }
}
int main() {
    cin >> n >> m >> sx >> sy;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }

    bfs();
    cout << ans;
    return 0;
}
