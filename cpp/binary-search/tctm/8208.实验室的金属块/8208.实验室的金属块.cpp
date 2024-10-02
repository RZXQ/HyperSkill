/*
Description
实验室购买了 n 种金属材料，每种一根，需要把这些金属材料切割后，装到至少 k 个罐子里面保存，每个罐子只能装一种金属，金属可以有剩余。
现在需要使用机器把金属切割成相同的体积，切割成的体积越大越好。
请帮忙计算这个最大体积是多少？

Input
第一行输入两个整数 n和k。
接下来 n 行，每行四个正整数，a、b、c，代表金属的长宽高，再输入一个整数 z，每种金属不能超过 z 个罐子。

Output
这个最大体积是多少？

Sample Input 1
10 8
87 48 52 44
49 99 69 37
94 31 33 69
7 39 24 5
7 30 64 12
49 40 90 74
9 100 95 3
27 95 42 25
18 7 58 20
64 69 35 61

Sample Output 1
107730

Hint
数据范围与提示
对于 100% 的数据，有 1≤n≤10 5 ，1≤k≤10 8 ，1≤a,b,c≤100。
*/
#include <iostream>
using namespace std;

// 定义一个结构体存储金属块的信息
struct Bottle {
    int length;
    int width;
    int height;
    int quantities; // 每种金属块的最大容器数量
};

Bottle a[100005]; // 存储所有金属块的信息

int main() {
    // n 表示金属块的种类数量，k 表示至少需要的总罐子数
    int n, k;

    cin >> n >> k;

    int maxVolume = 0; // 记录输入数据中最大的体积，为了后面计算二分的范围做准备
    for (int i = 1; i <= n; i++) {
        cin >> a[i].length >> a[i].width >> a[i].height >> a[i].quantities;
        int volume = a[i].length * a[i].width * a[i].height;
        maxVolume = max(maxVolume, volume); // 更新最大体积
    }

    int left = 1, right = maxVolume;
    int mid; // mid 记录二分中的体积
    int result = 0; // 记录切割成的最大体积

    // 开始二分查找
    while (left <= right) {
        int totalContainers = 0;
        mid = (left + right) / 2; // 计算中间值
        for (int i = 1; i <= n; i++) {
            int volume = a[i].length * a[i].width * a[i].height;
            // 计算每种金属块可以切割出的块数
            int pieces = volume / mid;

            // 如果切割出的块数超过数量限制，采用数量限制
            if (pieces > a[i].quantities) {
                pieces = a[i].quantities;
            }
            totalContainers += pieces; // 总罐子数累加
        }

        // 如果总罐子数大于或等于 k，说明 mid 是可行的
        if (totalContainers >= k) {
            result = mid; // 更新结果为当前的 mid
            left = mid + 1; // 尝试寻找更大的体积
        } else {
            right = mid - 1; // 尝试寻找更小的体积
        }
    }

    cout << result << endl; // 输出结果
    return 0;
}
