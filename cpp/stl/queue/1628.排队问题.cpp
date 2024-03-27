/*
1628 排队问题

Description
        有 n 个人排队，每个人有一个编号 i（ 1 ≤ i ≤ n ）,从左往右“ 1，2，1，2，…”报数，报到“ 1 ”的人出列，数到“ 2 ”的人立即占到队伍的最右端。报数过程反复进行，直到 n 个人都出列为止。已知 n个人原来的顺序，请写出他们的出列顺序。

                        Input
                                第一行为 n（ n≤100 ），第二行为 n 个编号 i（ 1≤i≤n），且 i 不会重复。

                                        Output
                                                一行，为他们的出列编号。

                                                        Sample Input 1
                8
                1 2 3 4 5 6 7 8

                Sample Output 1
                1 3 5 7 2 6 4 8

                Sample Input 2
                4
                2 5 1 3

                Sample Output 2
                2 1 5 3
                * */
#include <iostream>
#include <queue>

                using namespace std;

queue<int> q;

int main() {
    int n;// n 队列人数, num 编号
    int num;
    cin >> n;

    for (int i = 0; i < n; i++) {// n 次入队操作
        cin >> num;
        q.push(num);// 入队操作
    }

    int k = 1;// 报数
    while (q.empty() != 1) {
        if (k % 2 != 0) {            // k 为奇数
            cout << q.front() << ' ';// 输出队首元素
            q.pop();                 // 队首出对
        } else {
            q.push(q.front());// 队首元素进入队尾
            q.pop();          // 队首出对
        }
        k++;
    }
    return 0;
}