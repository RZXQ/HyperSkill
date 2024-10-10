#include <istream>
/*
Description
先给出 N 个整数，然后查找整数 d 是否在这 N 个整数中出现过。

Input
第一行输入两个整数 N 和 M，N 表示有 N 个整数，M 表示要查找的整数 d 的个数。
接下来的一行输入 N 个整数 x , 两个整数间空格隔开。
接下来有 M 行，每行输入一个整数 d，如果 d 在这 N 个整数中出现过，则输出"Yes"(不加引号)，否则输出"No"。

Output
对于每个整数 d，输出占一行。

Sample Input 1
3 2
1 2 3
1
4

Sample Output 1
Yes
No

Hint
数据范围与提示
(0<N≤1000000，0<M≤10000，0≤d≤500000000，0≤x≤500000000)
*/
#include <algorithm>
#include <cstdio>

using namespace std;

int a[1000005];

bool binarySearch(int leftIndex, int rightIndex, int target) {
    bool flag = false; // 定义标记变量, 表示是否找到了;
    int mid; // mid 是数组左边索引还有右边索引的中间值
    while (leftIndex <= rightIndex) {
        mid = (leftIndex + rightIndex) / 2;
        if (a[mid] == target) {
            flag = true;
            break;
        } else if (a[mid] > target) {
            rightIndex = mid - 1;
        } else {
            leftIndex = mid + 1;
        }
    }
    return flag;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    sort(a + 1, a + n + 1);

    for (int i = 1; i <= m; i++) {
        int temp;
        scanf("%d", &temp);
        printf("%s", binarySearch(1, n, temp) ? "Yes\n" : "No\n");
    }
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;
int a[1000010];

int main() {
    int n, m;
    int d;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= m; i++) {
        cin >> d;
        //数组下标1~n的元素中二分查找整数d
        //注意：查找范围是1~n，就是L=1，R=n
        //但是参与数值比较的是a[mid] 与 d
        bool f = false; //设置标记为假，表示还没找到d
        int L = 1, R = n, mid;
        while (L <= R) {
            mid = (L + R) / 2;
            if (a[mid] == d) {
                //找到目标，将标记f赋值真
                f = true;
                break;
            } else if (a[mid] < d) {
                //目标可能在右半
                L = mid + 1;
            } else {
                //目标可能在左半
                R = mid - 1;
            }
        }
        //根据f判断目标是否存在
        if (f) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
*/
