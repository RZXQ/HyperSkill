# 在下方编写计算器程序的代码
def calculator(num1, operator, num2):
    if operator == '+':
        result = num1 + num2
    elif operator == '-':
        result = num1 - num2
    elif operator == '*':
        result = num1 * num2
    elif operator == '/':
        result = num1 / num2
    return result


value = calculator(10, '+', 20)
print('加法运算后的结果：', value)
value = calculator(10, '-', 20)
print('减法运算后的结果：', value)
value = calculator(10, '*', 20)
print('乘法运算后的结果：', value)
value = calculator(10, '/', 20)
print('除法运算后的结果：', value)
