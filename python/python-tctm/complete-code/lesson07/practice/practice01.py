# 课堂练习1
# 请使用海龟绘图为代码世界的背景图片添加文字标题"欢迎来到代码世界"
# 提示：
# 在代码世界的背景图片上绘制文字"欢迎来到代码世界"
# 绘制文字的起始位置是(-200,-150)
# 字体为"arial"，字号50，加粗"bold"
# 隐藏小海龟
import turtle

turtle.setup(1000, 559)
turtle.bgpic('bg01.gif')
# 在下方编写代码
turtle.penup()
turtle.goto(-200, -150)
turtle.pendown()
turtle.write('欢迎来到代码世界', font=('arial', 50, 'bold'))
turtle.hideturtle()
turtle.done()
