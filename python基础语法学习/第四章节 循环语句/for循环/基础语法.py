# while 可以自行控制循环条件  for 将待办事项挨个处理，轮询机制
# for 临时变量 in 待处理数据集
# name = "nihao"
#
# for x in name:
#      # 将name的内容，挨个取出赋予临时变量x
#     # 就可以在循环体内对x进行处理
#     print(x)

# 无法注意循环条件，只能被动的取出数据处理
# 要注意，循环内的语句，需要有空格缩进
name = "itheima is a brand of itcast"
count = 0
for x in name:
    if x == "a":
        count += 1
print(f"itheima is a brand of itcast中含有：{count}个a")
print(type("a"))
# "a"是字符串 x是字符串
