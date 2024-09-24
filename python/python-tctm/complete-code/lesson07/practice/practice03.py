# 课堂练习3
# 请使用while循环和海龟绘图为量杯添加刻度
# 提示：
# 使用turtle.write()为图中的量杯添加刻度
# 刻度的起始位置为（-80，-180），每个刻度的x坐标不变，y坐标间距相等为120
# 刻度的值分别为20，40，60，80
# 使用while循环和write()绘制刻度
# 刻度的字体为"arial"，字号30
# 隐藏小海龟
import turtle

turtle.setup(900, 839)
turtle.bgpic('bg03.gif')
# 在下方编写代码
y = -180
i = 20
while i <= 80:
    turtle.penup()
    turtle.goto(-80, y)
    turtle.pendown()
    turtle.write(i, font=('arial', 30))
    y = y + 120
    i = i + 20
turtle.hideturtle()
turtle.done()
