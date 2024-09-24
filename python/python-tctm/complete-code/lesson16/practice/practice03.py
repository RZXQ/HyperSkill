# 课堂练习三
# 已知小海龟的默认形状存放在列表shapes中，小海龟的初始坐标为(-260, 0)。
# 编写代码遍历列表，并在画布中印出一排随机形状的小海龟，小海龟横向间隔100
import random
import turtle

shapes = ['arrow', 'turtle', 'circle', 'square', 'triangle', 'classic']
x = -260
y = 0
# 在下方编写代码
for s in shapes:
    n = random.randint(0, 5)
    turtle.shape(shapes[n])
    turtle.penup()
    turtle.goto(x, y)
    turtle.stamp()
    x = x + 100
turtle.done()
