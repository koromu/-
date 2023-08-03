# 数字中的一类 布尔(bool) Ture 本质是1  False 的本质是0 所以是数字类型
#  ==（是否相等）  !=（是否不相等）  >（是否大于）  <（是否小于）  >=（是否大于等于）  <=（是否小于等于）
# 可以通过比较运算得到布尔类型
bool_1 = True
bool_2 = False
print(f"boos_1变量的内容是：{bool_1}, 类型是：{type(bool_1)}")
print(f"boos_1变量的内容是：{bool_2}, 类型是：{type(bool_2)}")

# 内容相等的比较 ==
num_1 = 10
num_2 = 10
print(f"10和10相等的结果是：{num_1 == num_2}")

num_1 = 10
num_2 = 15
print(f"10和15不相等的结果是：{num_2 != num_1}")

name_1 = "你好"
name_2 = "nihao"
print(f"你好和nihao相等的结果是：{name_2 == name_1}")

# 大于小于 大于等于 小于等于的比较
num_1 = 10
num_2 = 5
print(f"10 > 5的结果是：{num_1 > num_2}")
print(f"10 < 5的结果是: {num_1 < num_2}")

num_1 = 10
num_2 = 11
print(f"10 >= 11的结果是：{num_1 >= num_2}")
print(f"10 <= 11的结果是，{num_1 <= num_2}")