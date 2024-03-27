#include <bits/stdc++.h>
using namespace std;
int t, n, sx, sy, ex, ey;
char mp[51][51];
int vis[51][51];
int dx[] = {1, 0, 0, -1};//下右左上
int dy[] = {0, 1, -1, 0};//下右左上
struct node {
    int x, y;
};
queue<node> q;
int cnt;
void bfs() {
    //1. 起始点入队
    node a = {sx, sy};
    q.push(a);
    vis[sx][sy] = 1;
    while (q.empty() != 1) {
        //2. 判断队首是否为目标
        node f = q.front();
        if (f.x == ex && f.y == ey) {
            cout << "YES" << endl;
            return;
        }
        //3. 获取队首的相邻格子入队
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= n && ny > 0 && ny <= n && mp[nx][ny] == '.' && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;//标记
                q.push({nx, ny});
            }
        }
        //4. 队首出队
        q.pop();
    }
    cout << "NO" << endl;
}
int main() {
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> mp[i][j];
            }
        }
        //输入起始点，终止点
        cin >> sx >> sy >> ex >> ey;
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                vis[j][k] = 0;
            }
        }
        while (q.empty() != 1) {
            q.pop();
        }
        //搜索
        bfs();
    }


    return 0;
}
