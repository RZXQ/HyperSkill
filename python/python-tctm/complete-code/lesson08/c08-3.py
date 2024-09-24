import turtle

# 完善程序，将代表水鲛弹的圆形填充为蓝色
monster = input('输入怪兽的名字：')
if monster == '土狼兽':
    print('使用技能突木桩')
    turtle.fillcolor('brown')
    turtle.begin_fill()
    turtle.forward(100)
    turtle.right(90)
    turtle.forward(100)
    turtle.right(90)
    turtle.forward(100)
    turtle.right(90)
    turtle.forward(100)
    turtle.end_fill()
elif monster == '金鹰兽':
    print('使用技能火陨术')
    turtle.fillcolor('red')
    turtle.begin_fill()
    turtle.forward(100)
    turtle.left(120)
    turtle.forward(100)
    turtle.left(120)
    turtle.forward(100)
    turtle.end_fill()
elif monster == '火龙兽':
    print('使用技能水鲛弹')
    turtle.fillcolor('blue')
    turtle.begin_fill()
    turtle.circle(100)
    turtle.end_fill()
else:
    print('输入错误')
turtle.done()
