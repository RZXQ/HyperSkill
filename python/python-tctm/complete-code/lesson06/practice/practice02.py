# 课堂练习2
# 请绘制边长为200的正方形。
# 提示1：尝试结合while循环绘制正方形
# 在下方编写代码
import turtle

i = 1
while i <= 4:
    turtle.forward(200)  # 绘制直线
    turtle.right(90)  # 向右旋转90度
    i = i + 1
turtle.done()
