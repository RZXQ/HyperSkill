# 编写代码，输出九九乘法表
for i in range(1, 10):
    for j in range(1, i + 1):
        print(j, '*', i, '=', i * j, end='\t')
    print()
