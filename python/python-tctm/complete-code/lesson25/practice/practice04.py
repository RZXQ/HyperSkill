# 课堂练习四
# 编写程序，实现1-1000的逢三必过（每当数到带数字3或者3的倍数时，输出'过'）
for i in range(1, 1001):
    if i % 3 == 0 or i % 10 == 3 or i // 10 % 10 == 3 or i // 100 == 3:
        print('过')
        continue
    print(i)
