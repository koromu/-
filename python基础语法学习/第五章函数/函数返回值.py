# 返回值就是函数完成事情后,返回给函数调用者的结果
# def 函数名(传入参数):
#     函数体
#     return 返回值

def add(a, b):
    result = a + b
    return result
    # 返回结果后还想输出一句话,函数体遇到return就会结束了,所以写在return后的代码不会执行


r = add(114, 145)
print(r)