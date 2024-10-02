/*
Description
手工课上老师拿出 N 张长方形彩纸，且每张彩纸上都画着 W×H 的网格（网格铺满整张彩纸）。现在老师将 N 张彩纸裁剪出K张大小相同的正方形，并且要使裁剪出的正方形的边长最大（裁剪的正方形边长必须为整数）。
例如：N=2，有 2 张彩纸，第一张彩纸 W=4，H=3；第二张彩纸 W=5，H=4；K=6，裁剪的 6 个正方形边长最大是 2。
当给出 N 张长方形彩纸 W 和 H，及 K 的值，请计算出将 N 张彩纸裁剪出 K 张大小相同的正方形，正方形的边长最大是多少（裁剪的正方形边长必须为整数）。

Input
第一行输入两个正整数 N 和 K (1 < N < 100, 1 < K < 100)，N 表示彩纸数量，K 表示需裁剪的正方形数量，两个正整数之间用一个空格隔开。
第二行开始输入 N 行，每行包含两个正整数 W 和 H (1 < W < 1000, 1 < H < 1000，且 W ≠ H)，W 表示彩纸的长度，H 表示彩纸的宽度，两个正整数之间用一个空格隔开。

Output
输出一个正整数，表示将 N 张彩纸裁剪出 K 张大小相同的正方形的边长最大是多少（裁剪的正方形边长必须为整数），如果不能裁剪出 K 张正方形就输出 "-1"。

Sample Input 1
2 6
4 3
5 4

Sample Output 1
2
*/
#include <iostream>
using namespace std;

// 结构体Square用来表示一个矩形的长和宽
struct Square {
    int width;
    int height;
};

// 定义一个Square数组，最多可以存储105个矩形
Square squares[105];

int main() {
    int n, k;
    // 输入n个矩形和需要的正方形数量k
    cin >> n >> k;

    // 输入n个矩形的长和宽
    for (int i = 1; i <= n; i++) {
        cin >> squares[i].width >> squares[i].height;
    }

    int L = 1, R = 1000; // 初始化正方形边长的范围

    int mid; // 记录当前的正方形边长
    int ans = -1; // 记录满足条件的最大正方形边长
    while (L <= R) {
        int cnt = 0; // 计算可以切割出的正方形数量
        mid = (L + R) / 2; // 计算中间的正方形边长
        for (int i = 1; i <= n; i++) {
            // 计算每个矩形内可以切割出的正方形数量并累加
            cnt += (squares[i].width / mid) * (squares[i].height / mid);
        }

        // 根据切割出的正方形数量改变二分查找的范围
        if (cnt >= k) {
            ans = mid; // 如果可以切割出至少k个正方形，认为mid是一个可能的答案
            L = mid + 1; // 尝试更大的边长
        } else {
            R = mid - 1; // 尝试更小的边长
        }
    }

    // 输出满足条件的最大正方形边长
    cout << ans;
    return 0;
}
