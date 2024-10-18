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
