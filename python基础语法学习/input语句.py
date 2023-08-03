# print 是输出语句
# input 是输入语句

# print("请告诉我你是谁？")

# 在这里会停止 然后input会接受键盘的内容，然后用过一个变量接收
name = input("请告诉我你是谁？")  # 双引号中的是提示语句
print("我晓得了，你是：%s" % name)

# 输入数字类型
num = input("你有多少钱")
# input 不管写进的是什么内容永远都是字符串
# 想要其他类型要用数据类型转换 int() float() str()
num = int(num)
print("你的钱类型是：", type(num))

# input(提示信息)

# 作业部分
user_name = input("请输入你的用户名")
user_type = input("请输入你的用户类型")
print("您好：%s,您是尊贵的：%s用户，欢迎您的光临。" % (user_name, user_type))