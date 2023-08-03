class Phone:
    IMEI = None
    producer = "nihao"

    def call_by_4g(self):
        print("4G通话")


class Phone2022(Phone):  # 将老的类全部继承  老的类叫做父类
    face_id = True

    def call_by_5g(self):
        print("5g通话")


# 单继承语法  class 类名（父类名）：
#               新成员变量
#
#               新成员方法
phone = Phone2022

print(phone.producer)


# phone.call_by_4g()
# phone.call_by_5g()

# 多继承     class 类名（父类名, 父类名, 父类名, ...）：
#               新成员变量
#
#               新成员方法


class NFCReader:
    nfc_type = "第五代"
    producer = "good"

    def read_card(self):
        print("开始读卡")

    def write_card(self):
        print("NDC写卡")


class RemoteControl:
    rc_type = "红外遥控"

    def control(self):
        print("红外遥控开启了")


class MyPhone(RemoteControl, Phone2022, NFCReader):
    pass


phone = MyPhone()
print(MyPhone.producer)


# 如果父类中有一样的成员变量 那么继承的是从左向右 先继承的优先级高于后继承

# 复写 可以在子类中修改（重新定义）父类的成员就是复写
class Phone2:
    IMEI = None
    producer = "生产商是python"

    def call_by_5g(self):
        print("正在使用5G通话")


class MyPhone1(Phone2):      # 类名称遵守驼峰命名 首字母大写不用下划线
    producer = "生产商是Q"

    def call_by_5g(self):
        print("开启cpu单核模式，确保通话时省电")
        super().call_by_5g()                       # print("使用5G网路通话") '老的方法不需要再在子类中实现一遍，直接调用父类的成员方法'
        print(f"父类的厂商是{super().producer}")


phone1 = MyPhone1()
MyPhone1.call_by_5g(phone1)
print(phone1.producer)
# 1.通过父类名调用 父类名.成员变量|成员方法()                  这种方法在子类中调用就要小指针self
# 2.super().成员变量|成员方法(self)     super()相当于父类    这种方法不需要小指针self
