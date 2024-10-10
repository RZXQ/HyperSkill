/*
Description
现有一字典，查找字典15到45页中，某一页的页码，用二分法快速翻至所需要页码，需要翻多少次？（中间值 mid = (最大值+最小值)/2）

Input
字典中某一页的页码n。（15≤n≤45）

Output
一个整数，表示查找的次数。

Sample Input 1
18

Sample Output 1
3
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
