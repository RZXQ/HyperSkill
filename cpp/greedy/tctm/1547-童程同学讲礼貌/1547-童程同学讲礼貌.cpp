/*
Description
童程学校的学生非常遵守学校的规章制度。小朋友们课间喝水，都去排队打水，但是条件很有限，只有一台饮水机。为了珍惜有限的课余时间，老师想到了一个办法，让同学们的平均等待时间最少。现在有 n 个小朋友在一个饮水机前排队接水，假如每个人接水的时间为 Ti，请你编程帮老师找出这 n 个小朋友排队的一种顺序，使得 n 个人的平均等待时间最小。(需要考虑自己打水的时间)

Input
输入文件共两行，第一行为 n，1≤n≤1000
第二行分别表示第 1 个同学到第 n 个同学每人的接水时间 T1，T2，…，Tn，每个数据之间有 1 个空格，0<Ti≤1000。

Output
输出文件有一行，为老师得到的某种排列方案下的最小平均等待时间(输出结果精确到小数点后两位)。

Sample Input 1
10
56 12 1 99 1000 234 33 55 99 812

Sample Output 1
532.00

Hint
数据范围与提示：
1≤n≤1000，0<Ti≤1000。
*/
#include <cstdio>
#include <algorithm>
using namespace std;

int a[1005];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a + 1, a + 1 + n);

    double waitingTime = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            waitingTime += a[j];
        }
    }

    printf("%.2f", (waitingTime / n));

    return 0;
}
