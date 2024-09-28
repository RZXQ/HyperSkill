/*
2830 猜数游戏2

Description
小童打算报名一个猜数游戏，游戏规则是这样的：给定一个不超过10亿的数字，如果能在20次及以内猜中数字，就可以得到游戏奖章，超过20次则没有奖励。
请你编写程序判断小童能否得到游戏奖章，得到输出“ YES”,否则输出“NO” 。（ 中间值 mid = (最大值+最小值)/2 ）

Input
输入一个整数n，表示游戏给定的数字。(1≤n≤1000000000)

Output
一个单词。 “ YES” 表示小童得到游戏奖章。 “NO”表示没有得到游戏奖章。

Sample Input 1
500000000

Sample Output 1
YES

Sample Input 2
110000000

Sample Output 2
NO
*/
#include <iostream>
using namespace std;

int main() {
    int n, s = 0, L = 15, R = 45, mid; //n:待查找页码 s:查找的次数 初始化最小值L最大值R
    cin >> n; //输入页码
    while (L <= R) {
        //循环条件
        mid = (L + R) / 2; //计算中间值
        s++; //查找次数+1
        if (mid == n) {
            //中间值等于n
            break;
        } else if (mid > n) {
            //中间值大于n
            R = mid - 1; //更新最大值R
        } else {
            //中间值小于n
            L = mid + 1; //更新最小值L
        }
    }
    cout << s; //输出查找次数
    return 0;
}
