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

turtle.done()
