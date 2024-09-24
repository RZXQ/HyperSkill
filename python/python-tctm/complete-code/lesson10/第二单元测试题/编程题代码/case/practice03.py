# 编写代码，实现在控制台输入动漫名字，在绘图窗口中显示对应的海报图片以及动漫名称的程序效果。要求：使用turtle库、if-elif-else语句以及input()实现该程序。
# 提示：
# （1）输入框中的提示内容为：请输入你喜欢的动漫名称：（可选动漫包括功夫熊猫、大圣归来、喜羊羊与灰太狼）
# （2）使用if-elif-else语句判断输入的动漫名称，并根据名称绘制对应的背景图片以及文字内容：
# 当输入的内容为功夫熊猫时，就设置背景图片为panda.gif，将画笔设置为白色并且移动到(-120, 250)的位置再开始绘制文字，绘制的文字内容为《功夫熊猫》，字体为Arial，字号为40，加粗显示；
# 当输入的内容为大圣归来时，就设置背景图片为monkey.gif，将画笔设置为白色并且移动到(-120, 250)的位置再开始绘制文字，绘制的文字内容为《大圣归来》，字体为Arial，字号为40，加粗显示。
# 当输入的内容为喜羊羊与灰太狼时，就设置背景图片为sheep.gif，将画笔设置为白色并且移动到(-120, 280)的位置再开始绘制文字，绘制的文字内容为《喜羊羊与灰太狼》，字体为Arial，字号为30，加粗显示。
# （3）最后隐藏小海龟hideturtle()
import turtle

turtle.pencolor('white')
turtle.penup()
comic = input('请从选项中输入你喜欢的动漫名称：（可选动漫包括功夫熊猫、大圣归来、喜羊羊与灰太狼）')
if comic == '功夫熊猫':
    turtle.bgpic('panda.gif')
    turtle.goto(-120, 250)
    turtle.write('《功夫熊猫》', font=('Arial', 40, 'bold'))
elif comic == '大圣归来':
    turtle.bgpic('monkey.gif')
    turtle.goto(-120, 250)
    turtle.write('《大圣归来》', font=('Arial', 40, 'bold'))
else:
    turtle.bgpic('sheep.gif')
    turtle.goto(-120, 280)
    turtle.write('《喜羊羊与灰太狼》', font=('Arial', 30, 'bold'))
turtle.pendown()
turtle.hideturtle()
turtle.done()
