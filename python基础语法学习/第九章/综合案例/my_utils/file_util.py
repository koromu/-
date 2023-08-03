def print_file_info(file_name):
    """
    接受文件的路径，打印文件的全部内容
    如果文件不存在则捕获异常，就会输出提示信息（关闭文件对象）
    """
    fr = None
    try:
        fr = open(f"{file_name}", "r", encoding="UTF-8")        # 打开文件，接下来读取
        content = fr.read()     # 读全部内容，用变量接受全部内容
        print(content)      # 打印全部内容
    except FileNotFoundError as f_none:     # 检测一个错误 但实际可以用Exception 接受全部错误
        print(f"文件不存在已拦截，详细内容{f_none}")
    finally:        # 规范的关闭文件
        if fr:           # 如果有任何内容是True, 无内容就是False
            fr.close()
            print("已关闭文件对象")


def append_to_file(file_name, data):
    """
    接受 文件路径 和 要传入的数据
    将数据追加写入文件中
    """
    fw = open(f"{file_name}", "a", encoding="UTF-8")        # a模式才是追加
    fw.write(data)
    fw.write("\n")      # 要成写作加换行符的喜欢
    fw.close()

# if __name__ == '__main__':
#     print_file_info("D:/bill.txt")


if __name__ == '__main__':
    append_to_file("D:/bill.txt", "python")


