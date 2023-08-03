# JSON是一种一两集的数据交互格式
# 本质是一个带有特定格式的字符串
# 作为中转的数据格式 在不同语言之间传递 （翻译官） 通用交流语言
# json  有点像Python的字典 {key:value, key:value}
# 也可以是[{key:value, key:value}, {key:value, key:value}, {key:value, key:value}]
# json 中列表内部只能是字典（python）
# 就可以无缝转换
# 但转换的json就是json中的字符串

# 语法:json.(data, [ensure_ascii=···])

# 导入json模块
import json

# 准备符合格式json格式
data = [{"name": "张大山", "age": 11}, {"name": "good", "age": 15}, {"name": "nihao", "age": 66}]


# 1, dumps(data)
json_str = json.dumps(data, ensure_ascii=False)
# 如果是中文就要有ensure_ascii=False  意思就是不用ASCII码转换将内容直接输出出去
# 如果是True就转成unicode
print(type(json_str))
print(json_str)

d = {"name": "张大山", "addr": "中国"}
json_str = json.dumps(d, ensure_ascii=False)
print(type(json_str))
print(json_str)

# 2, loads(json_data)就是转化回去
s = '[{"name": "张大山", "age": 11}, {"name": "good", "age": 15}, {"name": "nihao", "age": 66}]'

# 注意单引号 json就是转字符串
l = json.loads(s)
print(type(l))
print(l)

s = '{"name": "张大山", "addr": "中国"}'
d = json.loads(s)
print(type(d))
print(d)


# 别人给我们别的语言的我们就用跟这个转 给别的语言的发代码，就把我们的转化给他们