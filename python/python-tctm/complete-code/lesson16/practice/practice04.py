# 课堂练习四
# 编写代码，创建季节列表seasons，列表中存储的元素分别是四个季节的图片spring.gif, summer.gif, autumn.gif, winter.gif。
# 从seasons列表中随机生成一个图片元素，然后使用海龟绘图的相关知识，将该图片印在画布上。
# 在下方编写代码
import random
import turtle

seasons = ['spring.gif', 'summer.gif', 'autumn.gif', 'winter.gif']


def show():
    n = random.randint(0, len(seasons) - 1)
    turtle.addshape(seasons[n])
    turtle.shape(seasons[n])
    turtle.stamp()


show()
turtle.done()
