/*
Description
某大型卖场在节日期间举行购物竞赛，参赛者可以推着购物车在卖场中选择提前罗列好的商品，可选商品有 N 种，每种商品的总价为 M 元，被拆分成均等的 K 个包装，现在购物车里可以装的包装数量被固定为 L 个，问怎么选才能使购物车中的价值最大。

Input
第一行输入整数 N 和 L，用空格隔开。
第二行到第 N+1 行，每行两个整数 M 和 K，用空格隔开。

Output
一个整数，购物车中可以装载的最大价值。

Sample Input 1
5 10
12 6
8 2
20 4
7 7
15 5

Sample Output 1
40

Hint
数据范围与提示
1≤N,L≤100，1≤M,K≤100，M%K=0
*/
#include <iostream>
#include <algorithm>

using namespace std;

struct cmdt {
    int price;
    int num;
    int ave;
};

bool cmp(cmdt x, cmdt y) {
    return x.ave > y.ave;
}

cmdt box[105];

int main() {
    int n, l; // n 个商品, 购物车中的总数量 L
    cin >> n >> l;

    for (int i = 1; i <= n; i++) {
        cin >> box[i].price >> box[i].num;
        box[i].ave = box[i].price / box[i].num;
    }

    sort(box + 1, box + 1 + n, cmp);

    int sum = 0;
    int loadedQuantities = 0;
    for (int i = 1; i <= n; i++) {
        if (loadedQuantities + box[i].num <= l) {
            loadedQuantities += box[i].num;
            sum += box[i].price;
        } else {
            sum += box[i].ave * (l - loadedQuantities);
            break;
        }
    }

    cout << sum;
}