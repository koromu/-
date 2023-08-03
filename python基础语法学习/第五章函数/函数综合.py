# money = 5000000
# name = input("请输入你的名字，以打开菜单")
#
#
# def menu():
#     print("------------主菜单------------\n查询余额[输入1]\n存款[输入2]\n取款[输入3]\n退出[输入4]")
#     severe = int(input("请输入你需要的服务[1~4]"))
#     if severe == 1:
#         check_money()
#     elif severe == 2:
#         save_money()
#     elif severe == 3:
#         take_money()
#     elif severe == 4:
#
#
#
# def check_money():
#     print("------------查询余额------------")
#     print(f"{name}您好，您的账户余额是：{money}元")
#
#
# def take_money():
#     print("------------取款------------")
#     new_money = int(input("请输入取出金额"))
#     print(f"取出{new_money}元，账户余额{money - new_money}")
#
#
# def save_money():
#     print("------------取款------------")
#     new_money = int(input("请输入存入金额"))
#     print(f"存入{new_money}元，账户余额{money + new_money}")


# menu()


# 定义全局变量 name 和 money
money = 5000000
name = None
# 输入姓名
name = input("请输入你的姓名：")


# 定义查询函数
def query(show_header):
    if show_header:
        print("------------查询余额------------")
    print(f"{name}您好，您的账户余额是：{money}元")


# 定义存款函数
def saving(num):
    global money
    money += num
    print("------------存款------------")
    print(f"{name},你好，你存款{num}元成功")

    # 调用query函数查询余额
    query(False)


# 定义取款函数
def get_money(num):
    global money
    money -= num
    print("------------取款------------")
    print(f"{name},你好，你取款{num}元成功")

    query(False)


def main_menu():
    print("------------主菜单------------")
    print(f"{name},你好，欢迎来到银行ATM。请选择操作：[1~4]")
    print("查询余额\t[输入1]")
    print("存款\t\t[输入2]")
    print("取款\t\t[输入3]")
    print("退出\t\t[输入4]")
    return input("请输入你的选择:")


while True:
    keyboard_input = main_menu()
    if keyboard_input == "1":
        query(True)  # 输入标头
        continue   # 查询完后 通过continue 进行下一次循环
    elif keyboard_input == "2":
        num = int(input("请输入你需要存的金额："))
        saving(num)
        continue
    elif keyboard_input == "3":
        num = int(input("请输入你需要取出的金额："))
        get_money(num)
        continue
    else:
        print("程序已退出")  # 只要不是输入123就会退出 要不就是输入4 或者输错 正难则反
        break
