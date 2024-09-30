#include <iostream>
using namespace std;

int s, n, m;
int a[100010];

int main() {
    cin >> s >> n >> m; // s 总长度, n 岩石个数, m 是最多移走的岩石数量

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int L = 1, R = s, mid = 0, ans = 0;

    while (L <= R) {
        mid = (L + R) / 2;

        int ptr = 0; // ptr 是前一个岩石的位置(移走的那个岩石的前一个岩石位置)
        int cnt = 0; // cnt 记录移走的数量

        for (int i = 1; i <= n; i++) {
            if (a[i] - a[ptr] < mid) {
                cnt++;
            } else {
                ptr = i;
            }
        }

        if (s - a[ptr] < mid) {
            // 处理最后一块石头, 详见 summary
            cnt++;
        }

        if (cnt <= m) {
            // 如果移动的石头的数量小于 m, 就需要考虑是不是最小间距还可以更大一些
            ans = mid; // 记录可用间距
            L = mid + 1; // 尝试更大的间距
        } else {
            R = mid - 1;
        }
    }

    cout << ans;
    return 0;
}
