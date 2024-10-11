#include <cstdio>
#include <algorithm>
using namespace std;

// 定义一个结构体表示金属种类
struct Metal {
    int n; // 金属的总重量
    int v; // 金属的总价值
    double unitPrice; // 金属的单位价值，即总价值与总重量的比值
};

Metal a[10005]; // 创建一个用于存储金属种类的数组

// 比较两种金属的单位价值大小，用于排序
bool cmp(Metal a, Metal b) {
    return a.unitPrice > b.unitPrice; // 单位价值高的金属排在前面
}

int main() {
    int k; // 测试数据的组数
    scanf("%d", &k);

    // 遍历每一组测试数据
    for (int j = 0; j < k; j++) {
        int w; // 背包的最大承重量
        scanf("%d", &w);

        int s; // 金属的种类数量
        scanf("%d", &s);

        // 输入每种金属的总重量和总价值，并计算单位价值
        for (int i = 1; i <= s; i++) {
            scanf("%d%d", &a[i].n, &a[i].v);
            a[i].unitPrice = 1.0 * a[i].v / a[i].n; // 计算单位价值
        }

        // 按照单位价值从高到低排序
        sort(a + 1, a + 1 + s, cmp);

        double totalWeight = 0; // 已装入背包的总重量
        double totalPrice = 0; // 已装入背包的总价值
        for (int i = 1; i <= s; i++) {
            if ((totalWeight + a[i].n) <= w) {
                // 如果当前金属的总重量加上已装入背包的总重量不超过背包的最大承重量
                totalPrice += a[i].v; // 将当前金属的总价值加入总价值
                totalWeight += a[i].n; // 将当前金属的总重量加入总重量
            } else {
                // 如果当前金属的总重量超过了背包的剩余承重量
                totalPrice += ((w - totalWeight) * a[i].unitPrice); // 计算可装入的部分价值
                break; // 背包已满，退出循环
            }
        }
        printf("%.2lf\n", totalPrice); // 输出结果，精确到小数点后两位
    }
}

// 标准答案: 
// #include<bits/stdc++.h>
// using namespace std;
//
// struct node {
//     //结构体存储重量和价值
//     int wei, v;
//     //用来存储单位价值
//     double p;
// } b[210];
//
// int k, w, s;
// bool my_cmp(node x, node y) { return x.p > y.p; } //按照单位价值降序排序
// int main() {
//     cin >> k;
//     //输入k组数据
//     while (k--) {
//         cin >> w >> s;
//         double sum = 0; //在while循环里面初始化
//         for (int i = 1; i <= s; i++) {
//             cin >> b[i].wei >> b[i].v;
//             b[i].p = b[i].v * 1.0 / b[i].wei; //计算单位价值
//         }
//         //排序
//         sort(b + 1, b + s + 1, my_cmp);
//         for (int i = 1; i <= s; i++) {
//             if (w - b[i].wei >= 0) {
//                 //能装入
//                 w -= b[i].wei; //装入，减去物品重量
//                 sum += b[i].v; //计算装入物品的价值
//             } else {
//                 //不能装入
//                 sum += w * b[i].p; //装一部分
//                 break; //终止循环
//             }
//         }
//         cout << fixed << showpoint << setprecision(2) << sum << endl; //输出一定要加换行
//     }
//     return 0;
// }
