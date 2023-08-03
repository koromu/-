age = int(input("请输入你的年龄："))

if age >= 18:
    print("您已成年，需要补票10元")
else:  # 不需要判断条件，当if的条件不满足是，else执行
    print("你免费了")

# 案例
print("欢迎来到动物园")
height = float(input("请输入您的身高（cm）："))
if height >= 180:
    print("太高了，得价钱")
else:
    print("小矮子,你免费了")
print("玩的愉快")