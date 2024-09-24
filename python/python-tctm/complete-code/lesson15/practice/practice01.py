# 课堂练习一
# 完成点击屏幕随机展示礼品的功能
# 提示：1.结合点击事件、随机数、if..elif..else、印章等知识实现
#      2.五个礼品分别为：p1.gif - p5.gif
import random
import turtle

turtle.bgpic('bg1.gif')
turtle.penup()
turtle.goto(10, 50)


# 请在下方编写代码
def gifts(x, y):
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


turtle.onscreenclick(gifts)

turtle.done()
