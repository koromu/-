# 函数参数种类

# 位置参数

# 关键字参数:函数调用时通过“键=值”的方式传递参数
# 用形式参数接受实际参数
# 只要键对到值，就可以不要位置
# 位置参数和关键字参数可以混合用  但是位置参数必须在最前面

def user_info(name, age, gender):
    print(f"姓名是：{name}, 年龄是：{age}, 性别是{gender}")


user_info('小米', 20, "男")

user_info(name='nihao', age=9, gender='男')
user_info(age=10, name='nihao', gender='女')
user_info('nihao', gender='男', age=50)


# 缺省参数，可以提供默认值
def user_info(name, age, gender='男'):
    print(f"姓名是：{name}, 年龄是：{age}, 性别是{gender}")


# 默认值一定要统一的在最后面，从后往前设置默认值

# 不定长参数 ① 位置传递不定长  '*'意味着数量是不受限制的
# 传递的所有参数都会被arge变量收集，他会更具传入的数据形成一个‘’元组‘’

def user_info(*args):  # 规范形式参数命名为args
    print(f"args参数的类型是：{type(args)}, 内容是{args}")


user_info(1, 2, 3, 'nihao', 'good')


# ② 关键字不定长 '**' 不定长定义的形式参数会作为字典存在
# 一定要key=value的形式才可以


def user_info(**kwargs):  # 规范形式参数命名为kwargs
    print(f"args参数类型是：{type(kwargs)}, 内容是{kwargs}")


user_info(name='nihao', age=114, gender='男')
