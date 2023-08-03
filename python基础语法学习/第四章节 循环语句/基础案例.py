# 还是猜数字，用循环优化
# 无限次机会，知道猜中为止
# 每一次猜不中，会提示大了还是小了
# 猜中后，提示猜了几次（用累加的功能）
# 随机数是用import random
#         num = random.randint(1, 100)
# 获取1-100的随机数字
import random
num = random.randint(1, 100)
# 定义一个变量记录猜测了多少次
count = 0
# 通过一个布尔类型的变量，做循环是否循环的标记
flag = True
while flag:
    guess_num = int(input("请输入你猜的数字："))
    count += 1
    if guess_num == num:
        print("猜中了")
        # 将flag定义车工 False既可以停止循环
        flag = False
    else:
        if guess_num > num:
            print("你猜的大了")
        else:
            print("你猜的小了")
print(f"你总共猜测了：{count}次")