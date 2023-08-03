"""和文件相关的类定义"""
import json

from SQL入门和实战.data_define import Record


class FileReader:                                   # 顶层设计

    def read_data(self) -> list[Record]:            # 都得完成这个方法
        """
        读取数据，督导的每一条数据都转换为Record,将他们都封装到list内返回就可
        """
        pass


class TextFileReader(FileReader):

    def __init__(self, path):
        self.path = path

# 实现父类的方法
    def read_data(self) -> list[Record]:

        f = open(f"{self.path}", "r", encoding="UTF-8")
        record_list: list[Record] = []
        for line in f.readlines():
            line = line[:-1]
            line = line.strip( )
            data_list = line.split(",")                          # type: list # split 就是分隔
            record = Record(data_list[0], data_list[1], int(data_list[2]), data_list[3])
            record_list.append(record)
        f.close()
        return record_list      # 封装内容为列表


class JsonFileReader(FileReader):

    def __init__(self, path):
        self.path = path

    def read_data(self) -> list[Record]:

        f = open(f"{self.path}", "r", encoding="UTF-8")
        record_list: list[Record] = []
        for line in f.readlines():
            data_dict = json.loads(line)
            record = Record(data_dict["date"], data_dict["order_id"], int(data_dict["money"]), data_dict["province"])
            record_list.append(record)
        f.close()
        return record_list


if __name__ == '__main__':
    text_file_reader = TextFileReader("D:/2011年1月销售数据.txt")
    text_json_reader = JsonFileReader("D:/2011年2月销售数据JSON.txt")
    list_text = text_file_reader.read_data()
    list_json = text_json_reader.read_data()

    for line in list_text:
        print(line)

    for line in list_json:
        print(line)