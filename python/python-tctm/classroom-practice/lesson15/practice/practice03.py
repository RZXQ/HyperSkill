# 课堂练习三
# 根据生成的随机数(1-5)显示不同的菜品名称
# 如果随机数为1，显示文字 红烧肉；如果随机数为2，显示文字 香辣虾
# 如果随机数为3，显示菜品 水煮鱼；如果随机数为4，显示文字 炒牛肉
# 如果随机数为5，显示文字 三杯鸡
# 菜品文字通过turtle.write()显示，要求字体统一为'arial',字号30，加粗
import random
import time
import turtle


# 添加背景和爪子
def add():
    turtle.bgpic('bg3.gif')
    image = 'claw.gif'
    turtle.addshape(image)
    turtle.shape(image)
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
    x = random.randint(-200, 200)
    turtle.goto(x, 300)
    # 抓娃娃奖品
    time.sleep(0.3)
    turtle.goto(x, 50)
    time.sleep(0.5)
    turtle.hideturtle()
    turtle.bgpic('bg4.gif')
    turtle.goto(-40, -70)
    # 生成随机数1-5
    n = random.randint(1, 5)
    # 请在下方编写代码


turtle.onscreenclick(grab)
turtle.done()
