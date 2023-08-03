# 函数是组织好的可重复使用，用来实现功能的一段代码段
# name = "nihao"
# length = len(name)
# print(length)
# len()是python内置的函数 统计长度这一功能的代码段

# 不用len() 统计 str 的长度
str1 = "nihao"
str2 = "ne_gui"
str3 = "haoahohao"


# count = 0
# for i in str1:
#     count += 1
# print(f"字符串{str1}的长度是{count}")
#
# count = 0
# # noinspection PyRedeclaration
# for i in str1:
#     count += 1
# print(f"字符串{str2}的长度是{count}")
#
# count = 0
# # noinspection PyRedeclaration
# for i in str1:
#     count += 1
# print(f"字符串{str3}的长度是{count}")


# 可以使用函数优化过程
def my_len(date):
    nihao = 0
    for i in date:
        nihao += 1
    print(f"字符串{date}的长度是{nihao}")


print(my_len(str1))

print(my_len(str2))

print(my_len(str3))
