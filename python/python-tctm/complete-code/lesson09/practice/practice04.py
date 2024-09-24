# 课堂练习4
# 请使用turtle库和if-elif语句实现积分兑换奖品程序，当积分大于等于400时，获得奖品'豪华跑车'并将奖品文字设置为红色red；
# 当积分大于等于300时，获得奖品'手机一台'并将奖品文字设置为橙色orange；当积分大于等于200时，获得奖品'平板电脑'并将奖品文字设置为金色gold；、
# 当积分大于等于100时，获得奖品'电子手表'并将奖品文字设置为粉色pink；积分大于等于0时，获得奖品'游戏手柄'并将奖品文字设置为蓝色blue；
# 否则，显示文字'输入错误'并将文字设置为黑色black
# 提示：
# 使用input()实现输出框功能
# 在坐标（-80，-40）处绘制奖品文字
# 使用if-elif-else语句判断积分
# 使用pencolor()设置奖品文字颜色
# 使用write()绘制奖品文字，文字字体是'arial'，字号是40，加粗'bold'
import turtle

turtle.setup(800, 450, 0, 0)
# 在下方书写代码
turtle.bgpic('bg1.gif')
turtle.penup()
turtle.goto(-80, -40)
turtle.pendown()
score = int(input('请输入积分：'))
if score >= 400:
    turtle.pencolor('red')
    turtle.write('豪华跑车', font=('arial', 40, 'bold'))
elif score >= 300:
    turtle.pencolor('orange')
    turtle.write('手机一台', font=('arial', 40, 'bold'))
elif score >= 200:
    turtle.pencolor('gold')
    turtle.write('平板电脑', font=('arial', 40, 'bold'))
elif score >= 100:
    turtle.pencolor('pink')
    turtle.write('电子手表', font=('arial', 40, 'bold'))
elif score >= 0:
    turtle.pencolor('blue')
    turtle.write('游戏手柄', font=('arial', 40, 'bold'))
else:
    turtle.pencolor('black')
    turtle.write('输入错误', font=('arial', 40, 'bold'))
turtle.hideturtle()
turtle.done()
