# 课堂练习三
# 编写代码实现，点击鼠标左键在苹果树上印出苹果的效果
# 提示：
# 1、turtle.shape()修改小海龟形状
# 2、turtle.addshape()添加小海龟形状
# 3、turtle.onscreenclick()监听鼠标点击事件
# 4、turtle.bgpic()用于设置背景图片
# 5、苹果图片（tree.gif),苹果图片（apple.gif）
import turtle

turtle.bgpic('tree.gif')
image = 'apple.gif'
turtle.addshape(image)
turtle.shape(image)


def draw(x, y):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.stamp()


turtle.onscreenclick(draw)
turtle.hideturtle()
turtle.done()
