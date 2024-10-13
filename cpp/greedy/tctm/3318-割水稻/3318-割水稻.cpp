/*
Description
水稻已经成熟，必须尽快收割。由于镰刀的数量有限，需要农民伯伯轮流使用，因此一名农民伯伯的收获时间=等待时间+收割时间。
请你安排镰刀的使用顺序，让所有农民伯伯的总收获时间最少。

Input
第一行两个整数n和r，表示农民伯伯人数和镰刀数量。（n≤400，r≤200）
第二行n个整数ti，表示每位农民伯伯的收割时间。（ti≤20）

Output
输出一个整数，表示最少的总收获时间。

Sample Input 1
4 2
9 5 3 10

Sample Output 1
35
*/
#include <iostream>
#include <algorithm>
using namespace std;

int a[405]; // 存储每位农民收割时间的数组

int main() {
    int n, r; // n是农民的数量, r是镰刀的数量
    cin >> n >> r;

    // 读取每位农民的收割时间
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // 将收割时间按从小到大排序
    sort(a + 1, a + 1 + n);

    int totalTime = 0;

    // 计算从第(r+1)个农民开始的总时间，包含等待时间和收割时间
    for (int i = r + 1; i <= n; i++) {
        a[i] = a[i] + a[i - r]; // 加上等待时间（前几个农民收割完成的时间）
        totalTime += a[i];
    }

    // 加上前r个农民的收割时间（这些农民没有等待时间）
    for (int i = 1; i <= r; i++) {
        totalTime += a[i];
    }

    // 输出所有农民的最短总收获时间
    cout << totalTime;

    return 0;
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, r;
    cin >> n >> r;
    int a[405];
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    int t = 0;
    for (int i = r + 1; i <= n; i++) {
        a[i] = a[i] + a[i - r];
    }
    for (int i = 1; i <= n; i++) t += a[i];
    cout << t;
    return 0;
}
*/
