# set 定义格式 变量名称 = {元素1， 元素2， 元素3}  空集合就是 set()
# 列表[] 元组() 字符串"" 集合{}
my_set = {"nihao", "good", "python", "nihao", "good", "python", "nihao", "good", "python", "nihao", "good", "python"}
my_set_empty = set()
print(f"my_ste的内容是:{my_set}, 类型是{type(my_set)}")  # 去重了，而且乱序了
print(f"my_ste的内容是:{my_set_empty}, 类型是{type(my_set_empty)}")

# 集合是无序的，所以不支持下标索引 但是和列表一样允许修改。所以不叫序列

# 添加新元素 集合.add()
my_set.add("Python")
my_set.add("nihao")  # 原本就有的就不会进来了， 因为是去重的
print(f"添加元素后结果是：{my_set}")

# 移出元素 集合.remove()
my_set.remove("good")
print(f"取出nihao的结果是:{my_set}")

# 随机取出一个元素,原集合被修改 集合.pop() 有下标索引就是定点 ，没有就是随机
element = my_set.pop()
print(f"集合被取出元素是：{element}， 取出元素后集合内容是:{my_set}")

# 清空集合 集合.clear()
my_set.clear()
print(f"集合被清空的结果是“{my_set}”")

# 取出2个集合的差集 集合1.difference(集合2)  取出集合1和集合2的差集 集合1有的而集合2没有的 以前面的为基准
set1 = {1, 2, 3}
set2 = {1, 5, 7}
set3 = set1.difference(set2)
print(f"去出差集合的结果是：{set3}")
print(f"取出差集后，原有set1的内容：{set1}")
print(f"取出差集后，原有set2的内容：{set2}")

# 消除差集 在集合1内， 删除和集合2相同的元素
# 结果：集合1被修改，集合2不变
set1 = {1, 2, 3}
set2 = {1, 5, 7}
set1.difference_update(set2)
print(f"消除差集后,集合1的内容：{set1}")
print(f"消除差集后,集合2的内容：{set2}")

# 合并两个集合 集合1.union(集合2)
# 不改变原有集合
set1 = {1, 2, 3}
set2 = {1, 5, 7}
set3 = set1.union(set2)
print(f"两集合合并结果：{set3}")
print(f"合并后集合1内容：{set1}")
print(f"合并后集合2内容：{set2}")

# 统计集合元素数量 语法:len（）
set1 = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5}
num = len(set1)
print(f"集合1的元素数量是：{num}")

# 集合的遍历 不支持下标索引就不能index 就不能用while 所以可以用for循环

set1 = {1, 2, 3, 4, 5}
for element in set1:
    print(f"集合的元素有：{element}")

# 集合的总结 可以容纳多个数据
#     但不允许重复 是无序的（不支持下标索引）
#     可以修改

my_list = ["nihao", "传智播客", "nihao", "传智播客", "good", "python", "good", "python", "best"]
print(f"有列表{my_list}")
my_set = set()
for element in my_list:
    my_set.add(element)
print(f"存入集合后的结果:{my_set}")  # 如此就可以将列表去重，但容器类型从列表变成集合了