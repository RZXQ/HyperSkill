import time


# 导入random库

def count(t):
    while t >= 1:
        print(t)
        t = t - 1
        time.sleep(1)


count(3)
# 封装随机显示奖品函数
