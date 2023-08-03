# 通过占位的形式，完成拼接 %S是占位

name = "你好"
message = "你好：%s" % name
print(message)

# 通过占位的形式，完成数字和字符串的拼接
class_num = 57
avg_salary = 16781
message = "Python大数据学科，北京%s期，毕业平均工资；%s" %(class_num, avg_salary)
print(message)

#常用的三个
# %s将内容转换成字符串，放入占位位置
# %d将内容转化成整数
# %f将内容转化成浮点型

name = "传智播客"
setup_year = 2006
stock_price = 19.99
message = "%s,成立于：%d, 我今天的股价是：%f" % (name, setup_year, stock_price)
print(message)