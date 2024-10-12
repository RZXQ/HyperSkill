/*
Description
童程学校的信息奥赛课非常受欢迎，每次午休，学生们都要排队找老师答疑。学校看到人山人海的学生，由原来1位老师增加到2位老师。
由于每位同学的答疑时间可能不同，学校想知道如何排队才能使学生总答疑完成时间最少。注意：每个学生的答疑完成时间=自己的答疑时间+等前面同学的时间。

Input
第一行 n表示学生人数 (n≤400)。
第二行n个整数，表示每位同学的答疑时间 ti ( ti≤30)。

Output
最少的总答疑时间。

Sample Input 1
4
2 3 1 2

Sample Output 1
11
*/
#include <cstdio>
#include <algorithm>
using namespace std;

// 计算某个老师的总答疑时间
// 参数a[]：该老师的学生答疑时间数组
// 参数pointer：该老师最后一个学生的索引
// 返回该老师的总答疑时间
int totalTimePerTeacher(int a[], int pointer) {
    int totalTime = 0;
    // 如果这个老师没有学生，则总答疑时间为0
    if (pointer == 0) {
        totalTime = 0;
    }
    // 逐个计算每个学生的答疑时间，累计等待时间
    for (int i = 1; i <= pointer; i++) {
        for (int j = 1; j <= i; j++) {
            totalTime += a[j];
        }
    }
    return totalTime;
}

int a[405]; // 存储所有学生的答疑时间
int t1[405]; // 存储分配给老师A的学生答疑时间
int t2[405]; // 存储分配给老师B的学生答疑时间

int main() {
    int n;
    // 读取学生人数
    scanf("%d", &n);

    // 读取每个学生的答疑时间
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    }

    // 对学生的答疑时间进行升序排序，较短时间的学生优先被安排
    sort(a + 1, a + 1 + n);

    int p1 = 0; // 初始化老师A最后一个学生的索引为0（表示老师A没有学生）
    int p2 = 0; // 初始化老师B最后一个学生的索引为0（表示老师B没有学生）
    t1[p1] = 0; // 老师A的学生答疑时间初始为0
    t2[p2] = 0; // 老师B的学生答疑时间初始为0

    // 遍历每个学生，按照贪心策略分配给两位老师
    for (int i = 1; i <= n; i++) {
        // 比较当前老师A和老师B的总答疑时间，选择时间较少的老师分配学生
        if (totalTimePerTeacher(t1, p1) <= totalTimePerTeacher(t2, p2)) {
            t1[++p1] = a[i]; // 分配给老师A，并更新老师A的学生队列
        } else {
            t2[++p2] = a[i]; // 分配给老师B，并更新老师B的学生队列
        }
    }

    // 计算两个老师的总答疑时间
    int answer = 0;
    answer += (totalTimePerTeacher(t1, p1) + totalTimePerTeacher(t2, p2));

    // 输出最少的总答疑时间
    printf("%d\n", answer);
}


/*
标准答案:
#include<bits/stdc++.h>
using namespace std;
int a[401];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+n); //升序排序
    for(int i=3;i<=n;i++){
        a[i]+=a[i-2];
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}
*/
