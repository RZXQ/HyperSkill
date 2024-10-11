/*
Description
寒假到了，童童终于可以开心的看电视节目了。寒假播放的少儿节目太多了，童童想尽量多的看到这些节目，但是童童有个习惯，他只看完整的节目。
现在他把他喜欢的电视节目的转播时间表给你，你能帮他合理安排吗？

Input
输入包含多组测试数据。每组输入的第一行是一个整数 n（n≤100），表示童童给你的节目表上节目的总数。
接下来 n 行，每行输入两个整数 si 和 ei（1≤i≤n，表示第 i 个节目的开始和结束时间，为了简化问题，每个时间都用一个正整数表示。
当 n=0 时，输入结束。

Output
对于每组输入，输出能完整看到最多多少个节目。

Sample Input 1
12
1 3
3 4
0 7
3 8
15 19
15 20
10 15
8 18
6 12
5 10
4 14
2 9
5
1 5
2 6
5 8
7 13
9 12
0

Sample Output 1
5
3

Hint
数据范围与提示：
n≤100
*/
#include <cstdio>
#include <algorithm>
using namespace std;

struct Tv {
    int startTime;
    int endTime;
};

Tv a[105];

// 贪心策略是对节目按照结束时间从早到晚排序，结束时间越早的节目越先安排，
// 因为这样可以让出最长的剩余时间给后面的节目，以便观看更多节目
bool cmp(Tv a, Tv b) {
    return a.endTime < b.endTime;
}

int main() {
    int n;
    while (true) {
        scanf("%d", &n);
        if (n == 0) {
            break; // 当n为0时，结束输入数据
        }

        for (int i = 1; i <= n; i++) {
            scanf("%d%d", &a[i].startTime, &a[i].endTime);
        }

        // 将节目按结束时间从小到大进行排序
        sort(a + 1, a + 1 + n, cmp);

        int count = 1; // 看的节目的数量，默认看第一个节目（结束时间最早的那个节目）

        int pointer = 1; // 当前观看的节目的指针，指代当前看的节目的下标，初始为第一个节目（结束时间最早的节目）

        for (int i = 2; i <= n; i++) {
            // 当前节目的开始时间大于等于上一个观看节目的结束时间才可以观看
            if (a[i].startTime >= a[pointer].endTime) {
                count++; // 计数增加
                pointer = i; // 更新当前观看的节目
            }
        }

        // 输出能完整观看的最多节目数量
        printf("%d\n", count);
    }

    return 0;
}

/*
标准答案:
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int s;
    int e;
};

Node a[105];

bool cmp(Node x, Node y) {
    if (x.e != y.e) return x.e < y.e;
    else return x.s < y.s;
}

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        //n不等于0就继续
        for (int i = 1; i <= n; i++)
            cin >> a[i].s >> a[i].e;
        sort(a + 1, a + n + 1, cmp); //结束时间早的在前
        int s = 1; //统计节目数量，默认第1可以看
        Node t = a[1]; //t记录已统计的最后1个节目
        for (int i = 2; i <= n; i++) {
            //当前节目开始时间不小于t的结束时间
            if (a[i].s >= t.e) {
                s++;
                t = a[i];
            }
        }
        cout << s << endl;
        cin >> n; //输入下1组n，如果n=0则退出while
    }
    return 0;
}

*/