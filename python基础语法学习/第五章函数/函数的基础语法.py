# 函数的定义格式
# def 函数名(传入参数):
#     函数体
#     (return 返回值)
def say_hi():  # 此处没有传入参数 但还是要括号
    print("nihao")


# 这是定义了一个函数 但是没有调用他
# 调用函数,让定义函数开始工作
say_hi()


# 注意:函数必须先定义,后调用
# 参数可以省略 返回值可以省略


def auto_welcome_check():
    print("欢迎来到动物园 ")
    print("请出示72小时核酸证明")
    
    print("欢迎来到动物园!\n请出示你的72小时函数证明.")


auto_welcome_check()