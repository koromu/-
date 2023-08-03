# # 补充print输出不换行的print("hello", end")
# print("hello", end=")
# print("world", end=")
# print("hello \tworld")
# print("nige \thao")  # \t 制表符

# 99乘法表
# 1.控制行的循环 i <= 9
# 2.控制每一行输出的循环 j <= i (第一行一个，第二行两个)

# i 是行  外层循环的变量总共有九行
i = 1
while i <= 9:
    j = 1
    while i >= j:
        print(f"{int(i)} * {int(j)} = {i * j}\t", end='')
        j += 1
    i += 1
    print()

i = 1
while i <= 9:
    # 定义内循环的控制变量
    j = 1
    while j <= i:
        # 内层循环的print语句，不要换行
        print(f"{j} * {i} = {j * i}\t", end='')
        j += 1
    i += 1
    print()  # print()，就是输出一个换行
