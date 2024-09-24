# 课堂练习四
# 编写程序，使用for循环、取余运算符以及continue关键字输出100以内所有的偶数和
# 提示：
# 1. 使用当前数字对2取余的余数1来判断是否为奇数
# 2. 如果是奇数，就使用continue跳过当前循环
sum = 0
for i in range(1, 101):
    if i % 2 == 1:
        continue
    sum += i
print(sum)
