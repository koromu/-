from pymysql import Connection

conn = Connection(      # connection(主机，端口，账户，密码)
    host='localhost',
    port=3306,
    user='root',
    password='24-314QIAn-qian.',
    autocommit=True     # 自动提交
)

print(conn.get_server_info())

cursor = conn.cursor()      # 从 '链接对象' 中 获取到 '游标对象'

conn.select_db("world")

# cursor.execute("create table test_pymysql(id int);")        # pycharm中可以不用写分号哦
cursor.execute("insert into student values(1, 'nihao', 20, '男')")

# 查询性质的sql语句
# fetchall()
# cursor.execute("select * from student")     # 写去SQL语句
#
# result = cursor.fetchall()
# for r in result:
#     print(r)

conn.close()

# commit成员方法确认 基础语法：链接对象.commit()  产生更改需要需要确认（事务）一下，以保护数据安全
# 也可以直接在构件链接对象的时候 autocommit = True
