# 字符串是字符的容器 每一个字符都有下标索引
# 下标索引
my_str = "nihao and hello"
value1 = my_str[2]
value2 = my_str[-12]
print(f"从字符串{my_str}取下标二的元素值是：{value1}，取倒数第12个的元素值是{value2}")

# 字符串是不可修改的数据容器 童元组一样：无法修改的数据容器.只读的容器
# 不可以修改、移出、追加指定下标字符。只能得到一个新的字符串

my_str = "nihao and hello"

# 字符串.index[下标索引]
num = my_str.index("and")
print(f"在字符串{my_str}中查到and，其第一个小标索引是{num}")

# 字符串的替换
# 语法：字符串.replace(字符串1，字符串2) 全部的1换成2
# 得到一个新字符串 也就是有一个返回值
my_new_str = my_str.replace("ni", "wo")
print(f"将字符串{my_str}, 进行替换后得到的是：{my_new_str}")

# 字符串的'分隔'
# 语法：字符串.spilt(分隔符字符串)
# "hello python" 变成"hello", "python"
my_str = "hello nihao good python"
my_str_split = my_str.split(" ")  # 结果可以看出 不改变my_str
print(f"将字符串{my_str}按照空格分割后得到的结果是{my_str_split}, 类型是:{type(my_str_split)}")
# 分割后变成列表

# 字符串.strip()字符串的'规整' 取出前后空格以及回车符 字符串.strip(字符串)
# 后面的字符串如果有就是用给的字符串，否则就是用默认值
# 前者是去头和尾的空格 后者去前后的字符串
my_str = "  nihao and python  "
new_my_str = my_str.strip()  # 不传参数就是去除首尾空格
print(f"字符串{my_str}被strip后，结果是{new_my_str}")

my_str = "12nihao and python21"
new_my_str = my_str.strip("12")  # 实际是两个小子串 1 和 2
print(f"字符串{my_str}被strip('12')后，结果是{new_my_str}")  # 可以传参也可以不传参

# 统计字符串中某字符串的字数
my_str = "nihao and python and ninininihao"
count = my_str.count("ni")
print(f"字符串{my_str}中，ni出现的次数是：{count}")

# 统计字符串的长度
num = len(my_str)
print(f"字符串{my_str}的长度是：{num}")

my_str = "nihao"
index = 0
while index < len(my_str):
    string = my_str[index]
    print(string)
    index += 1

my_str = "nihao"
for i in my_str:
    print(i)

# 特点 不支持修改（增加或删除元素） 只能存储字符串

my_str = "itheima itcast boxuegu"
num = my_str.count("it")
print(f"字符串{my_str}中有{num}个it字符")
my_new_str = my_str.replace(" ", "|")  # 用后面的换前面的
print(f"字符串{my_str}，被替换空格的结果是：{my_new_str}")
# 按照特殊字符串分隔
my_str = "itheima|itcast|boxuegu"
my_new_str = my_str.split("|")
print(f"将字符串{my_str}按照|分隔后，得到：{my_new_str}")