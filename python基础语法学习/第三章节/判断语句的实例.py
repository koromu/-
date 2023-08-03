# 数字随机产生，范围是1-10
# 有三次机会，通过三层嵌套对判断实现
# 每次猜不中，会提示大了或小了

import random
num = random.randint(1, 10)

guess_num = int(input("输入第一次猜的数字（1-10）："))

if guess_num == num:
    print("第一次猜中了，6啊")
else:
    if guess_num > num:
        print("猜大了")
    else:
        print("猜小了")

    guess_num = int(input("输入第二次猜的数字："))

    if guess_num == num:
        print("第二次就猜中了")
    else:
        if guess_num > num:
            print("猜大了")
        else:
            print("猜小了")
        guess_num = int(input("输入第三次猜的数字："))

        if guess_num == num:
            print("第三次猜中了")
        else:
            print("机会用完了，寄咯")