# 课堂练习三
# 编写代码，为程序中的"理想中的家园"使用turtle库绘制太阳，并设置窗口标题为"理想之屋"，窗口大小为1200*789，设置画笔速度为最快速度，最后隐藏小海龟
# 提示：
# 1. 绘制太阳的起始位置为(-320,200)
# 2. 设置太阳的填充色为金色gold
# 3. 绘制圆的函数是turtle.circle()，圆的半径为70
import turtle

turtle.bgpic('bg3.gif')
# 在下方书写代码设置窗口及画笔状态

# 在下方书写代码绘制太阳


# 画房子
# 房顶
turtle.penup()
turtle.goto(220, 0)
turtle.pendown()
turtle.fillcolor('peru')
turtle.begin_fill()
i = 0
while i < 3:
    turtle.forward(200)
    turtle.left(120)
    i = i + 1
turtle.end_fill()


def rectangle(x, y, color, width, height):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.fillcolor(color)
    turtle.begin_fill()
    i = 0
    while i < 2:
        turtle.forward(width)
        turtle.right(90)
        turtle.forward(height)
        turtle.right(90)
        i = i + 1
    turtle.end_fill()


# 绘制房体
rectangle(230, 0, 'chocolate', 180, 180)
# 绘制窗户
rectangle(340, -20, 'seashell', 50, 50)
# 绘制烟囱
rectangle(350, 120, 'wheat', 30, 70)
# 绘制烟囱顶部
rectangle(340, 120, 'wheat', 50, 10)
# 绘制门
rectangle(260, -90, 'seashell', 50, 90)

turtle.hideturtle()
turtle.done()
