# 待处理数据集 严谨称之为 “序列类型” 其内容可以一个个依次取出的类型 字符串 列表 元组
# 现在就学了字符串类型用range语句 可以生成一个简单的数字序列
# range(num) 获取一个从0开始，到num结束的序列 不含num本身
# range(num1, num2) 获取一个从num1 开始到num2 结束的数字序列 不包含num2本身
# range(num1, num2, step) 从num1 到num2 不包含num2 step是步长 默认是1
# for x in range(10):
#     print(x)

# for x in range(5, 10):
#     print(x)
#
# for x in range(5, 10, 2):
#     print(x)
# # 不给步长默认是1 给了步长就是2  也就是5 7 9
# for x in range(10):
#     print('送玫瑰花')

count = 0
num = 114514
for x in range(1, num):
    if x % 2 == 0:
        count += 1
print(f"1到100(不含100本身)范文内，有{count}个偶数")

# for 临时变量是在for内部可以访问的变量