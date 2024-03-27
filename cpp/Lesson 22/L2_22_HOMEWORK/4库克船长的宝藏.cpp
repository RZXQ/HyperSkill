#include <bits/stdc++.h>
using namespace std;
//地图
char mp[101][101];
int n, m;//n*m的地图
//结构体保存每个格子的坐标
struct node {
    int x;
    int y;
};
//队列用于存储每层搜索的格子
queue<node> q;
//设置搜索顺序，上右下左
int dx[4] = {1, 0, -1, 0};//x轴坐标变化
int dy[4] = {0, 1, 0, -1};//y坐标变化
//用于标记已被搜索
int vis[101][101] = {0};
//bfs
int sx, sy;
int ans = 1;
int bfs() {
    //1. 队首元素入队，标记
    node a = {sx, sy};
    q.push(a);
    vis[sx][sy] = 1;
    while (q.empty() != 1) {
        node f = q.front();
        //2.队首元素判断是否为目标
        //3. 找队首相邻元素，入队，标记
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx > 0 && nx <= m && ny > 0 && ny <= n && mp[nx][ny] == '.' && vis[nx][ny] != 1) {
                q.push({nx, ny});
                vis[nx][ny] = 1;
                ans++;
                //cout << nx << ' ' << ny << ' '<< 37 <<   endl;
            }
        }
        //4.队首出队
        q.pop();
    }
}

int main() {
    cin >> n >> m;
    while (n != 0 && m != 0) {
        for (int i = 1; i <= 101; i++) {
            for (int j = 1; j <= 101; j++) {
                vis[i][j] = 0;
            }
        }
        while (q.empty() != 1) {
            //TODO
            q.pop();
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                cin >> mp[i][j];
            }
        }
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (mp[i][j] == '@') {
                    sx = i;
                    sy = j;
                    bfs();
                }
            }
        }
        cout << ans << endl;
        ans = 1;
        cin >> n >> m;
    }


    return 0;
}
