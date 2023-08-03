# 列表是可以修改的 元组一旦定义完成就不可以修改
# 元组定义：定义域阿奴使用小括号，用逗号隔开各个数据
# 变量 = （） 变量 = tuple()
t1 = (1, "hello", True)
t2 = ()
t3 = tuple()
print(f"t1的类型是：{type(t1)},内容是：{t1}")
print(f"t1的类型是：{type(t2)},内容是：{t2}")
print(f"t1的类型是：{type(t3)},内容是：{t3}")

# 元组只有一个数据， 要在后边加一个单独的逗号
t4 = ("hello", )
print(f"t4的类型是：{type(t4)},内容是：{t4}")

# 元组内的元素也是不受限制的
t5 = ((1, 2, 3), (4, 5, 6))
print(f"t5的类型是：{type(t5)},内容是：{t5}")

number1 = t5[-1][-1]
number2 = t5[1][2]
print(number1)
print(number2)

# index()
t6 = ("nihao", "good", "Python")
index = t6.index("good")
print(f"good的下标是{index}")
# count()
t7 = ("nihao", "nihao", "nihao", "nihao", "good", "Python")
num = t7.count("nihao")
print(f"你好有：{num}个")
# len()
t8 = ("nihao", "nihao", "nihao", "nihao", "good", "Python")
num = len(t8)
print(f"有{num}个")

index = 0
while index < len(t8):
    print(f"元组的元素有：{t8[index]}")
    index += 1

for element in t8:
    print(f"2元组的元素有：{element}")
# 虽然不可以修改元组里的元素，但是可以修改元组里的列表
t9 = (1, 2, ["nihao", "good", "hello"])
print(f"t9的内容是{t9}")
t9[2][1] = "6"  # 字符换字符 整数换整数
print(f"t9的内容是{t9}")

t1 = ("周杰伦", 11, ["football", "music"])

index = t1.index(11)
print(f"年龄的下标是{index}")

name = t1[0]
print(f"学生的姓名是{name}")

del t1[2][0]
print(f"t1的内容是{t1}")

# t1.append("coding")
# print(f"t1的内容是{t1}")  元组没有追加的方法

# 插入元组[元素].insert(下标， “元素内容”)
t1[2].insert(0, "coding")
print(f"ti的内容是{t1}")