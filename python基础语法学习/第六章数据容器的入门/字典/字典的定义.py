# 生活中间的字典是用【字】找到【含义】
# python中是【key】对应【value】
# 字典可以用key　找到对应的value
# 字典是用{}
# 语法 :{key:value, key:value, ..., key:value}
# 空字典定义方式1 :{} 2 :dict{}
my_dict1 = {"nihao": 99, "good": 98, "python": 100}
my_dict2 = {}
my_dict3 = dict()
print(f"字典1 的内容是：{my_dict1}, 类型是{type(my_dict1)}")
print(f"字典2 的内容是：{my_dict2}, 类型是{type(my_dict2)}")
print(f"字典3 的内容是：{my_dict3}, 类型是{type(my_dict3)}")

# python中的key是不可以重复的
# my_dict1 = {"nihao": 99, "nihao": 98, "python": 100}

print(f"重复key的内容是：{my_dict1}")  # 新的key会把老的key替换掉，不重复 所以留下来的事后面的

# 字典没有下标索引 可以使用key取到value
my_dict1 = {"nihao": 99, "good": 98, "python": 100}
score1 = my_dict1["nihao"]
score2 = my_dict1["good"]
score3 = my_dict1["python"]
print(f"你好的代号是：{score1}")
print(f"你好的代号是：{score2}")
print(f"你好的代号是：{score3}")

# key 和 value 可以是任何数据类型  注意：key不能是value
# 那么表明字典是可以嵌套的
stu_score_dict = {
    "nihao": {
        "chinese": 77,
        "math": 66,
        "english": 33
        }, "good": {
        "chinese": 88,
        "math": 86,
        "english": 55
        }, 'python': {
        "chinese": 99,
        "math": 86,
        "english": 66
        }
}  # 只要一开始的格式是对的这样反而美观一点
print(f"学生考试的信息是：{stu_score_dict}")
score = stu_score_dict["good"]["math"]
print(f"good的math的代号是:{score}")
score = stu_score_dict["python"]["english"]
print(f"python的english的代号是:{score}")