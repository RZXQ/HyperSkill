import random
import time
import turtle


# 添加背景和爪子
def add():
    turtle.bgpic('bg.gif')
    turtle.addshape('claw.gif')
    turtle.shape('claw.gif')
    turtle.penup()
    turtle.goto(0, 300)


add()


def grab(x, y):
    # 爪子来回移动
    i = 1
    while i <= 3:
        turtle.goto(200, 300)
        turtle.goto(-200, 300)
        i = i + 1
    # 抓娃娃奖品
    x = random.randint(-200, 200)
    turtle.goto(x, 300)
    time.sleep(0.3)
    turtle.goto(x, 50)
    # 隐藏小海龟
    time.sleep(0.5)
    turtle.hideturtle()
    # 随机显示奖品
    turtle.bgpic('bg2.gif')
    turtle.goto(10, 50)
    n = random.randint(1, 5)
    if n == 1:
        turtle.addshape('p1.gif')
        turtle.shape('p1.gif')
    elif n == 2:
        turtle.addshape('p2.gif')
        turtle.shape('p2.gif')
    elif n == 3:
        turtle.addshape('p3.gif')
        turtle.shape('p3.gif')
    elif n == 4:
        turtle.addshape('p4.gif')
        turtle.shape('p4.gif')
    else:
        turtle.addshape('p5.gif')
        turtle.shape('p5.gif')
    turtle.stamp()


turtle.onscreenclick(grab)
turtle.done()
