/*
Description
有 n 件礼物，第 i 件礼物的价值为 wi，需要给这些礼物进行分组，每组礼物数量不能超过 2、价值不能超过 y，要求组数尽量少，每位同学可以领一组礼物领完为止，问有多少同学领到两个礼物。

Input
第一行两个整数 n、y，用空格隔开。
第二行 n 个整数，用空格隔开，表示礼物的价值。

Output
一个整数，表示获得两个礼物的人数。

Sample Input 1
5 36
12 35 20 2 25

Sample Output 1
2

Hint
数据范围与提示
1≤n,y≤100，1≤wi≤100，wi≤y
*/
#include <cstdio>
#include <algorithm>
using namespace std;

int a[105];

int main() {
    int n, y;
    scanf("%d %d", &n, &y);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a + 1, a + 1 + n);

    int count = 0;
    int startPointer = 1, endPointer = n;
    // 如果使用 startPointer <= endPointer 会导致在指针相等 (startPointer == endPointer) 时，仍然尝试将当前指针指向的礼物与自身配对，但一件礼物无法形成有效配对。因此，这种情况下是不符合题目要求的。
    while (startPointer < endPointer) {
        if (a[startPointer] + a[endPointer] <= y) {
            count++;
            startPointer++;
            endPointer--;
        } else {
            endPointer--;
        }
    }

    printf("%d", count);

    return 0;
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[105] = {};
    int n, y;
    cin >> n >> y;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + n + 1); //按礼物价值升序
    int i = 1, j = n; //i表示价值最小礼物 j表示价值最大礼物
    int two = 0; //表示两个礼物一组的组数
    while (i < j) {
        if (a[i] + a[j] > y) //价值和超过y，价值高的自己1组
            j--;
        else {
            //没有超过y，两个礼物放1组
            i++;
            j--;
            two++;
        }
    }
    cout << two;
    return 0;
}
*/
