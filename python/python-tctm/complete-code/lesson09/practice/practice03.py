# 课堂练习3
# 请使用turtle库和while循环实现绿色螺旋文字效果
# 提示：
# 使用write()绘制文字'python'
# 使用pencolor()将文字设置为绿色（green）
# while循环的循环次数为50
# 每次绘制文字前，前进的距离是（循环变量*5）
# 绘制完文字，向左旋转的角度是92
import turtle

turtle.speed(0)
# 在下方书写代码
turtle.pencolor('green')
i = 1
while i < 50:
    turtle.penup()
    turtle.forward(i * 5)
    turtle.pendown()
    turtle.write('python')
    turtle.left(92)
    i = i + 1
turtle.hideturtle()
turtle.done()
