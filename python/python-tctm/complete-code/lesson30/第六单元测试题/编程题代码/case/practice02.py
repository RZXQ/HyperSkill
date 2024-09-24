# 请使用turtle绘图库的相关知识，为下图中的多啦A梦人物绘制一个铃铛。
# 要求：
# （1）为窗口设置标题为“哆啦A梦”
# （2）设置窗口大小为500*444
# （3）设置画笔速度为最快速度、画笔粗细设置为3并隐藏小海龟
# （4）为人物绘制缺少的铃铛图案
# 提示：
# （1）铃铛图案由两个圆形以及一条短线组成
# （2）将画笔移动到(-10,-136)的位置绘制大的圆形，大圆半径为25并将其填充为金色'gold'
# （3）将画笔移动到(-10,-126)的位置绘制小的圆形，小圆半径为5并将其填充为棕色'brown'
# （4）向右旋转115度并前进7的距离绘制短线
import turtle

turtle.bgpic('bg.gif')
# 在下方书写代码
# 设置窗口标题以及大小
turtle.title('哆啦A梦')
turtle.setup(500, 444)
# 设置画笔速度，画笔粗细以及隐藏小海龟
turtle.speed(0)
turtle.pensize(3)
turtle.hideturtle()
# 绘制铃铛
turtle.penup()
turtle.goto(-10, -136)
turtle.pendown()
turtle.fillcolor('gold')
turtle.begin_fill()
turtle.circle(25)
turtle.end_fill()
turtle.penup()
turtle.goto(-10, -126)
turtle.pendown()
turtle.fillcolor('brown')
turtle.begin_fill()
turtle.circle(5)
turtle.end_fill()
turtle.right(115)
turtle.forward(7)
turtle.done()
