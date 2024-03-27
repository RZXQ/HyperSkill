/*
创建一个栈，将1、2、3、4、5入栈，输出栈中元素数量；再将所有元素出栈，再次输出栈中元素数量。
*/
#include <iostream>
#include <stack>

using namespace std;
stack<int> s;// 创建栈 s
int main() {
    for (int i = 1; i <= 5; i++) {
        s.push(i);
    }
    // 输出栈中元素个数
    cout << s.size() << endl;

    // 出栈
    // s.empty() -> 如果栈空, 返回值为 true(1), 如果栈非空, 返回值为 false(0)
    while (s.empty() != 1) {// 判断栈为非空
        s.pop();
    }

    cout << s.size() <<endl;
    return 0;

}