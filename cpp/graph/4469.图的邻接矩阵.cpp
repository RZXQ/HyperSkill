/*
4469 图的邻接矩阵

Easy+

Description
输入一个无向图，存进邻接矩阵并输出。

Input
第一行两个整数 n 和 m，表示图有 n 个结点，m 条边。(结点编号 1∼n)
接下来有 m 行，每行有两个整数 x 和 y，表示一条边的两端结点。

Output
输出邻接矩阵。

Sample Input 1
4 5
1 2
1 3
2 4
1 4
4 3

Sample Output 1
0 1 1 1
1 0 0 1
1 0 0 1
1 1 1 0

Hint
数据范围与提示
n≤20
*/
#include <iostream>
using namespace std;

int main() {
    // 创建邻接矩阵
    int g[21][21] = {};

    int n, m, x, y;
    cin >> n >> m;

    // 循环 m 次, 对邻接矩阵赋值
    for (int i = 1; i <= m; i++) {
        cin >> x >> y;
        g[x][y] = 1;
    }

    return 0;
}
