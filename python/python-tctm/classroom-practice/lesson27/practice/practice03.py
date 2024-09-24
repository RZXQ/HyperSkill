# 课堂练习三
# 目前在turtle窗口中有一个蓝色正方形，请按照以下要求完成程序
# 点击屏幕，如果点击在正方形范围内，输出“点击格子”；如果点击在范围外，输出“未点击格子”
# 提示：1. 格子的中心点坐标为(100,50)，对应的横、纵坐标分别存给了变量cx和cy
#      2. 格子的边长为 200
import turtle

turtle.setup(800, 500)
turtle.speed(5)
# 绘制蓝色正方形
turtle.penup()
turtle.goto(0, 150)
turtle.pendown()
turtle.fillcolor('skyblue')
turtle.begin_fill()
for i in range(4):
    turtle.forward(200)
    turtle.right(90)
turtle.end_fill()

cx = 100
cy = 50
# 请在下方编写代码


turtle.hideturtle()
turtle.done()
