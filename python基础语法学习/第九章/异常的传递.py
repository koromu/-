# 基于函数中的传递 异常是会传递的：异常具有传递性
def func1():
    print("func1,开始执行")
    num = 1 / 0
    print("func1,结束执行")


def func2():
    print("func2,开始执行")
    func1()
    print("func2,结束执行")


def main():
    try:
        func2()
    except Exception as a:               # 捕获异常不需要真正那个最底层异常,在高的层级也可以捕获
        print(f"出现异常了，异常的信息是:{a}")


main()