# 课堂练习四
# 请根据海龟绘图运行效果以及预留代码，通过自定义函数简化画房子的代码
# 提示
# 找出房屋结构中的相同点（比如：哪些部分是由相同的形状绘制成的）
# 找出绘制每部分结构中相同的代码（比如：绘制相同的形状时，哪些代码指令是相同的）
# 自定义一个绘制相同形状的函数并使用参数控制形状的颜色、宽高以及绘制的起始位置
import turtle

turtle.bgpic('bg.gif')

# 画房子
# 房顶
turtle.penup()
turtle.goto(220, 0)
turtle.pendown()
turtle.fillcolor('palevioletred')
turtle.begin_fill()
i = 0
while i < 3:
    turtle.forward(200)
    turtle.left(120)
    i = i + 1
turtle.end_fill()

# 房体
# turtle.penup()
# turtle.goto(230, 0)
# turtle.pendown()
# turtle.fillcolor('pink')
# turtle.begin_fill()
# i = 0
# while i < 2:
#     turtle.forward(180)
#     turtle.right(90)
#     turtle.forward(180)
#     turtle.right(90)
#     i = i + 1
# turtle.end_fill()

# 窗户
# turtle.penup()
# turtle.goto(340, -20)
# turtle.pendown()
# turtle.fillcolor('lavenderblush')
# turtle.begin_fill()
# i = 0
# while i < 2:
#     turtle.forward(50)
#     turtle.right(90)
#     turtle.forward(50)
#     turtle.right(90)
#     i = i + 1
# turtle.end_fill()

# 烟囱
# turtle.penup()
# turtle.goto(350, 120)
# turtle.pendown()
# turtle.fillcolor('wheat')
# turtle.begin_fill()
# i = 0
# while i < 2:
#     turtle.forward(30)
#     turtle.right(90)
#     turtle.forward(70)
#     turtle.right(90)
#     i = i + 1
# turtle.end_fill()

# 烟囱顶部
# turtle.penup()
# turtle.goto(340, 120)
# turtle.pendown()
# turtle.fillcolor('wheat')
# turtle.begin_fill()
# i = 0
# while i < 2:
#     turtle.forward(50)
#     turtle.right(90)
#     turtle.forward(10)
#     turtle.right(90)
#     i = i + 1
# turtle.end_fill()

# 门
# turtle.penup()
# turtle.goto(260,-90)
# turtle.pendown()
# turtle.fillcolor('seashell')
# turtle.begin_fill()
# i = 0
# while i < 2:
#     turtle.forward(50)
#     turtle.right(90)
#     turtle.forward(90)
#     turtle.right(90)
#     i = i + 1
# turtle.end_fill()

# 请在下方定义绘制矩形函数rectangle


# 绘制房体

# 绘制窗户

# 绘制烟囱

# 绘制烟囱顶部

# 绘制门


turtle.hideturtle()
turtle.done()
