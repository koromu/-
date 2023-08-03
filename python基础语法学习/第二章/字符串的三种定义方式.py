"""
单引号定义法
双引号定义发
三引号定义法
"""
# 使用单引号进行包围
name = '你好'
print(type(name))
name = "你好"
print(type(name))
name = """
你
好"""
print(type(name))


# 在字符串内 包含双引号
name = '"你好”'
print(name)
# 在字符串内 包含单引号
name = "'你好'"
print(name)
# 使用转义字符 \ 解除引号的效用
name = "\"你好\""
print(name)
name = '\'你好\''
print(name)
