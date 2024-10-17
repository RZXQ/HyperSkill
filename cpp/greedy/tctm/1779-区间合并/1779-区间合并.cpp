/*
Description
给定 n 个闭区间 [ai,bi]，其中 i=1,2,...,n 。任意两个相邻或相交的闭区间可以合并为一个闭区间。例如，[1,2] 和 [2,3] 可以合并为 [1,3]，[1,3] 和 [2,4] 可以合并为 [1,4]，但是[1,2] 和 [3,4] 不可以合并。
我们的任务是判断这些区间是否可以最终合并为一个闭区间，如果可以，将这个闭区间输出，否则输出no。

Input
第一行为一个整数 n，3≤n≤50000。表示输入区间的数量。 之后 n 行，在第 i 行上（1≤i≤n），为两个整数 ai 和 bi ，整数之间用一个空格分隔，表示区间 [ai ,bi]（其中 1≤ai≤bi≤10000）。

Output
输出一行，如果这些区间最终可以合并为一个闭区间，输出这个闭区间的左右边界，用单个空格隔开；否则输出 no。

Sample Input 1
5
5 6
1 5
10 10
6 9
8 10

Sample Output 1
1 10
*/
#include <iostream>
#include <algorithm>
using namespace std;

// 定义节点结构体，保存区间的左右边界
struct Node {
    int left; // 区间左边界
    int right; // 区间右边界
};

// 比较函数，用于区间排序
bool cmp(Node a, Node b) {
    return a.left < b.left; // 以左边界作为排序依据
}

Node a[50005]; // 存储区间数组

int main() {
    int n;
    cin >> n; // 读取区间数量
    for (int i = 1; i <= n; i++) {
        cin >> a[i].left >> a[i].right; // 读取每个区间的左右边界
    }

    // 对所有区间按照左边界升序排序
    sort(a + 1, a + 1 + n, cmp);

    // 初始化第一段区间的左、右边界
    int leftBound = a[1].left;
    int rightBound = a[1].right;
    bool flag = true; // 代表可以合并成一个区间

    // 从第二个区间开始，尝试合并所有区间
    for (int i = 2; i <= n; i++) {
        // 如果当前区间的左边界在已合并区间的右边界之后，说明两个区间无法合并
        if (a[i].left <= (rightBound + 1)) {
            // 更新右边界为当前区间的右端点与已合并的右端点之中的最大值
            rightBound = max(a[i].right, rightBound);
        } else {
            // 当前区间无法合并，设置标志位为false
            flag = false;
            break;
        }
    }

    // 根据标志位输出结果
    if (flag) {
        cout << leftBound << " " << rightBound << endl; // 输出合并后的区间
    } else {
        cout << "no" << endl; // 输出无法合并的结果
    }
}

/*
标准答案:

#include<bits/stdc++.h>
using namespace std;

struct node {
    int l, r;
} a[50005];

bool cmp(node x, node y) {
    return x.l < y.l; //左端点升序
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].l >> a[i].r;
    }
    sort(a + 1, a + 1 + n, cmp);
    int L = a[1].l, R = a[1].r; //记录区间左右值
    for (int i = 2; i <= n; i++) {
        if (R < a[i].l) {
            cout << "no";
            return 0;
        } else {
            R = max(R, a[i].r);
        }
    }
    cout << L << ' ' << R;
    return 0;
}
*/
