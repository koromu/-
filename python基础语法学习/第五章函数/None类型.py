def say_hello():
    print("nihao")


result = say_hello()


print(f"无返回值的函数,返回的内容是:{result}")  # 返回的类型是None
print(f"无返回值的函数,返回的类型是:{type(result)})")  # 类型是


def say_hi1():
    print("你好")
    return None


result = say_hi1()


print(f"无返回值的函数,返回的内容是:{result}")  # 返回的类型是None
print(f"无返回值的函数,返回的类型是:{type(result)})")


# if 判断中None等同于False
def check_age(age):
    if age > 18:
        return "SUCCESS"
    else:
        return None


result = check_age(100)
if not result:  # 进入if表示result是Nnoe值,也就是False.因为not result就是Ture就可以进入if
    print("未成年人禁止进入网吧")
else:
    print("欢迎 消费")\


# None用于声明无初始内容的变量
name = None
# None 是类型'NoneType'的字面量,用于表示:空的、无意义的

i = None
for i in range(1, 101):
    print("nihao")
print(i)