from SQL入门和实战.file_define import TextFileReader, JsonFileReader
from SQL入门和实战.data_define import Record
from pyecharts.charts import Bar
from pyecharts.options import *
from pyecharts.globals import ThemeType     # 颜色

text_file_reader = TextFileReader("D:/2011年1月销售数据.txt")
text_json_reader = JsonFileReader("D:/2011年2月销售数据JSON.txt")

jan_data: list[Record] = text_file_reader.read_data()
feb_data: list[Record] = text_json_reader.read_data()

# 将两个月份的数据合并起来存储
all_data: list[Record] = jan_data + feb_data
print(f"all_data的类型是：{type(all_data)}")
# 使用字典记录
# {"2011-01-01": 1645, "2011-01-02": 100, "2011-01-03": 500}  需要用循环 字典的key是不重复的
data_dict = {}      # key是日期 value 是总金额
for record in all_data:
    # print(record.date)
    if record.date in data_dict.keys():  # 当前日期是有记录的 ，做累加
        data_dict[record.date] += record.money
    else:
        data_dict[record.date] = record.money       # data_dict[record.date]就是这个key

print(data_dict)

bar = Bar(init_opts=InitOpts(theme=ThemeType.LIGHT))

bar.add_xaxis(list(data_dict.keys()))                   # 取到全部的key
bar.add_yaxis("销售额", list(data_dict.values()), label_opts=LabelOpts(is_show=False))          # 取到全部的value
bar.set_global_opts(
    title_opts=TitleOpts(title="每日销售额"      # 类对象的构建)
    ))

bar.render("每月销售额柱状图.html")