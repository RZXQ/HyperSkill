# 课堂练习一
# 使用自定义函数实现，输入要过生日的人，唱生日歌给他听
# 生日歌的内容是以下三句歌词
# 'happy birthday to you'，
# 'happy birthday to you'，
# 'happy birthday dear '输入的名字'

# 在下方书写代码
name = input('请输入要过生日的人的名字：')


def sing():
    print('happy birthday to you')
    print('happy birthday to you')
    print('happy birthday dear', name, '!')


sing()
