/*
Description
童程学校的信息奥赛课非常受欢迎。每次午休，学生们都要排队找老师答疑。有的同学问题简单，答疑时间短。有的同学问题难，答疑时间长。学校看到人山人海的学生，由原来只有1位老师增加到r位老师。
现在有n位同学排队向r位老师请教，每位同学自己的答疑时间可能不同，学校想知道如何排队才能使学生总答疑完成时间最少，输出n位同学平均花费时间。
注意：答疑完成时间=自己的答疑时间+等前面同学的时间。

Input
第一行两个整数n和r，表示学生与老师的人数(n≤400，r≤200)。
第二行n个整数ti，表示每位同学自己的答疑时间(ti≤20)。

Output
输出n位同学平均花费时间，结果保留小数点后2位。

Sample Input 1
6 3
9 5 3 7 10 5

Sample Output 1
8.67
*/
#include <cstdio>
#include <algorithm>
using namespace std;

int a[405]; // 储存每个学生的答疑时间
int totalTime; // 总的答疑时间
double avgTime; // 平均答疑时间

int main() {
    int n, r; // n 学生人数, r 老师人数
    scanf("%d%d", &n, &r); // 输入学生人数 n 和老师人数 r

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]); // 输入每个学生的答疑时间
    }

    sort(a + 1, a + 1 + n); // 将答疑时间进行排序

    for (int i = r + 1; i <= n; i++) {
        a[i] = a[i] + a[i - r]; // r 个学生分配一次新的答疑时间后的累积时间
    }

    for (int i = 1; i <= n; i++) {
        totalTime += a[i]; // 计算总的答疑时间
    }

    printf("%.2f", (totalTime * 1.0 / n)); // 输出平均答疑时间，保留两位小数

    return 0;
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;
int a[401];

int main() {
    int n, r;
    double t = 0;
    cin >> n >> r;
    for (int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1, a + 1 + n);
    for (int i = r + 1; i <= n; i++)
        a[i] += a[i - r];
    for (int i = 1; i <= n; i++) t += a[i];
    cout << fixed << setprecision(2) << t / n;
    return 0;
}
*/
