/*
Description
森林战争中兔子们决定越过一个无人防守的湖泊偷袭敌人。一共n名士兵，输入每名士兵的体重。只有一艘船，船的载重量一定（需要输入）。只能运输一次，要求能装载最多的士兵，最多能运送多少名士兵？

Input
共两行：
第一行输入两个整数，士兵数量和船载重量（小于2000）。
第二行，输入每名士兵的体重（体重<300）。

Output
共1行，最多装载多少名士兵。

Sample Input 1
5 11
7 2 6 4 5

Sample Output 1
3
*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    //定义变量和数组
    int n, c, w[2001] = {};
    //输入士兵个数n和船载重量
    cin >> n >> c;
    //输入n个士兵兔体重
    for (int i = 0; i < n; i++)
        cin >> w[i];
    //按照体重升序排序
    sort(w, w + n);
    //tmp计算上船的总体重ans数量
    int tmp = 0, ans = 0;
    for (int i = 0; i < n; i++) {
        //从体重最小士兵开始依次上船
        tmp += w[i];
        //上船士兵兔总重量小于载重量
        if (tmp <= c) {
            ans++; //统计士兵数量
        } else {
            break; //否则终止循环
        }
    }
    cout << ans;
    return 0;
}
