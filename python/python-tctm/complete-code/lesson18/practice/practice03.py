# 课堂练习三
# 体育课跳远测试的成绩保存在列表distance=[1.6, 2, 1.3, 2.2, 2.5, 1.2]中，
# 由于老师的疏忽，将一个错误的成绩2.5记录在了列表中，
# 现在需要将错误的成绩删除并对列表进行升序排序。
# 最后将排序后的列表输出在控制台上。
# 要求： 1.使用remove()删除列表中的'2.5' 2.使用sort()对列表进行排序
distance = [1.6, 2, 1.3, 2.2, 2.5, 1.2]
# 在下方书写代码
distance.remove(2.5)
distance.sort()
print(distance)
