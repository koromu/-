# for i in range(1, 6):
#     print("语句1")
#     continue
#     print("语句2")


# for i in range(1, 6):
#     print("语句一")
#     for j in range(1, 6):
#         print("语句二")
#         continue
#         print("语句三")
#
#     print("语句四")

# continue  临时中断 结束本次循环运行下一次  只对所在的循环生效
# 遇到break结束整体循环 永久中断  只对所在的循环生效
# for i in range(1, 101):
#     print("语句一")
#     break
#     print("语句二")
#
# print("语句三")

for i in range(1, 6):
    print("word_1")
    for j in range(1, 6):
        print("word_2")
        break  # 运行了一次后，原本有五次循环但在碰到break五次都结束了
        print("word_3")
    print("word_4")