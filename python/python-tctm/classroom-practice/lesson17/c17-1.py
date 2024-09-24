import random
import time
import turtle


# 添加背景和爪子
def add():
    turtle.bgpic('bg.gif')
    image = 'claw.gif'
    turtle.addshape(image)
    turtle.shape(image)
    turtle.penup()
    turtle.goto(0, 300)


turtle.bgpic('bg4.gif')
prizes = ['p1.gif', 'p2.gif', 'p3.gif', 'p4.gif', 'p5.gif']


def show():
    x = -400
    y = 70
    for p in prizes:
        turtle.addshape(p)
        turtle.shape(p)
        turtle.penup()
        turtle.goto(x, y)
        turtle.pendown()
        turtle.stamp()
        x = x + 200


show()


def grab(x, y):
    turtle.clear()
    add()
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
    n = random.randint(0, len(prizes) - 1)
    turtle.addshape(prizes[n])
    turtle.shape(prizes[n])
    turtle.stamp()


turtle.onscreenclick(grab)
turtle.done()
