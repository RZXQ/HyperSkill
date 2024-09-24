# 编写程序，判断1990-2070年哪些是闰年，哪些是平年
# 满足闰年的条件是年份能被4整除且不能被100整除或者年份能被400整除
for year in range(1990, 2071):
    if year % 4 == 0 and year % 100 != 0 or year % 400 == 0:
        print(year, '是闰年')
    else:
        print(year, '是平年')
