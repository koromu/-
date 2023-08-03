# 如果函数中有两个return如果有两个，只执行第一个
def test_return():  # 演示使用多个变量，并接收
    return 1, "hello", True  # 类型不受限制


x, y, z = test_return()
print(x)
print(y)
print(z)

