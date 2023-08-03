def add(x: int, y: int) -> int:     # 小箭头 ->返回值的类型注解
    return x + y


def func(data: list) -> list:       # 建议性的，不是强制性的
    return data

print(func(1))                      # 还是能返回 ‘1’

