/*
7057 运输木材

Description
木材厂堆着 n 根大木头，老板派一辆卡车将木头运走，卡车至少要装载 m 根才能发车。
现在使用机器将 n 根大木头切割成长度相等的小木头，当然希望小木头越长越好，这样才能少浪费木材。
请利用所学的知识，帮忙计算小木头的最大长度，交给切割师傅。

Input
第一行两个正整数 n 和 m，分别代表大木头的数量，卡车的装载量 m 根。
接下来 n 行，每行一个正整数 a[i] ，表示每根大木头的长度。

Output
一个正整数，表示小木头的最大长度。如果切不出来，输出 0。

Sample Input 1
4 7
18
6
11
7

Sample Output 1
5

Hint
数据范围与提示
对于 100% 的数据，有 1≤n≤10^5 ，1≤m≤10^8 ，1≤a[i]≤10^8
*/
#include <iostream>
using namespace std;

int a[100005];

int main() {
    int n, m; // n 木头的数量, m 卡车装载 m 根
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int L = 1, R = 100000000;
    int ans = 0; // 计算切割的木材的数量
    while (L <= R) {
        int cnt = 0;
        // 计算切割的长度
        int mid = (L + R) / 2;

        for (int i = 1; i <= n; i++) {
            cnt += a[i] / mid;
        }

        if (cnt >= m) {
            ans = mid;
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }
    cout << ans;
    return 0;
}
