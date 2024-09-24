import turtle

turtle.bgpic('bg.gif')
score = input('输入分数：')
score = int(score)
if score >= 85:
    turtle.pencolor('red')
    turtle.write('A', font=('arial', 100, 'bold'))
elif score >= 75:
    turtle.pencolor('orange')
    turtle.write('B', font=('arial', 100, 'bold'))
elif score >= 60:
    turtle.pencolor('yellow')
    turtle.write('C', font=('arial', 100, 'bold'))
elif score >= 0:
    turtle.pencolor('gray')
    turtle.write('D', font=('arial', 100, 'bold'))
else:
    turtle.bgpic('bg2.gif')
turtle.hideturtle()
turtle.done()
