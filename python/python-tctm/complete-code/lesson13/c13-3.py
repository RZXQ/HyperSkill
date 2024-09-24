import random
import time


def count(t):
    while t >= 1:
        print(t)
        t = t - 1
        time.sleep(1)


count(3)


# 随机显示奖品
def prize(p1, p2, p3, p4, p5):
    n = random.randint(1, 5)
    if n == 1:
        return p1
    elif n == 2:
        return p2
    elif n == 3:
        return p3
    elif n == 4:
        return p4
    elif n == 5:
        return p5


p = prize('小汽车', '洋娃娃', '变形金刚', '文具盒', '红包')
print(p)
