# 课堂练习四
# 童程学院开展了一些课外兴趣班，现在小派，童童，while精灵和input精灵四人报了同一门课程，已知教室还剩4个空座位，请编写代码，为四人安排座位
# 要求：
# (1) 创建二维列表存储四个座位，并将安排好座位的二维列表输出在控制台上
# (2) 同一座位只能安排一个人
import turtle

turtle.bgpic('seat.gif')
turtle.title('座位表')
turtle.setup(800, 600)
turtle.hideturtle()
shape1 = '1.gif'
shape2 = '2.gif'
shape3 = '3.gif'
shape4 = '4.gif'
turtle.addshape(shape1)
turtle.addshape(shape2)
turtle.addshape(shape3)
turtle.addshape(shape4)

# 请在下方编写代码创建二维列表

turn = 0


def drop(x, y):
    # 请在下方将二维列表声明为全局变量
    global turn
    for i in range(2):
        cy = 45 - i * 210
        for j in range(2):
            cx = 91 + j * 195
            # 请在下方增加判断条件，判断当前点击的座位格子是否为空
            if abs(cx - x) < 90 and abs(cy - y) < 90:
                turtle.penup()
                turtle.goto(cx, cy)
                turtle.pendown()
                # 请在下方判断变量turn的值用于点击时切换人物头像

                # 请在下方输出最新的二维列表


turtle.onscreenclick(drop)
turtle.done()
