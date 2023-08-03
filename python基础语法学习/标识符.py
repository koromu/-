# 标识符只允许出现 英文 下划线 数字（数字不能用在开头） 中文（不太推荐）
# 大小写铭感
# 不可使用关键字 有自己功能的东西 其中有三个有大写，其他都是没有大写的，只要大小写不一样就可以

# 内容限定
# 错误的代码示范：1_name = "张三"
# 错误的代码示范：name_! = "张三"
name = "jack"
_name = "jack"

# 大小写敏感
Name = "你"
name = "我"
print(Name)
print(name)

# 不能使用关键词
# 错误的示范：class = 1
# 错误的示范：print(class)
Class = 1
print(Class)

# 规范 是建议
'''
a = "张三"(×)   name = "张三"（√）
b = 11（×）   age = 11（√）     见名见意

firstname(×)  first_name(√)  下划线命名

英文字母全大小写
'''
