/*
4471 网的邻接矩阵2

Easy+

Description
输入一个无向的网，存进邻接矩阵并输出。

Input
第一行两个整数 n 和 m，表示有 n 个结点，m 条边。(结点编号 1∼n)
接下来有 m 行，每行有三个整数 x，y 和 w。表示一条结点 x 到 y 的边，权值为 w。

Output
输出邻接矩阵。

Sample Input 1
4 5
2 1 2
3 1 3
3 2 10
1 4 8
4 3 5

Sample Output 1
999 2 3 8
2 999 10 999
3 10 999 5
8 999 5 999

Hint
数据范围与提示
n≤20，0≤w≤10
如果两个结点间没边，极大值取 999。
*/
#include <iostream>
using namespace std;

int main() {
    int g[21][21] = {};

    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            g[i][j] = 999;
            g[j][i] = 999;
        }
    }

    int x, y, w;
    for (int i = 1; i <= m; i++) {
        cin >> x >> y >> w;
        g[x][y] = w;
        g[y][x] = w;
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}