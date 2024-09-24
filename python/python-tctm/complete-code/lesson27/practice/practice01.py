# 课堂练习一
# 请完成点击屏幕，在沙漠上种植仙人掌的效果
# 提示：仙人掌图片存在于img文件夹中，图片名为cactus.gif
import turtle

turtle.setup(1000, 800)
turtle.bgpic('img/bg.gif')

turtle.addshape('img/cactus.gif')
turtle.shape('img/cactus.gif')


def grow(x, y):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.stamp()


turtle.onscreenclick(grow)

turtle.hideturtle()
turtle.done()
