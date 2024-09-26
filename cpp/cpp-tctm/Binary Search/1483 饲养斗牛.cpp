/*
1483 饲养斗牛

Description
农夫约翰建造了一座有 n 间牛舍的小屋，牛舍排在一条直线上，第 i 间牛舍在 x[i] 的位置，但是约翰的 m 头牛是斗牛，脾气非常暴躁，因此经常互相攻击。约翰为了防止牛之间互相伤害，因此决定把每头牛都放在离其它牛尽可能远的牛舍。也就是要最大化最近的两头牛之间的距离。
牛们并不喜欢这种布局，而且几头牛放在一个隔间里，它们就要发生争斗。为了不让牛互相伤害。约翰决定自己给牛分配隔间，使任意两头牛之间的最小距离尽可能的大，那么，这个最大的最小距离是多少呢？

Input
第一行用空格分隔的两个整数 n 和 m。
第二行为 n 个用空格隔开的整数，表示位置 xi。

Output
输出仅一个整数，表示最大的最小距离值。

Sample Input 1
5 3
1 2 8 4 9

Sample Output 1
3

Hint
数据范围与提示
2 ≤ n ≤ 10^5, 0 < xi ≤ 10^9, 2 ≤ m ≤ n。
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // n牛舍数量 m牛数量 a存储牛舍位置
    int n = 0, m = 0, a[100001] = {};
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // 按照位置大小给牛舍排序
    sort(a + 1, a + n + 1);
    int ans = 0;
    int L = 1, R = a[n], mid = 0;
    while (L <= R) {
        mid = (L + R) / 2;

        // 记录安放牛的数量
        int cnt = 1;
        // s是最近一次使用的牛舍位置
        int s = a[1];

        for (int i = 2; i <= n; i++) {
            if (a[i] - s >= mid) {
                cnt++;
                s = a[i];
            }
        }

        if (cnt < m) {
            // 放不下，把距离缩小
            R = mid - 1;
        } else {
            ans = mid;
            // 足够，可以尝试更大的距离
            L = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
