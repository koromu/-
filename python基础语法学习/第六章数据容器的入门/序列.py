# 序列是指：内容连续，有序，可使用下标索引的一类数据容器
# 列表，元组，字符串，均可视为序列
# 切片（大序列中抽一个小序列）  语法： 序列[起始下标:结束下标:布长]  取起始下标，不取结束下标  步长就是跳过的元素个数
# 切出来小的，不影响原序列

my_list = [0, 1, 2, 3, 4, 5, 6]
result1 = my_list[1:4:1]
print(f"结果1：{result1}")  # 步长默认是1

my_tuple = (0, 1, 2, 3, 4, 5, 6)
result2 = my_tuple[:]
print(f"结果2：{result2}")  # 起始下标和结束下标默认是从头到尾

my_str = "0123456789"
result3 = my_str[::2]
print(f"结果3：{result3}")

my_str = "0123456789"
result4 = my_str[::-1]
print(f"结果四：{result4}")  # 等于将序列翻转了

my_list = [0, 1, 2, 3, 4, 5, 6]
result5 = my_list[3:1:-1]
print(f"结果4：{result5}")  # 不包括1 就是从 3 到 2

my_tuple = (0, 1, 2, 3, 4, 5, 6)
result6 = my_tuple[::-2]
print(f"结果6：{result6}")

str1 = "1w a htnom emoclew ot 员序程马黑来 nohtyp学 "
result7 = str1[-11:-17:-1]  # 也可以倒序和切片同时在一个代码中进行
normative_result7 = str1[::-1][10:15]  # 注意正向从0开始
normative2_result7 = str1[22:27][::-1]
print(f"结果7：{result7}")
print(f"标准结果7：{normative_result7}")
print(f"标准2结果7：{normative2_result7}")

my_new_list = str1.split(" ")
print(f"{my_new_list}")
target = my_new_list[5]
new_target = target.replace("来", " ")
print(f"{new_target}")
result8 = new_target[::-1]
print(f"结果8：{result8}")

# 一次性进行操作
new_result8 = str1.split(" ")[5].replace("来", " ")[::-1]
print(f"标答结果8：{new_result8}")

