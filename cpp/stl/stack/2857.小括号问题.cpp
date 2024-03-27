/*
2857 小括号问题

Description
假设表达式中只允许包含一种括号：圆括号，需要成对出现。即(( ))或(( )( ))等为正确的格式，(( )或 ( ))或(((均为不正确的格式。
给定一串括号输入（换行作为结束符），检测格式是否正确，若正确输出YES；错误输出NO。
（括号数量≤100）

Input
无

Output
无

Sample Input 1
(())

Sample Output 1
YES
*/
#include <iostream>
#include <stack>
using namespace std;

char a[201];
stack<char> s;

int main() {
    cin >> a;
    int len = strlen(a);

    for (int i = 0; i < len; i++) {
        if (a[i] == '(') {
            s.push(a[i]);
        } else if (s.empty() != 1 && s.top() == '(') {
            s.pop();
        } else {
            cout << "NO" << endl;
            return 0;
        }
    }

    if (s.empty()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}