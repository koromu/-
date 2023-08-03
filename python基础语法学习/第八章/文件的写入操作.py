# write('hello world')  直接调用不会真正地写入文件，而是积攒在程序的内存中，称为缓冲区
# 用flush()就会写入硬盘
import time

f = open("C:/test.txt", "w", encoding="UTF-8")   # 方法w是写入  如果不存在就会创建， 如果存在就会清空内容然后写再入

f.write("hello world")        # 将内容写入到内存中
f.flush()
f.close()  # close方法，内置了flush的功能的