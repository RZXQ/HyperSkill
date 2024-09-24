# 课堂练习一
# 编写代码，使用with open()读取text01.txt文件中的内容并展示在控制台上
with open('files/text01.txt', 'r', encoding='utf-8') as f:
    content = f.read()
print(content)
