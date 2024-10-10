/*
Description
童程学校的信息奥赛课非常受欢迎。每次午休，学生们都要排队找IT龙老师答疑。有的同学问题简单，答疑时间短。有的同学问题难，答疑时间长。IT龙老师想到了一个办法，让助理老师对每个学生的问题预估一个答疑时长，写成小条给IT龙老师。请你编程帮助IT龙老师，找到一种排队顺序，让同学们的平均答疑完成时间最少（结果保留两位小数）。注意：答疑完成时间=自己的答疑时间+等前面同学的时间。

Input
第一行，输入答疑学生数量（学生数量≤1000）。
第二行，助理老师预估的每个学生的答疑时长（时长≤2000 单位分钟）。

Output
平均答疑完成时间最少。

Sample Input 1
4
3 1 2 6

Sample Output 1
5.50
*/
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int a[1005];

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    sort(a + 1, a + 1 + n);
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            sum += a[j];
        }
    }
    cout << fixed << setprecision(2) << (sum / n) << endl;
}
