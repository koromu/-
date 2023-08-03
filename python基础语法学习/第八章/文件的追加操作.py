# 就是 模式变成“a”  如果不存在文件就创建文件 存在就写入 原有内容不变
f = open("D:/test.txt", "a", encoding="UTF-8")
f.write("\n练习换行")
f.close()