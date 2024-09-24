# 编写代码，实现自行规定倒计时时间，并在倒计时结束后随机抽取手办盲盒的程序。（已知盲盒分为：特等奖盲盒，一等奖盲盒，二等奖盲盒，阳光普照奖4种）
# 提示：
# （1）首先使用input()实现输入框功能并通过int()将输入的内容转为整数类型的数据
# （2）使用while循环实现倒计时功能并将输入的时间传入到while循环中
# （3）定义随机抽取盲盒的函数并传入四个盲盒（b1,b2,b3,b4）：在函数中先使用randint()随机生成1-4之间的整数；然后使用if-elif-else语句判断生成的数字，根据数字使用return关键字返回对应的盲盒；最后调用抽取盲盒函数并传入实参（特等奖盲盒，一等奖盲盒，二等奖盲盒，阳光普照奖）将抽取的结果保存在一个变量中，最后输出变量
import random
import time

# 输入倒计时时间
t = int(input('请输入倒计时时间：'))
# 倒计时
while t >= 1:
    print(t)
    t = t - 1
    time.sleep(1)


# 随机抽取盲盒
def box(b1, b2, b3, b4):
    n = random.randint(1, 4)
    if n == 1:
        return b1
    elif n == 2:
        return b2
    elif n == 3:
        return b3
    else:
        return b4


box = box('特等奖盲盒', '一等奖盲盒', '二等奖盲盒', '阳光普照奖')
print(box)
