# 条件的类型必须是是布尔类型 要么Ture 要么False
# 演示while 循环的基础应用
# i = 0
# while i < 100:
#     print("你好")
#     i += 1  # 循环终止条件,否则无限循环


# 练习案例
sum = 0
i = 1
while i <= 100:
    sum += i
    i += 1

# 只有上面这个while程序结束后才会到下面这个print
print(f"一到一百累加的和是:{sum}")