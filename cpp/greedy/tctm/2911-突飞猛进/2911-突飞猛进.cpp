/*
Description
兔子作战势如破竹，各级单位都需要开作战会议，条件有限，只有一间会议室。给出一张会议时间表，兔子们在一天中怎么安排会议时间，才能利用这一间会议室开最多的作战会议，取得突飞猛进的作战效果，两个会议之间不需要准备时间，一个会议结束，另一个会议立即开始。

Input
第一行一个整数n 。(1≤n≤1000)
接下来n行，每行两个整数，代表作战会议的开始时间和结束时间。（0<两个整数≤24）。

Output
一天中最多开多少个作战会议。

Sample Input 1
5
8 13
2 11
7 9
13 16
3 8

Sample Output 1
3

Hint
数据范围与提示：
1≤n≤1000，0<时间≤24
*/
#include <cstdio>
#include <algorithm>
using namespace std;

struct Meeting {
    int startTime;
    int endTime;
};

Meeting a[1005];

bool cmp(Meeting a, Meeting b) {
    return a.endTime < b.endTime;
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d %d", &a[i].startTime, &a[i].endTime);
    }

    sort(a + 1, a + n + 1, cmp);

    int count = 1;
    int pointer = 1; // 指向的是选择的可以开会的时间段
    for (int i = 2; i <= n; i++) {
        if (a[i].startTime >= a[pointer].endTime) {
            pointer = i;
            count++;
        }
    }

    printf("%d", count);
}

// 标准代码:
// #include<bits/stdc++.h>
// using namespace std;
//
// struct node {
//     //s会议开始时间，e会议结束时间
//     int s, e;
// } T[1010], tmp;
//
// bool cmp(node x, node y) {
//     //按照会议结束时间升序排列
//     return x.e < y.e;
// }
//
// int main() {
//     int n = 0;
//     cin >> n;
//     for (int i = 0; i < n; i++)
//         cin >> T[i].s >> T[i].e;
//     sort(T, T + n, cmp); //结构体数组排序
//     int sum = 1; //统计会议数，第1个会议先统计
//     tmp = T[0]; //临时存储已选会议
//     for (int i = 1; i < n; i++) {
//         //从第二个会议开始遍历
//         if (T[i].s >= tmp.e) {
//             //当前会议的开始时间 >=上个会议的结束时间
//             sum++; //符合条件，会议不冲突，累加会议数
//             tmp = T[i]; //更新已选会议
//         }
//     }
//     cout << sum; //输出结果
//     return 0;
// }
