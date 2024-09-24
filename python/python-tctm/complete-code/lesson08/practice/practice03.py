# 课堂练习3
# 请实现根据输入的季节名称，使用turtle绘制相关季节成语文字的程序
# 提示：
# 使用input实现输入框功能，提示内容为"请输入季节（春、夏、秋、冬）："
# 使用if-elif-else语句判断输入的季节名称，使用turtle绘图绘制与季节相关的成语（春暖花开、骄阳似火、秋高气爽、冰天雪地）
import turtle

turtle.bgpic('bg.gif')
# 在下方书写代码
season = input('请输入季节（春、夏、秋、冬）：')
turtle.penup()
turtle.goto(-50, 0)
turtle.pendown()
if season == '春':
    turtle.write('春暖花开', font=('arial', 20, 'bold'))
elif season == '夏':
    turtle.write('骄阳似火', font=('arial', 20, 'bold'))
elif season == '秋':
    turtle.write('秋高气爽', font=('arial', 20, 'bold'))
elif season == '冬':
    turtle.write('冰天雪地', font=('arial', 20, 'bold'))
else:
    print('请输入正确季节名称')
turtle.hideturtle()
turtle.done()
