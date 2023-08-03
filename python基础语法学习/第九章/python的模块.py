# python的模块(Module)，是一个Python文件 以.py结尾，模块能定义函数，类和变量
# 模块就是Python文件 可以直接用(导入模块语法)

# [from 模块名] import [模块 | 类 | 变量 | 函数 | * ] [as 别名]     语法  模块名.功能名

# 内置time的模块
# import time  # 导入time
#
# print("good")
# time.sleep(5)  # 执行这里休眠5秒 。通过.使用time模块中的全部功能（类，函数，变量）。 .是确认层级的
# print("nihao")

# from time import sleep
# print("nihao")
# sleep(5)   # form就可以直接用sleep
# print("good")

# from time import *     # *表示全部的意思  区别在于:可以直接使用不用'.'

# from 可以省略直接写import


# as 别名 就是把模块的具体的功能换个名字
# import time as t   # 名字太长换个简单的名字
# print("good")
# t.sleep(5)
# print("nihao")


from time import sleep as sl    # 别名不一样一定要写 from 可以省略
print("你好")
sl(5)
print("nihao")

# 导入模块就在文件的最开头导入
