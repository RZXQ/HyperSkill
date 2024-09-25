# 课堂练习一
# 请为《三国杀》添加选择君主的功能。
# 要求：当点击某个君主对应的卡牌后，在控制台输出当前选择的君主名称。
# 刘备 x范围 -315 ~ -185    y范围 -45 ~ 140
# 曹操 x范围 -65 ~ 65   y范围 -45 ~ 140
# 孙权 x范围 185 ~ 315  y范围 -45 ~ 140
import turtle

turtle.bgpic('bg1.gif')
cards = ['card1.gif', 'card2.gif', 'card3.gif']


def choose(x, y):
    pass


# 请在下方完成选择君主的代码


x = -250
y = 50
for card in cards:
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.addshape(card)
    turtle.shape(card)
    turtle.stamp()
    x = x + 250
turtle.onscreenclick(choose)
turtle.done()
