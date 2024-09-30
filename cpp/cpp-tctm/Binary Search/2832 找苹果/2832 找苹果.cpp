/*
2832 找苹果

Description
小鹿喜欢吃苹果，大熊送给小鹿n个苹果，小鹿把苹果从小到大摆列好。小鹿现在想吃一个苹果，她想知道这堆苹果中是否有m克的苹果。请你编写程序，使用二分算法快速帮小鹿判断一下。如果有输出YES，否则输出NO。

Input
共3行，第一行，一个数字表示有n个苹果。（1<n<10,000,000）
第二行，n个数字，表示每个苹果的重量。
第三行，一个整数m，表示小鹿想吃苹果的重量。

Output
如果有这个苹果输出YES，否则输出NO。

Sample Input 1
10
150 230 301 302 306 405 503 503 520 571
302

Sample Output 1
YES
*/
#include <iostream>
#include <algorithm>
using namespace std;

int a[10000005];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);

    int target;
    cin >> target;

    int L = a[1], R = a[n];
    int mid;

    // 标记型的变量
    bool flag = false;

    while (L <= R) {
        mid = (L + R) / 2;
        if (mid == target) {
            flag = true;
            break;
        } else if (mid > target) {
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }

    cout << (flag ? "YES" : "NO");

    return 0;
}
