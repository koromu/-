def str_reverse(s):
    """
    s 是填入的字符串
    函数的功能是反转字符串
    """
    new_str = s[::-1]
    return new_str


def substr(s, x, y):
    """
    根据下标，x , y 对字符串进行切片
    x 是开始下标
    y 是结束下标
    """
    new_str = s[x:y]
    return new_str


def str_reverse_heima(s):
    return s[::-1]


def substr_heima(s, x, y):
    return s[x:y]


if __name__ == '__main__':
    print(substr_heima("0123456789", 2, 5))