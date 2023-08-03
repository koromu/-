from SQL入门和实战.file_define import TextFileReader, JsonFileReader
from SQL入门和实战.data_define import Record
from pymysql import Connection

text_file_reader = TextFileReader("D:/2011年1月销售数据.txt")
text_json_reader = JsonFileReader("D:/2011年2月销售数据JSON.txt")

jan_data: list[Record] = text_file_reader.read_data()
feb_data: list[Record] = text_json_reader.read_data()

# 将两个月份的数据合并起来存储
all_data: list[Record] = jan_data + feb_data

# 构建MySql链接对象
conn = Connection(
    host="localhost",
    port=3306,
    user="root",
    password="24-314QIAn-qian.",
    autocommit=True
)
# 获得游标对象
cursor = conn.cursor()
# 选择数据库
conn.select_db("py_sql")
# 组织Sql语句
for record in all_data:
    sql = f"insert into orders(order_data, order_id, money, province) " \
          f"values('{record.date}', '{record.order_id}', {record.money}, '{record.province}')"
    cursor.execute(sql)

# 执行SQL语句
conn.close()
# 关闭MySQL链接对象