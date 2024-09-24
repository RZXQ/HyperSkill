# 编写代码，定义一个用于计算正方形周长（girth）的函数。要求：使用return关键字
def girth(length):
    g = length * 4
    return g


g = girth(10)
print('该正方形的周长为：', g)
