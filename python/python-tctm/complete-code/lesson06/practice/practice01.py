# 课堂练习1
# 编写代码，使用turtle库绘制如图所示的30度的角
# 提示1. 最开始海龟的方向是水平向右
# 提示2. 先沿当前方向前进100的距离，然后将角度旋转180，再前进100的距离后退到原点，向右旋转150度，再前进100的距离
# 在下方编写代码
import turtle

turtle.forward(100)
turtle.left(180)
turtle.forward(100)
turtle.right(150)
turtle.forward(100)
turtle.done()
