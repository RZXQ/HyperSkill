# 编写程序，实现逢七必过的游戏程序
# 输出"过"字的条件是当前数字是7的倍数或者带7的数字
for i in range(1, 70):
    if i % 7 == 0 or i % 10 == 7:
        print('过')
        continue
    print(i)
