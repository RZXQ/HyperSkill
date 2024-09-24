# 课堂练习四
# 添加选择西游记人物功能，点击对应人物后在控制台输出你最喜欢的人物是 XX
# 要求：数字区间范围的简化写法
# 提示：唐僧【x范围：-347 ~ -153 y范围：-206 ~ 4】
#      孙悟空【x范围：-99 ~ 99 y范围：-206 ~ 4】
#      猪八戒【x范围：153 ~ 347 y范围：-206 ~ 4】
import turtle

turtle.bgpic('bg.gif')
roles = ['01.gif', '02.gif', '03.gif']


def choose(x, y):
    pass


# 请在下方完成选择西游记人物的代码


x = -250
y = -100
for role in roles:
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    turtle.addshape(role)
    turtle.shape(role)
    turtle.stamp()
    x = x + 250
turtle.onscreenclick(choose)
turtle.done()
