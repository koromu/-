# 这里的11是整数，用了str（）把11转化成了字符串, 而且这三个语句都是有结果的
num_str = str(11)
print(type(num_str), num_str)

float_str = str(11.11)
print(type(float_str), float_str)
# 将字符串转化成数字
num = int("11")
print(type(num), num)

num2 = float("11.11")
print(type(num2), num2)

# 错误示例
# num3 = int("你好")
# print(type(num3),num3)

# 万物都可以转字符串，但字符串转换成数字，必须要求字符串内的内容都哦是数字

# 整数转浮点数
float_num =float(11)
print(type(float_num), float_num)

# 浮点数转整数
int_num = int(11.11)
print(type(int_num), int_num)