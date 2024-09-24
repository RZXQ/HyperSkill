# 课堂练习三
# 编写程序，输出如下图所示的三角形效果
# 提示：1.先通过一个for循环嵌套，绘制前四行正着的三角形
#      2.再通过一个for循环嵌套，绘制后三行倒着的三角形（写两个循环嵌套）
'''     *
        * *
        * * *
        * * * *
        * * *
        * *
        *         '''
# 上边4行
for i in range(1, 5):
    for j in range(1, i + 1):
        print('*', end=' ')
    print()
# 下边3行
for i in range(1, 4):
    for j in range(1, 5 - i):
        print('*', end=' ')
    print()
