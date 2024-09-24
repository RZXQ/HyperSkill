import turtle

order = input('输入命令：(防御 or 攻击)')
if order == '防御':
    # 绘制六边形
    i = 1
    while i <= 6:
        turtle.forward(100)
        turtle.right(60)
        i = i + 1
if order == '攻击':
    # 绘制六芒星
    i = 1
    while i <= 6:
        turtle.forward(100)
        turtle.left(60)
        turtle.forward(100)
        turtle.right(120)
        i += 1

turtle.done()
