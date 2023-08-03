# 字典[key]  可以得到key对应的value

# 语法 字典[key] = Value  如果key存在那就是更新  如果不存在就是新增  效果是一样的就是看key的存在与否

my_dict = {"nihao": 99, "good": 100}
my_dict["python"] = 66
print(f"新增加一个元素后结果是：{my_dict}")

my_dict["nihao"] = 0
print(f"修改元素后的结果是：:{my_dict}")

# 删除元素  字典.pop(key)  将key的元素取出同时删除
score = my_dict.pop("nihao")
print(f"字典中被移出了一个元素，结果是：{score}, 剩余内容是:{my_dict}")

# 清空元素
my_dict.clear()
print(f"字典被清空了，内容是：{my_dict}")

# 获取全部key的方法  语法：字典.keys()
my_dict = {"nihao": 99, "good": 100}
keys = my_dict.keys()
print(f"字典的全部key的内容是：{keys}")  # 取出了key就可以做遍历了

# 遍历字典
# 方式一：获取到全部的key，再完成遍历
for key in keys:
    print(f"字典的key是：{key}")
    print(f"字典的value是：{my_dict[key]}")

# 方法2：直接对字典进行遍历，每一次循环都是直接得到key
for key in my_dict:
    print(f"字典的key是：{key}")
    print(f"字典的value是：{my_dict[key]}")

# 字典不支持下标索引 ，所以不能用while循环

# 统计字典的元素数量
num = len(my_dict)
print(f"字典中的元素数量有：{num}")

# 每一分数据都是KeyValue键值对
# key不可以重复 可以修改

my_dict = {
    "王力宏": {
        "部门": "科技部",
        "工资": 3000,
        "级别": 1
        },
    "周杰伦": {
        "部门": "市场部",
        "工资": 5000,
        "级别": 2
        },
    "林俊杰": {
        "部门": "市场部",
        "工资": 7000,
        "级别": 3
        },
    "张学友": {
        "部门": "科技部",
        "工资": 4000,
        "级别": 1
        },
    "刘德华": {
        "部门": "市场部",
        "工资": 6000,
        "级别": 2
        }
}

print(f"全体员工当前信息如下：{my_dict}")

keys = my_dict.keys()
# 检测加工资
for name in my_dict:  # 取到级别
    if my_dict[name]["级别"] == 1:  # 升职加薪, 先获取到信息字典在修改，再更新
        employee_my_dict = my_dict[name]  # 获取员工信息， 目前字典里的信息不变， 我们修改准备用来更新的信息
        employee_my_dict["级别"] = 2  # 更新级别 +1
        employee_my_dict["工资"] += 1000  # 工资加1000
        my_dict[name] = employee_my_dict  # 整体更新员工信息
print(f"全体员工级别为1的员工完成升职加薪操作后，信息如下：{my_dict}")