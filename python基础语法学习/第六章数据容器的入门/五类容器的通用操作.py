# 1.遍历
# 2.len()统计容器的元素个数  max()统计容器的最大元素  min()同居容器的最小元素

my_list = [1, 2, 3, 4, 5]
my_tuple = (1, 2, 3, 4, 5)
my_str = "12345"
my_set = {1, 2, 3, 4, 5}
my_dict = {"key1": 1, "key2": 2, "key3": 3, "key4": 4, "key5": 5}


print(f"列表 元素个数有：{len(my_list)}")
print(f"元组 元素个数有：{len(my_tuple)}")
print(f"字符串 元素个数有：{len(my_str)}")
print(f"集合 元素个数有：{len(my_set)}")
print(f"字典 元素个数有：{len(my_dict)}")


print(f"列表 最大元素有：{max(my_list)}")
print(f"元组 最大元素有：{max(my_tuple)}")
print(f"字符串最大元素有：{max(my_str)}")
print(f"集合 最大元素有：{max(my_set)}")
print(f"字典 最大元素有：{max(my_dict)}")

print(f"列表 最大元素个数有：{min(my_list)}")
print(f"元组 最大元素个数有：{min(my_tuple)}")
print(f"字符串最大元素个数有：{min(my_str)}")
print(f"集合 最大元素个数有：{min(my_set)}")
print(f"字典 最大元素个数有：{min(my_dict)}")

# 容器转列表
print(f"列表转列表的结果是：{list(my_list)}")
print(f"元组转列表的结果是：{list(my_tuple )}")
print(f"字符串转列表结果是：{list(my_str )}")
print(f"集合转列表的结果是：{list(my_set)}")
print(f"字典转列表的结果是：{list(my_dict)}")  # 会抛弃value

# 容器转元组
print(f"列表转元组的结果是：{tuple(my_list)}")
print(f"元组转元组的结果是：{tuple(my_tuple )}")
print(f"字符串转元组结果是：{tuple(my_str )}")
print(f"集合转元组的结果是：{tuple(my_set)}")
print(f"字典转元组的结果是：{tuple(my_dict)}")  # 会抛弃value

# 容器转字符串
print(f"列表转字符串的结果是：{str(my_list)}")  # 内容是"[1, 2, 3, 4, 5]"
print(f"元组转字符串的结果是：{str(my_tuple )}")  # 内容是"(1, 2, 3, 4, 5)"
print(f"字符串转字符串结果是：{str(my_str )}")
print(f"集合转字符串的结果是：{str(my_set)}")  # 内容是"{1, 2, 3, 4, 5}"
print(f"字典转字符串的结果是：{str(my_dict)}")  # "{'key1': 1, 'key2': 2, 'key3': 3, 'key4': 4, 'key5': 5}"  value会被保存下来

# 容器转集合
print(f"列表转集合的结果是：{set(my_list)}")
print(f"元组转集合的结果是：{set(my_tuple)}")
print(f"字符串转集合结果是：{set(my_str)}")  # 集合的数据无序 而且还会去重
print(f"集合转集合的结果是：{set(my_set)}")
print(f"字典转集合的结果是：{set(my_dict)}")  # value丢失还会乱序

# 有转换字典的函数，但是要键值对才能转 其它容器所以都是没有办法转成字典的  只有转字符串才保存value

# 通用排序功能  sorted()
my_list = [1, 5, 4, 2, 3]
my_tuple = (1, 5, 4, 3, 2)
my_str = "23541"
my_set = {2, 3, 5, 4, 1}
my_dict = {"key3": 3, "key2": 2, "key1": 1, "key5": 5, "key4": 4}

print(f"列表对象的排序结果：{sorted(my_list)}")
print(f"元组对象的排序结果：{sorted(my_tuple)}")
print(f"字符串对象的排序结果：{sorted(my_str)}")
print(f"集合对象的排序结果：{sorted(my_set)}")
print(f"字典对象的排序结果：{sorted(my_dict)}")  # 会丢失value
# 排完序的结果都会变成列表对象 （将内容排序然后放到列表当中）

# sorted(序列, reverse=Ture)  默认是False就是升序  True表示降序
print(f"列表对象的排序结果：{sorted(my_list, reverse=True)}")
print(f"元组对象的排序结果：{sorted(my_tuple, reverse=True)}")
print(f"字符串对象的排序结果：{sorted(my_str, reverse=True)}")
print(f"集合对象的排序结果：{sorted(my_set, reverse=True)}")
print(f"字典对象的排序结果：{sorted(my_dict, reverse=True)}")