# # 嵌套式的基础语法
# if int(input("你的身高是多少：")) > 120:
#     print("身高超过限制，得价钱")
#     print("但是有VIP等级大于3，就可以了")
#
#     if int(input("你的VIP级别是多少？（1-5）：")) > 3:
#         print("欧克啦,金主里走")
#     else:
#         print("得价钱")
# else:
#     print("可以free游玩小朋友。")

# if elif else 都可以自由组合 满足缩进就可以


age = 6
year = 1
level = 1
if age >= 18:
    print("你是成年人")
    if age <= 35:
        print("年龄满足了")
        if year > 2:
            print("年龄和入职时间欧克了，你合格了")
        elif level > 3:
            print("年龄和级别达标，可以领取年终奖")
        else:
            print("年龄达标了，但级别和入职时间不太OK，下一个")
    else:
        print("抱歉老家伙，你无了")
else:
    print("小朋友，都算童工了哦")

# 注意缩进就可以自由组合