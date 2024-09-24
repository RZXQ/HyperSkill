# 课堂练习二
# 编写代码，使用turtle库以及for循环的相关知识在绘图窗口中绘制正方形和三角形两种基本图形。
# 要求设置窗口标题为"基本图形"；设置窗口大小600*600；设置画笔速度为最快速度；最后隐藏小海龟。
# 提示：
# 1. 绘制正方形的起始坐标为(-230,70),绘制三角形的起始坐标为(30,-110)
# 2. 正方形的边长为180，三角形的边长为200
import turtle

turtle.title('基本图形')
turtle.setup(600, 600)
turtle.speed(0)
turtle.hideturtle()
turtle.penup()
turtle.goto(-230, 70)
turtle.pendown()
for i in range(4):
    turtle.forward(180)
    turtle.right(90)
turtle.penup()
turtle.goto(30, -110)
turtle.pendown()
for index in range(3):
    turtle.forward(200)
    turtle.left(120)
turtle.done()
