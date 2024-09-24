# 课堂练习3
# 请使用input()输入'横线'或'竖线'并将输入的内容保存在变量line中，判断当line等于横线时就绘制一条长为100横线，当line不等于横线时就绘制一条长为100竖线
# 提示1. 使用if语句判断输入的内容是否是'横线'
# 提示2. 使用if语句判断输入的内容是否是'竖线'
# 提示3. 最开始海龟的方向是水平向右
# 在下方编写代码
import turtle

line = input('请输入横线或竖线：')
if line == '横线':
    turtle.forward(100)
if line == '竖线':
    turtle.right(90)
    turtle.forward(100)
turtle.done()
