# 课堂练习三
# 将小数转换成百分数
def getPercent(num):
    n = num * 100
    n = int(n)
    return n


percent = getPercent(0.75)
print(percent, '%')
