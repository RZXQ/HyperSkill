/*
Description
图书馆某书架有三层，第一层图书编号从1到36，第二层图书编号从1到15，第三层图书编号从5到26，编号都是连续的，现在从每层中拿下一本书，请用二分法查找，统计每层中找到这本书需要的比较次数。

Input
输入3个整数，用空格隔开，分别代表某层书架中图书的编号。

Output
输出3个整数，用空格隔开，分别为1、2、3层书架的查找次数。

Sample Input 1
5 5 5

Sample Output 1
5 4 4

Hint
提示：这里二分法取中间值的方法是，(L+R)/2，L为某层书架最左侧图书编号，R为最右侧图书编号。
*/
#include <iostream>
using namespace std;

int bs(int l, int r, int target) {
    int count = 0;
    int mid;
    while (l<=r) {
       mid = (l+r)/2;
        count++;
       if (mid < target) {
           l = mid + 1;
       } else if (mid >target) {
          r= mid-1;
       } else {break;}
    }
    cout << count<<" ";
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    bs(1,36,a);
    bs(1,15,b);
    bs(5,26,c);
}

/* 标准答案:
#include<iostream>
using namespace std;

int main() {
    int a[3][2] = {1, 36, 1, 15, 5, 26}, L, R, mid, cnt = 0, num;
    for (int i = 0; i < 3; i++) {
        //3层书架
        L = a[i][0]; //确定边界
        R = a[i][1];
        cin >> num; //输入要查找的数
        cnt = 0; //次数重置
        while (L <= R) {
            //判断边界
            cnt++; //统计次数
            mid = (L + R) / 2; //取中间值
            if (mid == num) {
                //判断中间值是否等于被猜数
                cout << cnt << " ";
                break; //退出循环
            } else if (mid > num) {
                //判断中间值是否大于被猜数
                R = mid - 1; //调整最大范围
            } else {
                L = mid + 1; //调整最小范围
            }
        }
    }
    return 0;
}
*/