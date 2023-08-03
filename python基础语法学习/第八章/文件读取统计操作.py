f = open("C:/word.txt", "r", encoding="UTF-8")
count = 0
with open("C:/word.txt", "r", encoding="UTF-8"):
    for line in f:
        line = line.strip()  # 去除开头和结尾的空格以及换行符， 有/n会影响 ，先把一行变成单个的str在判断
        print(f"line的类型是:{type(line)}")
        my_strs = line.split(" ")  # 这是把一行变成存有一个个单词的容器  列表 分隔方法把字符串变成列表
        print(f"my_strs的类型是:{type(my_strs)}")
        for my_str in my_strs:  # 这是一个个判断
            if my_str == "itheima":
                count += 1


print(f"word.txt中有{count}个itheima")

# content = f.read()
# count = content.count("itheima")
# print(f"出现了{count}次")
