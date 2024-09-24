# 课堂练习二
# 编写代码，在控制台输入任意内容并将内容使用with open()写在text02.txt文件中，最后查看text02.txt文件
content = input('请输入要保存的内容：')
with open('files/text02.txt', 'w', encoding='utf-8') as f:
    f.write(content)
