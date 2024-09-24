import random
import time
import turtle

turtle.bgpic('bg.gif')

# 奖品列表
prizes = ['玩具一个', '可乐一杯', '童币一枚', '炸鸡一桶', '蹲起两次']
# 位置列表
pos = [-280, 0, 280]
# 隐藏小海龟
turtle.hideturtle()
# 抬笔
turtle.penup()


def showPrize():
    turtle.bgpic('bg2.gif')
    max = len(prizes) - 1
    n = random.randint(0, max)
    turtle.hideturtle()
    turtle.goto(-55, -30)
    turtle.write(prizes[n], font=('arial', 20, 'bold'))


def move():
    turtle.addshape('option.gif')
    turtle.shape('option.gif')
    turtle.goto(0, 20)
    # 显示小海龟
    turtle.showturtle()
    i = 1
    while i <= 2:
        turtle.goto(280, 20)
        turtle.goto(-280, 20)
        i = i + 1
    index = random.randint(0, 2)
    turtle.goto(pos[index], 20)
    time.sleep(0.5)


def check():
    turtle.goto(0, 0)
    turtle.addshape('show.gif')
    turtle.shape('show.gif')
    turtle.stamp()
    x1 = -350
    y1 = 0
    for p in prizes:
        turtle.goto(x1, y1)
        turtle.write(p, font=('arial', 20, 'bold'))
        x1 = x1 + 200
        if x1 > 250:
            x1 = -350
            y1 = y1 - 50
    time.sleep(2)
    turtle.clear()


def clickButton(x, y):
    # 判断是否点击开始按钮
    if -115 < x < 115 and -255 < y < -205:
        # 设置选项框来回移动
        move()
        # 展示奖品
        showPrize()
    # 判断是否点击查看按钮
    elif 5 < x < 150 and 220 < y < 270:
        # 查看所有可能抽到的奖品
        check()


turtle.onscreenclick(clickButton)
turtle.done()
