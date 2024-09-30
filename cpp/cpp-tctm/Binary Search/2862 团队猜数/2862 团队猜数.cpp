/*
2862 团队猜数

Description
小童打算报名一个猜数游戏，游戏规则是这样的：三人组队每人猜数一次，每次给定一个不超过10亿的正整数。机智的小童把二分算法猜数传授给了其他两名组员，编程统计三人猜数的总次数。（ 中间值 mid = (最大值+最小值)/2 ）

Input
一行包含空格分隔的3个整数，分别表示三个要猜的数，范围不超过10亿。

Output
一个整数，表示团队猜数的总次数。

Sample Input 1
1000000 5000000 100

Sample Output 1
84
*/
#include <iostream>
using namespace std;

int binarySearch(int L, int R, int target) {
    int count = 0;
    int mid;
    while (L <= R) {
        mid = (L + R) / 2;
        count++;
        if (mid == target) {
            break;
        } else if (mid > target) {
            R = mid - 1;
        } else {
            L = mid + 1;
        }
    }
    return count;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int sum = binarySearch(1, 1000000000, a) + binarySearch(1, 1000000000, b) + binarySearch(1, 1000000000, c);
    cout << sum;

    return 0;
}
