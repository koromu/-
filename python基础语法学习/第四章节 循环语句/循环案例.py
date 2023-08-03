recent_money = 10000
for i in range(1, 21):
    import random

    num = random.randint(1, 10)
    if num < 5:
        print(f"员工{i},绩效分{num},低于5,不发工资，下一位")
    else:
        print(f"向员工{i}发放工资1000元，账户余额还剩{recent_money - 1000}")
        recent_money -= 1000
        if recent_money == 0:
            print(f"余额不足，当前余额{recent_money},不够发了，下个月再来")
            break
print()

recent_money = 10000
for i in range(1, 21):
    import random

    num = random.randint(1, 10)
    if num < 5:
        print(f"员工{i},绩效分{num},低于5,不发工资，下一位")
        continue

    if recent_money >= 1000:
        recent_money -= 1000
        print(f"向员工{i}发放工资1000元，账户余额还剩{recent_money}")
    else:
        print(f"余额不足，当前余额{recent_money},不够发了，下个月再来")
        break

