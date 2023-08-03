# 判断条件不止一个

# if int(input("请输入你的身高：")) < 120:
#     print("你免费了。")
# elif int(input("请输入你的vip等级(1~5)：")) >= 3:
#     print("高级用户，你免费了。")
# elif int(input("今天几号（1~30）：")) == 1:
#     print("给你碰到了，免费了你。")
# else:
#     print("fw，得价钱")

# 多条件中满足 条件是互斥的且有序的 else可以省略不写 相当于三个独立的if
# 空格缩进不能省略
# 可以将input输入到if中 就可以等到一个满足，后面的都停止了
# 先定义一个数字
num = 6

if int(input("你猜啥（1-10）：")) == num:
    print("给你小子碰到了。")
elif int(input("你再猜（1-10）：")) == num:
    print("终于猜到了你。")
elif int(input("再猜（1-10）：")) == num:
    print("一般水平。")
else:
    print("fw,别猜了爬。")