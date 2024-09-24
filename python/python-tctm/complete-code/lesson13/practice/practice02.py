# 课堂练习二
# 封装一个倒计时函数，要求倒计时之间间隔0.5秒
import time


def count(t):
    while t >= 1:
        print(t)
        t = t - 1
        time.sleep(0.5)


count(10)
