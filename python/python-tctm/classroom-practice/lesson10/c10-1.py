import turtle

turtle.bgpic('bg.gif')

# 脸
turtle.fillcolor('wheat')
turtle.begin_fill()
i = 0
while i < 4:
    turtle.forward(80)
    turtle.right(90)
    i = i + 1
turtle.end_fill()

# 头发
turtle.fillcolor('black')
turtle.begin_fill()
turtle.forward(80)
turtle.right(90)
turtle.forward(20)
turtle.right(90)
turtle.forward(80)
turtle.right(90)
turtle.forward(20)
turtle.right(90)
turtle.end_fill()

# 左眼
turtle.penup()
turtle.goto(10, -30)
turtle.pendown()
turtle.fillcolor('white')
turtle.begin_fill()
turtle.forward(15)
turtle.right(90)
turtle.forward(25)
turtle.right(90)
turtle.forward(15)
turtle.right(90)
turtle.forward(25)
turtle.right(90)
turtle.end_fill()

turtle.penup()
turtle.goto(17, -30)
turtle.pendown()
turtle.fillcolor('black')
turtle.begin_fill()
turtle.forward(8)
turtle.right(90)
turtle.forward(18)
turtle.right(90)
turtle.forward(8)
turtle.right(90)
turtle.forward(18)
turtle.right(90)
turtle.end_fill()

# 右眼
turtle.penup()
turtle.goto(55, -30)
turtle.pendown()
turtle.fillcolor('white')
turtle.begin_fill()
turtle.forward(15)
turtle.right(90)
turtle.forward(25)
turtle.right(90)
turtle.forward(15)
turtle.right(90)
turtle.forward(25)
turtle.right(90)
turtle.end_fill()

turtle.fillcolor('black')
turtle.begin_fill()
turtle.forward(8)
turtle.right(90)
turtle.forward(18)
turtle.right(90)
turtle.forward(8)
turtle.right(90)
turtle.forward(18)
turtle.right(90)
turtle.end_fill()

# 嘴巴
turtle.penup()
turtle.goto(35, -60)
turtle.pendown()
turtle.fillcolor('pink')
turtle.begin_fill()
i = 0
while i < 4:
    turtle.forward(10)
    turtle.right(90)
    i = i + 1
turtle.end_fill()

# 身体
turtle.penup()
turtle.goto(0, -80)
turtle.pendown()
turtle.fillcolor('limegreen')
turtle.begin_fill()
i = 0
while i < 2:
    turtle.forward(80)
    turtle.right(90)
    turtle.forward(110)
    turtle.right(90)
    i = i + 1
# 左衣袖
turtle.penup()
turtle.goto(-35, -80)
turtle.pendown()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(45)
    turtle.right(90)
    i = i + 1
# 右衣袖
turtle.penup()
turtle.goto(80, -80)
turtle.pendown()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(45)
    turtle.right(90)
    i = i + 1
turtle.end_fill()

# 胳膊
turtle.penup()
turtle.goto(-35, -125)
turtle.pendown()
turtle.fillcolor('wheat')
turtle.begin_fill()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(60)
    turtle.right(90)
    i = i + 1
# 右胳膊
turtle.penup()
turtle.goto(80, -125)
turtle.pendown()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(60)
    turtle.right(90)
    i = i + 1
turtle.end_fill()

# 腿
turtle.penup()
turtle.goto(4, -190)
turtle.pendown()
turtle.fillcolor('sienna')
turtle.begin_fill()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(100)
    turtle.right(90)
    i = i + 1

turtle.penup()
turtle.goto(41, -190)
turtle.pendown()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(100)
    turtle.right(90)
    i = i + 1
turtle.end_fill()

# 脚
turtle.penup()
turtle.goto(4, -290)
turtle.pendown()
turtle.fillcolor('maroon')
turtle.begin_fill()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(20)
    turtle.right(90)
    i = i + 1

turtle.penup()
turtle.goto(41, -290)
turtle.pendown()
i = 0
while i < 2:
    turtle.forward(35)
    turtle.right(90)
    turtle.forward(20)
    turtle.right(90)
    i = i + 1
turtle.end_fill()
turtle.hideturtle()
turtle.done()
