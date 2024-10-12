/*
Description
给定N个闭区间[l,r]，请在数轴上选择尽量少的点，使得每个区间内至少包含一个选出的点。输出所选点的最小数量。
注意：位于区间端点上的点也算作区间内。

Input
第一行一个整数N，表示闭区间数量（1≤N≤10^5 ）。
接下来N行，每行两个整数l，r，分别表示一个区间的左端点和右端点（−10^9 ≤l≤r≤10^9 ）。

Output
输出一个整数，表示所选点的最小数量。

Sample Input 1
5
0 3
1 2
-1 2
0 1
4 5

Sample Output 1
2
*/
#include <cstdio>
#include <algorithm>
using namespace std;

struct Node {
    int l; // 闭合区间的左端点
    int r; // 闭合区间的右端点
} a[100005];

bool cmp(Node a, Node b) {
    return a.r < b.r;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d%d", &a[i].l, &a[i].r);
    }

    sort(a + 1, a + 1 + n, cmp);

    int count = 1; // 记录所选点的最小的数量, 是第一个节点的最最右端的索引值
    int pointer = 1; // 一个指针, 指向当前选择的点的索引值

    for (int i = 2; i <= n; i++) {
        if (a[pointer].r >= a[i].l && a[pointer].r <= a[i].r) {
            continue;
        }
        count++;
        pointer = i;
    }

    printf("%d\n", count);
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;

struct node {
    int l, r;
} a[100001];

bool cmp(node x, node y) {
    return x.r < y.r; //右端点升序
}

int main() {
    int n; //n个闭区间
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].l >> a[i].r;
    }
    sort(a + 1, a + 1 + n, cmp);
    int t = a[1].r; //t:存储选定点
    int ans = 1; //ans:存储选定的点数量
    for (int i = 2; i <= n; i++) {
        if (t < a[i].l) {
            t = a[i].r;
            ans++;
        }
    }
    //输出选定点的数量
    cout << ans;
    return 0;
}
*/
