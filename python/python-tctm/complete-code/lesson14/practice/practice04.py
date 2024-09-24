# 课堂练习四
# 编写程序，实现点击鼠标左键在点击处绘制正三角形，三角形边长为50。
import turtle


def draw(x, y):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    i = 0
    while i < 3:
        turtle.forward(50)
        turtle.left(120)


turtle.onscreenclick(draw)
turtle.hideturtle()
turtle.done()
