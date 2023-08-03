from typing import Union        # 要用Union就要先导包

my_list: list[Union[int, str]] = [1, 2, "nihao", "good"]


def func(data: Union[int, str]) -> Union[int, str]:
    return data


data1 =func()              # 竖线是或的意思
