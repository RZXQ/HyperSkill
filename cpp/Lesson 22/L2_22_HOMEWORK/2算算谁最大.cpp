#include <bits/stdc++.h>
using namespace std;
struct node {
    int x;
    int y;
};
queue<node> q;
char mp[25][25] = {};
int vis[25][25] = {};
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int n, m;
int sx, sy;
int ans, max_s;
void bfs() {
    node a = {sx, sy};
    q.push(a);
    vis[sx][sy] = 1;
    ans++;
    while (q.empty() != 1) {
        node f = q.front();
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= m && mp[nx][ny] == '#' && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny};
                ans++;
                q.push(r);
            }
        }
        q.pop();
    }
}
int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> mp[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            ans = 0;
            if (mp[i][j] == '#' && vis[i][j] == 0) {
                sx = i;
                sy = j;
                bfs();
                max_s = max(max_s, ans);
            }
        }
    }

    if (!max_s) cout << -1;
    else
        cout << max_s;
    return 0;
}
