import turtle

turtle.bgpic('bg.gif')
# 在下方编写代码
x = 300
while x <= 450:  # 或者x < 500
    turtle.penup()
    turtle.goto(x, 12)
    turtle.pendown()
    turtle.write('*', font=('arial', 75, 'bold'))
    x = x + 50
turtle.hideturtle()
turtle.done()
