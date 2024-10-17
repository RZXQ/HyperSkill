/*
Description
小 A 有 N 个糖果盒，第 i 个盒中有 a_i颗糖果。
小 A 每次可以从其中一盒糖果中吃掉一颗，他想知道，要让任意两个相邻的盒子中加起来都只有 x 颗或以下的糖果，至少得吃掉几颗糖。

Input
第一行输入 N 和 x，其中 0<N，x≤100。
第二行 N 个整数，为 ai，0<ai ≤ 100。

Output
至少要吃掉的糖果数量。

Sample Input 1
6 1
1 6 1 2 0 4

Sample Output 1
*/
#include <iostream>
using namespace std;

int a[105];

int main() {
    int n, x; // n 个糖果盒, x 颗糖果
    cin >> n >> x;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int count = 0; // 吃掉的糖果的数量
    a[0] = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] + a[i + 1] > x) {
            count += (a[i + 1] + a[i] - x);
            a[i + 1] = x - a[i];
        }
    }

    cout << count << endl;
}

/*
标准答案:

#include<iostream>
using namespace std;
int a[101];

int main() {
    int n, x, ans = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 2; i <= n; i++) {
        if (a[i] + a[i - 1] > x) {
            ans += a[i] + a[i - 1] - x;
            if (a[i] > a[i] + a[i - 1] - x)
                a[i] -= (a[i] + a[i - 1] - x);
            else
                a[i] = 0;
        }
    }
    cout << ans;
    return 0;
}
*/