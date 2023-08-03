# 控制好空格缩进就可以嵌套循环


# 坚持表白一百天，每天送10朵花
# name = "abcdefghijklmnopqrstuvwxyz"

# range(1, 101)
i = 1
for i in  range(1, 101):
    print(f"今天是向xx表白的第{i}天")
    for j in range(1, 11):
        print(f"给xx送的第{j}朵玫瑰")
    print("xx我喜欢你")

print(f"第{i}天，表白成功")

# 案例
i = 1
for i in range(1, 101):
    print(f"今天是向xx表白的第{i}天")
    j = 1
    while j <= 10:
        print(f"这是送的第{j}朵玫瑰花")
        j += 1
    print(f"喜欢你，（今天是表白的第{i}天）")
print(f"第{i}天，成功拿下")


i = 1
while i <= 100:
    print(f"今天是第{i}天，开始送花！")
    for j in range(1, 11):
        print(f"第{j}朵玫瑰")
    print(f"xx我喜欢你，今天是表白的第{i}天")
    i += 1
print(f"今天是第{i- 1}天,成功拿下")  # 检查到最后几句话的天数有问题，就改最后一句话