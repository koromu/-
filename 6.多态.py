class Animal:
    def speak(self):
        pass


class Dog(Animal):
    def speak(self):
        print("狗")


class Cat(Animal):
    def speak(self):
        print("猫")


# 多态常作用在继承关系上
# 同一行为（make_noise）,不同的对象（dog|cat）不同状态的结果
def make_noise(animal: Animal):
    animal.speak()

# make_noise(Dog)

# 空实现 父类来确定有哪些方法 具体的方法实现 由子类自行决定
# 抽象类（接口） 包含抽象方法的类就是抽象类 多用于做顶层设计 对子类的一种软性约束


class AC:                   # 标准顶层实际
    def cool_wind(self):
        """
        制冷
        """
        pass

    def hot_wind(self):
        """
        制热
        """
        pass

    def swing_l_r(self):
        """
        左右摆风
        """
        pass


class MideaAc(AC):
    def cool_wind(self):
        print("美的空调制冷")

    def hot_wind(self):
        print("美的空调制热")

    def swing_l_r(self):
        print("美的空调左右摆风")


class GereAc(AC):
    def cool_wind(self):
        print("格力空调制冷")

    def hot_wind(self):
        print("格力空调制热")

    def swing_l_r(self):
        print("格力空调左右摆风")


def make_cool(ac: AC):
    ac.cool_wind()


midea_ac = MideaAc()
gere_ac = GereAc()


make_cool(midea_ac)
make_cool(gere_ac)