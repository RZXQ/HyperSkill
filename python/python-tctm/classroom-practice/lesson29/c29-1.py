import turtle

turtle.bgpic('img/bg.gif')
turtle.setup(1200, 600)
turtle.title('九宫棋')
turtle.hideturtle()
turtle.pensize(5)
turtle.speed(0)
x = -270
y = 270
for i in range(9):
    turtle.penup()
    turtle.goto(x, y)
    turtle.pendown()
    for i in range(4):
        turtle.forward(180)
        turtle.right(90)
    if x >= 90:
        x = -270
        y = y - 180
    else:
        x = x + 180

shape1 = 'img/shape1.gif'
shape2 = 'img/shape2.gif'
turtle.addshape(shape1)
turtle.addshape(shape2)
board = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]
turn = 0


def victory(t):
    if board[0][2] == t and board[1][1] == t and board[2][0] == t:
        if t == '圈':
            print('游戏结束，圈胜利！')
        else:
            print('游戏结束，叉胜利！')
    elif board[0][0] == t and board[1][1] == t and board[2][2] == t:
        if t == '圈':
            print('游戏结束，圈胜利！')
        else:
            print('游戏结束，叉胜利！')


def drop(x, y):
    global turn, board
    for i in range(3):
        cy = 180 - i * 180
        for j in range(3):
            cx = -180 + j * 180
            if abs(cx - x) < 90 and abs(cy - y) < 90 and board[i][j] == 0:
                turtle.penup()
                turtle.goto(cx, cy)
                turtle.pendown()
                if turn == 0:
                    turtle.shape(shape1)
                    turtle.stamp()
                    turn = 1
                    board[i][j] = '圈'
                    victory('圈')
                else:
                    turtle.shape(shape2)
                    turtle.stamp()
                    turn = 0
                    board[i][j] = '叉'
                    victory('叉')
                print(board)


turtle.onscreenclick(drop)
turtle.done()
