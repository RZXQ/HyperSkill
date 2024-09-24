# 编写程序，输入年份与月份，输出该月份所对应的天数
y = int(input('请输入年份：'))
m = int(input('请输入月份： '))
if m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12:
    print(m, '月有31天')
elif m == 4 or m == 6 or m == 9 or m == 11:
    print(m, '月有30天')
elif m == 2 and (y % 4 == 0 and y % 100 != 0 or y % 400 == 0):
    print(m, '月有29天')
else:
    print(m, '月有28天')
