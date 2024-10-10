/*
Description
奶牛们要举办跳石头比赛，在河里从一个岩石跳到另一个岩石。河道在起点和离起点 S 远的终点处均有一个岩石。
在起点和终点之间，有 N 个岩石，每个岩石与起点的距离分别为 Di。奶牛每一步只能从一个岩石跳到下一个岩石。
农夫计划移走一些岩石，使得从起点到终点的过程中，最短的跳跃距离最长。
他可以移走除起点和终点外的至多 M 个岩石。

Input
第一行包含三个整数 S, N, M，相邻两个整数之间用单个空格隔开。
接下来 N 行，每行一个整数，表示每个岩石与起点的距离。岩石按与起点距离从近到远给出，且不会有两个岩石出现在同一个位置。

Output
一个整数，最长可能的最短跳跃距离。

Sample Input 1
25 5 2
2
11
14
17
21

Sample Output 1
4

Hint
数据范围与约定:
1 ≤ S ≤ 1,000,000,000，0 ≤ N ≤ 50,000，0 < Di < S，0 ≤ M ≤ N
在移除位于2和14的两个岩石之后，最短跳跃距离为4（从17到21或从21到25）。
*/
#include <iostream>
using namespace std;

int s, n, m;
int a[100010];

int main() {
    cin >> s >> n >> m; // s 总长度, n 岩石个数, m 是最多移走的岩石数量

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int L = 1, R = s, mid = 0, ans = 0;

    while (L <= R) {
        mid = (L + R) / 2;

        int ptr = 0; // ptr 是前一个岩石的位置(移走的那个岩石的前一个岩石位置)
        int cnt = 0; // cnt 记录移走的数量

        for (int i = 1; i <= n; i++) {
            if (a[i] - a[ptr] < mid) {
                cnt++;
            } else {
                ptr = i;
            }
        }

        if (s - a[ptr] < mid) {
            // 处理最后一块石头, 详见 summary
            cnt++;
        }

        if (cnt <= m) {
            // 如果移动的石头的数量小于 m, 就需要考虑是不是最小间距还可以更大一些
            ans = mid; // 记录可用间距
            L = mid + 1; // 尝试更大的间距
        } else {
            R = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
