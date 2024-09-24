# 课堂练习四
# 编写代码，使用turtle库绘制五星红旗中最大的一颗五角星，并设置窗口标题为"我爱祖国"，设置窗口大小为400*600，设置画笔速度为慢速，最后隐藏小海龟
# 提示：
# 1. 画笔颜色及五角星填充颜色设置为金色gold
# 2. 设置画笔粗细为5
# 3. 绘制五角星的起始位置为(-165,225)
# 4. 使用for循环绘制五角星
# 5. 循环次数：5；循环体：直走35的距离、左转72度、直走35的距离、右转144度
import turtle

turtle.bgpic('bg4.gif')
turtle.title('我爱祖国')
turtle.setup(400, 600)
turtle.speed(2)
turtle.hideturtle()
turtle.pencolor('gold')
turtle.pensize(5)
turtle.penup()
turtle.goto(-165, 225)
turtle.pendown()
turtle.fillcolor('gold')
turtle.begin_fill()
for i in range(5):
    turtle.forward(35)
    turtle.left(72)
    turtle.forward(35)
    turtle.right(144)
turtle.end_fill()
turtle.done()
