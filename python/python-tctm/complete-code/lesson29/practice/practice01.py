# 课堂练习一
# 已知列表nums=[0.5,-5,3,17,-3,8,10.5]
# 编写一个程序，定义一个函数new_nums，该函数接受一个列表作为输入，并返回一个新列表，其中包含原列表中的所有正整数。
# 提示：
# 1. 定义一个函数new_nums，并传入列表形参。
# 2. 创建一个空列表 result，用于存储筛选出来的正整数。
# 3. 使用for循环遍历输入列表中的每一个元素。
# 4. 判断正整数的条件：该数字大于0并且该数字对1取余为0
# 5. 满足条件就将元素添加到列表中，最后返回创建的result列表
# 6. 调用定义好的new_nums函数，并输出结果
nums = [0.5, -5, 3, 17, -3, 8, 10.5]


# 请在下方编写代码
def new_nums(list):
    result = []
    for item in list:
        if item > 0 and item % 1 == 0:
            result.append(item)
    return result


print(new_nums(nums))
