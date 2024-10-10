/*
Description
请在一个有序递增数组中（不存在相同元素），找出值 x 的位置，如果 x 在数组中不存在，请输出 -1 ！

Input
第一行，一个整数 n ，代表数组元素个数（n≤5×10^6）
第二行，n 个数，代表数组的 n 个递增元素（1≤数组元素值≤10^8）
第三行，一个整数 x ，代表要查找的数（0≤x≤10^8）

Output
x 在数组中的位置，或者 -1。

Sample Input 1
10
1 3 5 7 9 11 13 15 17 19
3

Sample Output 1
2
*/
#include <iostream>
#include <cstdio>
using namespace std;

int a[5000005];

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    int target;
    scanf("%d", &target);

    int L = 1, R = n; // 1 和 n 是索引值 +1
    int mid; // mid 是猜的中间的索引值
    int index = -1;
    while (L <= R) {
        mid = (L + R) / 2;

        if (a[mid] > target) {
            R = mid - 1;
        } else if (a[mid] < target) {
            L = mid + 1;
        } else {
            index = mid;
            break;
        }
    }
    printf("%d", index);
}
