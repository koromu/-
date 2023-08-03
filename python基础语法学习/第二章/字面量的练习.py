name = "传智播客"
stock_price = 19.99
stock_code = "003032"
stock_price_daily_growth_factor = 1.2
growth_days = 7
# 最后有个单词叫做 finally
stock_end_price = stock_price * stock_price_daily_growth_factor ** growth_days
# print(stock_end_price)
print(f"公司：{name}, 股票代码：{stock_code} , 当前股价：{stock_price}")
print("每日增长系数是：%.1f," % stock_price_daily_growth_factor, "经过%d天的增长后" % growth_days, "股票达到了：%.2f" % stock_end_price)
# 注意格式 %n.mf %n.md %n.ms
print("每日增长系数是：%.1f, 经过%d天的增长后，股价达到了：%.2f" % (stock_price_daily_growth_factor, growth_days, stock_end_price))