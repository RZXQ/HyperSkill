# 今有鸡兔同笼，上有三十五头，下有九十四足，问鸡兔各有多少只？
# 其中鸡是2条腿、兔子是4条腿
# 鸡（chicken），兔子（rabbit）
for chicken in range(1, 35):
    for rabbit in range(1, 35):
        if chicken + rabbit == 35 and 2 * chicken + 4 * rabbit == 94:
            print('鸡', chicken, '只')
            print('兔', rabbit, '只')
