# 课堂练习4
# 请使用turtle库绘制一个五角星图案
# 五角星的边长为100
# 右转角度是144
import turtle

i = 1
while i <= 5:
    turtle.forward(100)
    turtle.right(144)
    i = i + 1
turtle.done()
