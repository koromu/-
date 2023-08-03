# 函数作为参数传递
# 其实我们学的函数也能当元素传入
# 传递函数就是计算逻辑的传递 ，而不是数据的传递  逻辑由我们定义，数据可能是固定的  “此时思想升华了”

def test_func(compute):
    result = compute(1, 2)
    print(f"compute参数的类型是：{type(compute)}")
    print(f"计算结果是：{result}")


def compute(x, y):
    return x + y


test_func(compute)


# lambda匿名函数
# def关键字 定义带有名字的函数
# lambda关键字 可以定义匿名函数
# 有名字的可以重复使用
# 匿名的只可以使用一次
# lambda 传入参数： 函数体(一行代码)  lambda是自己有return的
def test_func(compute):
    result = compute(1, 2)
    print(f"结果是：{result}")


def add(x, y):
    return x + y  # 麻烦


test_func(lambda x, y: x + y)  # 简洁  只支持一行代码，只使用一次的场景