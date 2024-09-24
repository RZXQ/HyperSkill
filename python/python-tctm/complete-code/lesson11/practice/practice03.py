# 课堂练习三
# 自定义一个函数，向函数内传入形参username（用户名），password（密码），当username值为Danny且password值为Danny123时，
# 在控制台输出“登录成功”；否则在控制台输出“请重新登录”
# 提示：
# 自定义函数login
# 使用if语句判断用户名是否等于字符串'Danny'，密码是否等于字符串'Danny123'
def login(username, password):
    if username == 'Danny':
        if password == 'Danny123':
            print('登录成功')
        else:
            print('请重新登录')


login('Danny', 'Danny123')
