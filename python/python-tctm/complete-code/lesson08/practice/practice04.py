# 课堂练习4
# 请使用turtle库和input指令实现一个绘制任意正多边形的程序。
# 提示：
# 使用input()实现输入框功能
# 已知在输入框中输入的内容是字符串类型，使用int()将输入的多边形边数转换为整数类型：n=int(input(内容))
# 使用while循环实现正多边形的绘制
# 任意正多边形的旋转角度是360/n,n表示边数
# 在下方书写代码
import turtle

n = int(input('请输入多边形的边数'))
i = 1
while i <= n:
    turtle.forward(100)
    turtle.right(360 / n)
    i = i + 1
turtle.done()
