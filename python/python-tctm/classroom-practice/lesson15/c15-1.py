import turtle


# 添加背景和爪子
def add():
    turtle.bgpic('bg.gif')
    turtle.addshape('claw.gif')
    turtle.shape('claw.gif')
    turtle.penup()
    turtle.goto(0, 300)


add()

turtle.done()
