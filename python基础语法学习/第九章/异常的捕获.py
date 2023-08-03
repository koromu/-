# 为什么要捕获异常
# 不让程序崩溃，直接修复
# 基础捕获异常
# try:
#     f = open("D:/abc.txt", "r", encoding="UTF-8")
# except:
#     print("出现异常了，因为文件不存在，我将open的模式，改为W去打开")  # 捕获所有异常
#     f = open("D:/abc.txt", "w", encoding="UTF-8")

# 捕获指定异常
# try:
#     print(name)
#     # 1 / 0  # ZeroDivisionError 不会被捕获
# except NameError as a:  # as 后面的是别名随便命名
#     print("出现了变量未定义的异常")
#     print(a)  # a是错误的具体信息
# 捕获多个异常
# 通过一个元组把异常写里面用逗号隔开
# try:
#     print(1 / 0)
# except (NameError, ZeroDivisionError) as a:
#     print("出现了变量未定义 或者 除以0的异常错误")
#
# else 的功能
# try:
#     print("hello")
# except Exception as a:  # 顶级的异常 所都得异常都可以取到 或者像上面一样全部捕获
#     print("捕获异常了")
# else:
#     print("没有异常")

# finally无论是否异常都要执行的代码，例如关闭文件
try:
    f = open("D:/123.txt", "r", encoding="UTF-8")
except Exception as e:
    print("出现异常了")
    f = open("D:/123.txt", "w", encoding="UTF-8")
else:  # 可写可不写
    print("没有异常")
finally:
    print("我是finally，有没有异常我都执行")
    f.close()  # 可写可不写

# 可能发生异常的地方 进行捕获 当异常出现的时候，提供解决方式
# try:
#     可能要发生的异常语句
# except(异常1, 异常2, 异常3) as 别名:  #　'异常1， 2， 3就是会被捕获的异常' 'Exception就是顶级捕获'
#                                       '如果什么都不写也是全部捕获'　
#     出现异常时的准备手段
# else:
#     未出险异常时的操作
# finally:
#     不管出不出异常都会做的事情