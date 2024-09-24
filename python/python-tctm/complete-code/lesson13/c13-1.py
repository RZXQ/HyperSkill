# 完成倒计时功能
import time

i = 5
while i >= 1:
    print(i)
    i = i - 1
    time.sleep(1)


# 封装倒计时功能
def countDown(t):
    # 倒计时
    while t >= 1:
        print(t)
        t = t - 1
        time.sleep(1)


countDown(10)
