# 文件分为 文件文本，视屏文件，音频文件，图像文件
# 文件操作主要包括 打开 关闭 读 写
# Python 打开open(name,mode,encoding) 读写 关闭
# name  文件名的字符串 可以包括文件的具体路径
# mode 打开文件的模式（访问模式）：只读、写入、追加等
# encoding：编码格式（UTF-8）
import time

f = open("C:/密码.txt", "r", encoding="UTF-8")  # 关键字传参
print(type(f))

# read(num)方法：  readlines()
# print(f"读取10个字节的结果是：{f.read(5)}")
# print(f"读取全部内容的结果是：{f.read()}")  # 连续调用两个read 下一个read会在上一个read的结尾开始
print("------------------------------------------")


# lines = f.readlines()
# print(f"lines对象的类型：{type(lines)}")
# print(f"lines的内容是：{lines}")  # 如果有换行还会有\n换行符被读到


# readline() 一次读取一行

# line1 = f.readline()
# line2 = f.readline()
# line3 = f.readline()
# print(f"第一行数据是：{line1}")
# print(f"第一行数据是：{line2}")
# print(f"第一行数据是：{line3}")

# 用for循环
# for line in f:
#     print(f"每一行数据是：{line}")


# 关闭文件对象 如果不换掉就会一直被python占用
f.close()
time.sleep(500000)  # 睡眠500000秒

# with open() as f:  在with open 中写代码就可以自动关闭

with open("C:/密码.txt", "r", encoding="UTF-8") as f:  # 用这个方法完成循环后自动关闭文件
    for line in f:
        print(f"每一行数据是：{line}")

time.sleep(512132)