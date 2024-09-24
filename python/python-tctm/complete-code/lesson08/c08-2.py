import turtle

# 找出绘制正方形程序中出错的代码，并改正
monster = input('输入怪兽的名字：')
if monster == '土狼兽':
    print('使用技能突木桩')
    turtle.forward(100)
    turtle.right(90)
    turtle.forward(100)
    turtle.right(90)
    turtle.forward(100)
    turtle.right(90)
    turtle.forward(100)
elif monster == '金鹰兽':
    print('使用技能火陨术')
    # 在下方添加绘制边长为100的正三角形的代码
    turtle.forward(100)
    turtle.left(120)
    turtle.forward(100)
    turtle.left(120)
    turtle.forward(100)
elif monster == '火龙兽':
    print('使用技能水鲛弹')
    # 在下方添加绘制半径为100的圆形的代码
    turtle.circle(100)
else:
    print('输入错误')
turtle.done()
