print(type("你好"))
print(type(666))
print(type(11.11))
string_tupe = type("你好") #前面的是个名字
int_type = type(666)
float_type = type(11.11)
print(string_tupe)
print(int_type)
print(float_type)


name = "你好"
name_tupe = type(name)#这个是因为type有返回值，是有结果的，可以用变量去接受结果
print(name_tupe)
#找到了name这个变得存储的内容的类型，就是字符串
#变量无类型 数据有类型