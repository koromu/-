from pymysql import Connection
import json

conn = Connection(
    host="localhost",
    user="root",
    port=3306,
    password="24-314QIAn-qian."
)

cursor = conn.cursor()
conn.select_db("py_sql")
cursor.execute("select * from orders")
data_tuple = cursor.fetchall()


f = open("D:/2011年1月和2月销售清单json.txt", "w", encoding="UTF-8")
data_dict = {}
for line_tuple in data_tuple:
    line_list = list(line_tuple)
    my_list = [line_list]
    json_data = json.loads(str(my_list))
    print(json_data)
    # f.write(json_data)
    # f.write("\n")

f.close()

