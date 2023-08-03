# 变量作用域指的是变量的作用范围，主要分为：局部变量和全局变量
# 局部变量在执行完函数后就销毁了
# def test_a():
#     num = 100
#     print(num)
#

# test_a()
# 出来函数题变量就无法使用了

# 全局变量就是函数体内、外都能生效的变量
# 只需要将变量定义在函数外

num = 200


def test_b():
    print(f"test_b:{num}")


def test_a():
    global num    # 设置内部定义的变量为全局变量
    num = 500        # 局部变量 如果只更改，也无法在外部使用
    print(f"test_a:{num}")


test_b()
test_a()
print(num)

# global关键字,在函数内部更改全局变量