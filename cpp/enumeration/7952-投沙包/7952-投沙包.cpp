/*
在一个投沙包的游戏中，选手要向一片区域投掷矩形的沙包，这片区域可以看做平面
直角坐标系的第一象限，沙包落地后平行于坐标轴。
在这片区域中有一个目标点，只要沙包覆盖了目标点，就算投掷成功，目标点在沙包的边上或
4 个顶点上都算。

Input
第一行，一个整数 n，表示投了 n 个沙包。
接下来的 n 行中，每行包括四个整数 x1，y1，l，w，分别表示沙包左上角的坐标 (x1，y1 ) 以及沙包的长 l 宽 w。
最后一行包括两个整数 x 和 y，表示目标点坐标 (x，y)。

Output
输出一个整数，表示成功的次数;如果一次没有成功输出 −1

Sample Input 1
3
2 3 3 2
1 3 2 2
4 2 3 1
2 2

Sample Output 1
2

Sample Input 2
3
2 3 3 2
1 3 2 2
4 2 3 1
6 3

Sample Output 2
-1

Hint
数据范围与提示
1<n≤10^4
平面直角坐标系中里的X轴和Y轴划分的四个区域，每一个区域叫做一个象限。从右上开始逆时针，依次为第一，二，三，四象限。
*/
#include <iostream>
using namespace std;

struct Area {
    int x1; // 左上角的 x1 坐标
    int y1; // 左上角的 y1 坐标
    int l; // 长
    int w; // 宽
    int x2; // 右下角的 x2 坐标
    int y2; // 右下角的 y2 坐标
};

Area a[10005];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i].x1 >> a[i].y1 >> a[i].l >> a[i].w;
        a[i].x2 = a[i].x1 + a[i].l;
        a[i].y2 = a[i].y1 - a[i].w;
    }

    // 目标点的坐标 (x, y)
    int x, y;
    cin >> x >> y;

    // 记录沙包是不是在这个区域当中
    int count = 0;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (x >= a[i].x1 && x <= a[i].x2 && y >= a[i].y2 && y <= a[i].y1) {
            flag = true;
            count++;
        }
    }

    if (flag) {
        cout << count << endl;
    } else {
        cout << -1 << endl;
    }
}

/*
参考答案:

#include<bits/stdc++.h>
using namespace std;

struct node {
    int x1, x2; //左上角
    int y1, y2; //右下角
    int l, w; //长宽
} a[10001];

int main() {
    int n, x, y; //沙包数量n,目标点(x,y)
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].x1 >> a[i].y1 >> a[i].l >> a[i].w;
        //计算右下角坐标
        a[i].x2 = a[i].x1 + a[i].l;
        a[i].y2 = a[i].y1 - a[i].w;
    }
    cin >> x >> y; //目标点坐标
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        //列举每个沙包
        if (x >= a[i].x1 && x <= a[i].x2 && y >= a[i].y2 && y <= a[i].y1) {
            ans++;
        }
    }
    if (ans != 0) //至少成功1次
        cout << ans;
    else
        cout << -1;
    return 0;
}
*/
