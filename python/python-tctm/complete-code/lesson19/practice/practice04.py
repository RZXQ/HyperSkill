# 课堂练习四
import turtle

turtle.bgpic('files/bg.gif')
turtle.hideturtle()


def create_words(content):
    temp = content[1:len(content) - 1]
    temp_words = temp.split(',')
    new_words = []
    for i in temp_words:
        if temp_words.index(i) == 0:
            new_words.append(i[1:len(i) - 1])
        else:
            new_words.append(i[2:len(i) - 1])
    return new_words


with open('files/name.txt', 'r', encoding='utf-8') as f:
    content = f.read()
names = create_words(content)


def show():
    turtle.clear()
    x = - 280
    y = 150
    for n in names:
        turtle.penup()
        turtle.goto(x, y)
        turtle.pendown()
        turtle.write(n, font=('arial', 20, 'bold'))
        y = y - 50
        if y < -200:
            y = 150
            x = x + 160


show()


# 优化代码，将重复的功能定义在函数中
# 提示：
# 1. 定义函数，将在文件中写入内容的代码和展示名字的代码放入函数体中
# 2. 分别在点击添加和删除按钮的代码中调用定义好的函数
# 在下方书写代码
def show_write():
    show()
    with open('files/name.txt', 'w', encoding='utf-8') as f:
        f.write(str(names))


def click(x, y):
    if 262 <= x <= 340 and 185 <= y <= 270:
        name = turtle.textinput('添加', '名称')
        names.append(name)
        # 调用定义好的函数
        show_write()
    elif 374 <= x <= 452 and 185 <= y <= 270:
        name = turtle.textinput('删除', '名称')
        names.remove(name)
        # 调用定义好的函数
        show_write()


turtle.onscreenclick(click)
turtle.done()
