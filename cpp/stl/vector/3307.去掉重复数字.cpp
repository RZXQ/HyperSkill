/*
3307 去掉重复数字

Description
有n个数字组成一组序列，现在要求删除重复出现的数字，使每个数字x只出现一次，输出删除重复数字后数组的新长度。
注意：用vector存储序列。

Input
两行，第一行表示序列中数字个数n（1 < n ≤ 106）。
第二行，n个数字，每个数字之间空格分隔（1<x ≤ 1018）。

Output
一行，表示删除重复数字后数组的新长度。

Sample Input 1
7
0 1 3 1 3 6 1234567890

Sample Output 1
5
* */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

vector<long long> v;// 创建一个空动态数组
int main() {
    int n;
    cin >> n;

    long long temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        v.push_back(temp);// 在尾部插入元素 m
    }

    sort(v.begin(), v.end());// 从小到大排序

    int count = 1;// 第一个数字

    // 遍历到倒数第二个数字
    for (int i = 0; i < v.size() - 1; i++) {
        if (v[i] != v[i + 1]) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}