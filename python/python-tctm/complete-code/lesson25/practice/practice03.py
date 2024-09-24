# 课堂练习三
# 已知数字序列：1 4 13 40 121...后一个数字是前面数字的3倍加1，求该序列前10个数字的和
num = 1
sum = 0
for i in range(10):
    sum += num
    num = num * 3 + 1
print(sum)
