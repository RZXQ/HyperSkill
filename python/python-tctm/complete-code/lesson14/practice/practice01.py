# 课堂练习一
# 编写程序，实现点击鼠标左键，在点击鼠标处印出形状为圆形的小海龟
# 小海龟的形状：'arrow'、'turtle' 、'circle' 、'square' 、'triangle' 、'classic'（默认）

import turtle

turtle.shape('circle')


def draw(x, y):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.stamp()


turtle.onscreenclick(draw)
turtle.hideturtle()
turtle.done()
