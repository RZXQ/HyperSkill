# 课堂练习二
# 编写程序，定义一个函数，在函数中传入一个二维列表作为参数，然后将二维列表中的元素乘以2并返回一个新的列表
# 最后在控制台上输出新列表
# 提示：
# 1. 定义函数double并在函数中传入形参list
# 2. 在函数体中定义一个新的空列表new_arr用于存储乘以2后的元素
# 3. 遍历二维列表中的每一个小列表
# 4. 在外层for循环中再定义一个空列表new_row用于存储每一个小列表中的元素
# 5. 遍历每个小列表中的元素，并将每个元素乘以2以后再追加到刚才定义的空列表new_row中
# 6. 将每个新的小列表追加到定义的空列表new_arr中
# 7. 调用函数double并将结果输出在控制台
arr = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]


# 请在下方编写代码
def double(list):
    new_arr = []
    for row in list:
        new_row = []
        for element in row:
            new_row.append(element * 2)
        new_arr.append(new_row)
    return new_arr


print(double(arr))
