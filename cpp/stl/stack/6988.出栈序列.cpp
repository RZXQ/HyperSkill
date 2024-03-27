/*
6988 出栈序列

Description
有5个不同的整数，按读入顺序入栈，再给一个可能的出栈顺序，请你编写一个程序检查出栈顺序是否合理，如果不合理请输出“no”，如果合理，请输出“yes”。

Input
第一行输入5个整数，表示顺序入栈的数字。
第二行输入5个整数，表示可能出栈的数字顺序。

Output
一行字符串，“no”或者“yes”。

Sample Input 1
3 6 2 5 4
2 6 3 5 4

Sample Output 1
yes
* */
#include <iostream>
#include <stack>

using namespace std;

int a[5];
int b[5];
stack<int> s;

int main() {
    // 输入 5 个整数, 入栈顺序
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }

    // 输入 5 个整数, 出栈顺序
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
    }

    int pointer = 0;// 出栈元素的下标
    for (int i = 0; i < 5; i++) {
        s.push(a[i]);// 安排一个元素入栈
        // 验证栈顶元素和出栈元素相等
        while (!s.empty() && s.top() == b[pointer]) {// 保证栈不为空, 再取栈顶
            s.pop();                                 // 出栈
            pointer++;                               // 下标加 1, 验证下一个元素
        }
    }

    if (s.empty()) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}