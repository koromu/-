# pycharm 不知道是好事呢么类型 就不能提示协助
import json
import random

var_1: int = 10
var_2: float = 1.12312
var_3: str = "nihao"

my_list1: list = [1, 2, 3]
my_list2: list[int] = [1, 2, 3]
my_tuple: tuple[str, int, bool] = ("ds", 666, True)
my_dict: dict[str, int] = {"nihao": 666}        # 字典注解左边的是key右边的是value


class Student:
    pass


stu: Student = Student()    # 类型是Student

#      语法（在注释中进行类型注解）：# type: 类型
var1 = random.randint(1, 10)    # type: int
var2 = json.loads('{"name: "nihao"}')       # type: dict[str, str]


def func():
    pass


var3 = func()   # type: int   # 写错了不会出问题，但是会误解 是提示性的

# 一般无法判断类型的时候增加变量的注解
data = '1'
var4: dict = json.loads(data)
