# 第三方的包 先导入
from pyecharts.charts import Line       # 导入包
from pyecharts.options import TitleOpts, LegendOpts, ToolboxOpts, VisualMapOpts
# 得到折现对象
line1 = Line()
# 就是两个坐标轴 和 点。点一连就是线

# 给x轴的数据
line1.add_xaxis(["中国", "美国", "俄罗斯"])
# 给y轴的数据
line1.add_yaxis("GDP", [30, 20, 10])

line1.set_global_opts(
    title_opts=TitleOpts(title="GDP展示", pos_left="center", pos_bottom="1%"),
    legend_opts=LegendOpts(is_show=True),
    toolbox_opts=ToolboxOpts(is_show=True),
    visualmap_opts=VisualMapOpts(is_show=True)
)       # 这些全是全局配置项 需要在官网找到文件 一个一个啃(
# 全局配置 set_global_opts方法

# 通过render方法，将代码生成图像
line1.render()      # 生成一个文件 可以在网页看到