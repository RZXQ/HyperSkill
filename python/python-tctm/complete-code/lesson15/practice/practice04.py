# 课堂练习四
# 结合input()实现：输入礼品名，在屏幕中显示对应的图片
import turtle

turtle.bgpic('bg1.gif')
turtle.penup()
turtle.goto(10, 50)
# 请在下方编写代码
gift = input('请输入要显示的礼品名：')
turtle.addshape(gift)
turtle.shape(gift)
turtle.stamp()

turtle.done()
