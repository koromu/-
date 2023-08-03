# 列表的 '方法'
# 函数是一个疯转的代码单元，可以提供特定功能
# 如果定义在class的成员，那么函数会被称为：方法
# 方法的使用 num = 函数（变量，变量）
# 先获取类对象 在用 num = 方法.函数（变量，变量）

# 查询功能(方法)
# 列表.index(元素)→可以查询元素的下标索引值 index叫做方法 但实际就是函数 只是在列表对象内置叫方法
my_list = ["nihao", "good", "python"]
index = my_list.index("nihao")
print(f"nihao在列表中的下标索引是：{index}")
# index = my_list.index("hello")
# print(f"nihao在列表中的下标索引是：{index}")  # 如果不存在就会 valueError

# 列表[下标] = 值 就可以对特定位置的元素替换掉
my_list[1] = "hello"  # my_list[1] 就是good 然后用赋值替换就是替换
print(f"列表被修改元素之后，结果是：{my_list}")

# 语法：列表.insert(下标, 元素)
my_list.insert(1, "内个")
print(f"列表插入元素后，结果是：{my_list}")

# 追加元素,加到最后的位置
# 语法：列表.append(元素) 不需要定位因为就是在最后面
my_list.append("阳光彩虹小马")
print(my_list)

# 不止可以追加一个元素，还可以追加一堆元素
# 语法：列表.extend(数据容器)
my_list2 = [1, 3, 5]
my_list.extend(my_list2)
print(my_list)

# 删除方法1 del 列表[下标]
# 删除方法2 列表.pop(下标)
my_list = ["nihao", "good", "python"]
del my_list[1]
print(f"用方法一删除后的结果是：{my_list}")

my_list = ["nihao", "good", "python"]
element = my_list.pop(1)
print(f"通过pop方法取出元素后列表内容：{my_list}, 取出的元素是{element}")
# 总结区别 del和pop都可以精准删除 但pop会把删掉的元素作为返回值返回出来 可以用变量接受

# 不通过下标 指定元素删除 从前到后删除第一个指定元素删除
my_list = ["nihao", "good", "python", "good", "python"]

my_list.remove("python")
print(f"通过remove方法移出元素，列表结果是：{my_list}")

# 清空列表内容 列表.clear()
my_list.clear()
print(f"列表被清空了,结果是：{my_list}")

my_list = ["nihao", "nihao", "nihao", "good", "python"]
# 统计列表中元素的数量
# 语法：列表.count(元素)
count = my_list.count("nihao")
print(f"列表中nihao的数量是：{count}")

# 统计列表中有多少个元素
count = len(my_list)
print(f"列表中元素总共有：{count}个")

# 列表的上限是2**63-1 9223372036854775807个
# 可以容纳不同的类型元素
# 数据是有序存储的
# 允许重复存在
# 可以修改

# 定义一个列表
age_list = [21, 25, 21, 23, 22, 20]

age_list.append(31)
print(f"追加一个数字在列表中，结果是：{age_list}")

new_list = [29, 33, 30]

age_list.extend(new_list)
print(f"额外增加一个容器后的结果是：{age_list}")

number1 = age_list[0]
print(f"取出的第一个元素是：{number1}")
number_end = age_list[-1]
print(f"取出的最后一个元素是：{number_end}")


index = age_list.index(31)
print(f"第一个31在列表中的下标位置是：{index}")

print(f"最后列表的内容是：{age_list}")