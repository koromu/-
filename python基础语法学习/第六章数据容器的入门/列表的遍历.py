# 将数据容器可以储存多个元素 将容器内的元素依次取出进行处理的行为，称之为迭代或者遍历
# 定一个变量表示下标，从0开始 循环条件下标值《列表的元素数量
def list_while_func():

    my_list = ["nihao", "good", "Python"]

    index = 0
    while index < len(my_list):
        element = my_list[index]  # 用index的值作为下标索引到元素
        print(f"列表的元素：{element}")
        index += 1


list_while_func()


def my_for_list_func():
    my_list = [1, 2, 3, 4, 5]
    for i in my_list:
        print(f"列表的元素有：{i}")


my_for_list_func()

my_list = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]


def ou_shu_while():
    index = 0
    new_list = []
    while index < len(my_list):
        element = my_list[index]
        if element % 2 == 0:
            new_list.append(element)
        index += 1
    print(f"通过while循环，从列表：{my_list}中取出偶数，组成新列表：{new_list}")


ou_shu_while()


def ou_shu_for():
    new_for_list = []
    for element in my_list:
        if element % 2 == 0:
            new_for_list.append(element)
    print(f"通过for循环，从列表：{my_list},中取出偶数，组成新列表：{new_for_list}")


ou_shu_for()