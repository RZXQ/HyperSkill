import turtle

turtle.bgpic('img/bg.gif')
turtle.setup(1200, 600)
turtle.title('九宫棋')
turtle.hideturtle()
turtle.pensize(5)
turtle.speed(0)
x = -270
y = 270
for i in range(9):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    for i in range(4):
        turtle.forward(180)
        turtle.right(90)
    if x >= 90:
        x = -270
        y = y - 180
    else:
        x = x + 180

shape1 = 'img/shape1.gif'
shape2 = 'img/shape2.gif'
turtle.addshape(shape1)
turtle.addshape(shape2)


def drop(x, y):
    for i in range(3):
        cy = 180 - i * 180
        for j in range(3):
            cx = -180 + j * 180
            # print(cx,cy)
            if abs(cx - x) < 90 and abs(cy - y) < 90:
                turtle.penup()
                turtle.goto(cx, cy)
                turtle.pendown()
                turtle.shape(shape1)
                turtle.stamp()


turtle.onscreenclick(drop)
turtle.done()
