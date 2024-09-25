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
    int L = 1;
    int R = 1000000000;
    int mid;

    int target;
    cin >> target;

    int count = 0;

    while (L <= R) {
        count++;
        mid = (L + R) / 2;

        if (mid == target) {
            break;
        } else if (mid < target) {
            L = mid + 1;
        } else if (mid > target) {
            R = mid - 1;
        }
    }

    if (count <= 20) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}