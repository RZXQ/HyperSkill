# 课堂练习2
# 绘制一个边长为200的正方形，并且以其中一条对角线为界限，分别将一半正方形填充为红色，一半为蓝色
# 提示：
# 1.使用fillcolor()填充颜色
# 2.begin_fill()开始填充、end_fill()结束填充
# 在下方书写代码
import turtle

turtle.fillcolor('blue')
turtle.begin_fill()
turtle.forward(200)
turtle.right(90)
turtle.forward(200)
turtle.end_fill()
turtle.fillcolor('red')
turtle.begin_fill()
turtle.right(90)
turtle.forward(200)
turtle.right(90)
turtle.forward(200)
turtle.end_fill()
turtle.done()
