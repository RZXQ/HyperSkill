/*
有以下 3 段木材: 865, 472, 1000, 每段长度不等, 现在需要切出 5 段一样长的木材, 这 5 段木材, 每段最长可以有多长? (以整数作为单位切割)
*/
#include <iostream>
using namespace std;

int a[3] = {865, 472, 1000};

int main() {
    // 1. 确定寻找范围
    int L = 1, R = 1000;

    int mid;
    int ans = 0;

    while (L <= R) {
        // 2. 取中间值
        mid = (L + R) / 2;

        // 3. 计算切割后的数量
        int cnt = 0;
        for (int i = 0; i < 3; i++) {
            cnt += a[i] / mid;
        }

        // 4. 验证并调整范围
        if (cnt >= 5) {
            ans = mid; // 记录答案
            L = mid + 1;
        } else {
            R = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
