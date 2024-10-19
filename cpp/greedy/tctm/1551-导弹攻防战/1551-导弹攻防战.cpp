/*
Description
x国为了防御y国的导弹袭击，研发出一种导弹拦截系统。但是这种导弹拦截系统有一个缺陷：虽然它拦截的第一发炮弹可以是任意的高度，但是以后拦截的每一发炮弹都不能高于前一发的高度。某天，雷达捕捉到敌国的导弹来袭，告诉你这些来的导弹的高度，如果要拦截所有导弹最少要配备多少套这种导弹拦截系统。
注意：导弹顺序是固定的。

Input
两行，第一行 n，表示有 n 个导弹，其中 1≤n≤500。
接下来一行 n 个整数，表示 n 个导弹的高度，每个导弹的高度不超过 30000。

Output
输出一个 k，表示最少需要 k 套这样的系统才能拦截所有的导弹。

Sample Input 1
6
389 207 300 200 310 65

Sample Output 1
3

Hint
数据范围与提示：
1≤n≤500，每个导弹的高度不超过 30000。
*/
#include <iostream>     // 引入输入输出流库
#include <climits>      // 引入整型变量限制库，提供 INT_MAX 常量

using namespace std; // 使用标准命名空间

int missileHeights[505]; // 数组，用于存储每枚导弹的高度
int systems[505]; // 数组，用于存储每个拦截系统当前能拦截的最大高度

int main() {
    int n; // 变量，表示导弹的数量
    cin >> n; // 输入导弹的数量

    // 输入每枚导弹的高度
    for (int i = 1; i <= n; i++) {
        cin >> missileHeights[i]; // 读取第 i 枚导弹的高度
    }

    int systemCount = 0; // 变量，记录拦截系统的数量，初始为 0

    // 遍历每一枚导弹，尝试分配给合适的拦截系统
    for (int i = 1; i <= n; i++) {
        int bestSystemIndex = -1; // 记录最合适的拦截系统的索引，初始为 -1 表示未找到
        int minDifference = INT_MAX; // 记录最小高度差，初始为最大整数

        // 尝试将当前导弹分配给已有的拦截系统
        for (int j = 1; j <= systemCount; j++) {
            // 如果当前系统能拦截该导弹（导弹高度小于等于系统的拦截高度）
            if (missileHeights[i] <= systems[j]) {
                int difference = systems[j] - missileHeights[i]; // 计算系统高度与导弹高度的差值
                // 如果差值更小，更新最小差值和最合适的系统索引
                if (difference < minDifference) {
                    minDifference = difference; // 更新最小差值
                    bestSystemIndex = j; // 更新最合适的系统索引
                }
            }
        }

        // 判断是否找到合适的拦截系统
        if (bestSystemIndex != -1) {
            // 找到了合适的系统，将导弹分配给该系统，并更新系统的拦截高度
            systems[bestSystemIndex] = missileHeights[i];
        } else {
            // 未找到合适的系统，创建新的拦截系统
            systems[++systemCount] = missileHeights[i]; // 增加系统数量，并将导弹分配给新系统
        }
    }

    cout << systemCount << endl; // 输出最少需要的拦截系统数量

    return 0; // 程序结束，返回 0 表示正常退出
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;
int a[501]; //存储每枚导弹的高度
int main() {
    int n; //n枚导弹
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int b[501] = {}; //拦截系统
    b[1] = a[1]; //第一套系统拦截
    int k = 1;
    for (int i = 2; i <= n; i++) {
        bool flag = false; //现有系统不能拦截状态
        int m;
        for (int j = 1; j <= k; j++) {
            //遍历k套系统
            if (b[j] >= a[i]) {
                //可以拦截
                if (flag == false) {
                    //找到第一个可拦截的系统
                    m = j; //第一个可拦截系统的编号
                    flag = true; //现有系统能拦截状态
                } else {
                    if (b[j] < b[m]) m = j; //找到更小的拦截系统
                }
            }
        }
        if (flag == false) {
            //新增拦截系统
            k++;
            b[k] = a[i];
        } else b[m] = a[i]; //m号系统拦截
    }
    cout << k;
    return 0;
}
*/
