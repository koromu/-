# 把现实世界的事物描述成 属性和方法
# 私有成员方法
# 私有成员变量
class Phone:
    __current_voltage = 0.5

    def __keep_single_core(self):       # 私有成员不管是变量还是方法都无法使用
        print("让CPU以单核模式运行")

    def call_by_5g(self):
        if self.__current_voltage >= 1:
            print("5g通话已开启")
        else:
            self.__keep_single_core()
            print("电量不足,无法进行5g通话，并已设置单核运行进行省电")
# 无法被类对象使用，但是可以被其它的成员使用


phone = Phone()
phone.call_by_5g()