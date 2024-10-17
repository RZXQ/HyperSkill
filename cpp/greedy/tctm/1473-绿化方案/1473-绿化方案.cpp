/*
Description
x社区要绿化，社区也需要节省绿化经费，社区被划为 n 条路段，这 n 条路段依次编号为 1,2,3,...,n。每个路段最多可以种一棵树。现在居民们给出了 h 组建议，每组建议包含三个整数 b,e,t，表示居民希望在路段 b 到 e 之间至少要种 t 棵树。这些建议所给路段的区间可以交叉。请问：如果要满足所有居民的建议，至少要种多少棵树。

Input
第一行为 n，表示路段数。
第二行为 h，表示建议数。
下面 h 行描述一条建议：b,e,t，用一个空格分隔。

Output
输出只有一个数，为满足所有居民的建议，所需要种树的最少数量。

Sample Input 1
9
4
1 4 2
4 6 2
8 9 2
3 5 2

Sample Output 1
5

Hint
数据范围与提示
30%的数据满足0<n≤1000，0<h≤500
100%的数据满足0<n≤3×10 4 ，h≤5000，0<b≤e≤3×10 4 ，t≤e−b+1
*/
#include <iostream>
#include <algorithm>
using namespace std;

// 结构体定义：记录居民的建议
struct Suggest {
    int b; // 建议种树路段的左端点
    int e; // 建议种树路段的右端点
    int t; // 建议种树的数量
};

// 存储所有居民的建议
Suggest suggestions[5005];

// 比较函数：以建议的右端点进行升序排序
bool cmp(Suggest a, Suggest b) {
    return a.e < b.e;
}

// 记录路段上是否已经种树的数组
int a[30005];

int main() {
    int n; // 路段数量
    int h; // 建议数量
    cin >> n >> h;

    // 读取所有居民的建议
    for (int i = 1; i <= h; i++) {
        cin >> suggestions[i].b >> suggestions[i].e >> suggestions[i].t;
    }

    // 将建议按右端点升序排序
    sort(suggestions + 1, suggestions + 1 + h, cmp);

    // 处理每条建议
    for (int i = 1; i <= h; i++) {
        int alreadyPlanted = 0; // 当前区间已经种的树的数量
        // 统计建议区间内已经种的树
        for (int j = suggestions[i].e; j >= suggestions[i].b; j--) {
            if (a[j] == 1) {
                alreadyPlanted++;
            }
        }

        // 需要种植的树的数量
        int needPlanet = suggestions[i].t - alreadyPlanted;
        // 从右到左种树，直到达到建议数量或不需要继续种树
        for (int j = suggestions[i].e; j >= suggestions[i].b && needPlanet > 0; j--) {
            if (a[j] == 1) {
                continue; // 如果当前位置已经种了树，跳过
            } else {
                a[j] = 1; // 在当前位置种树
                needPlanet--; // 更新需要种植的数量
            }
        }
    }

    int ans = 0; // 统计最终种了多少树
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            ans++;
        }
    }
    cout << ans; // 输出最终种树的数量
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;

struct node {
    int b, e, t;
} a[5001];

bool cmp(node x, node y) {
    return x.b > y.b; //左端点降序
}

int tree[30001]; //0:未种树
int main() {
    int n, h;
    cin >> n >> h;
    for (int i = 1; i <= h; i++) {
        cin >> a[i].b >> a[i].e >> a[i].t;
    }
    sort(a + 1, a + 1 + h, cmp);
    for (int i = 1; i <= h; i++) {
        //开始种树
        int cnt = 0; //count
        for (int j = a[i].b; j <= a[i].e; j++) {
            //从前到后统计这个区间有多少树
            if (tree[j] == 1) {
                cnt++;
            }
        }
        if (cnt >= a[i].t) continue; //满足条件不需要种树
        else cnt = a[i].t - cnt; //需要种树的数量
        for (int j = a[i].b; j <= a[i].e; j++) {
            //从前往后种树
            if (tree[j] == 0) {
                tree[j] = 1;
                cnt--;
            }
            if (cnt == 0) break; //种完啦
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (tree[i] == 1) ans++;
    }
    cout << ans;
    return 0;
}
*/

