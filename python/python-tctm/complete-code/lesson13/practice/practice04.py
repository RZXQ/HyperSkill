# 课堂练习四
# 编写程序，实现倒计时5秒后，从三个奖品中随机抽取一个。
import random
import time

# 倒计时
t = 5
while t >= 1:
    print(t)
    t = t - 1
    time.sleep(1)


# 随机显示奖品
def prize(p1, p2, p3):
    n = random.randint(1, 3)
    if n == 1:
        return p1
    elif n == 2:
        return p2
    elif n == 3:
        return p3


p = prize('一等奖', '二等奖', '三等奖')
print(p)
