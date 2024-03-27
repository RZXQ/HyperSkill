#include <bits/stdc++.h>
using namespace std;
struct node {
    int x;
    int y;
};
queue<node> q;
int mp[5][5] = {};
int vis[5][5] = {};
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};

int main() {
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            cin >> mp[i][j];
        }
    }
    node a = {1, 1};
    q.push(a);
    vis[1][1] = 1;
    while (q.empty() != 1) {
        node f = q.front();
        if (mp[f.x][f.y] == 2) {
            cout << "YES";
            return 0;
        }
        for (int i = 0; i < 4; i++) {
            int nx = f.x + dx[i];
            int ny = f.y + dy[i];
            if (nx >= 1 && nx <= 4 && ny >= 1 && ny <= 4 && mp[nx][ny] != 1 && vis[nx][ny] == 0) {
                vis[nx][ny] = 1;
                node r = {nx, ny};
                q.push(r);
            }
        }
        q.pop();
    }
    cout << "NO";
    return 0;
}
