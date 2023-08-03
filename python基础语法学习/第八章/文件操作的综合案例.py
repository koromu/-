# r = open("D:/bill.txt", "r", encoding="UTF-8")
# w = open("D:/bill.txt.bak", "w", encoding="UTF-8")
# for line in r:
#     words = line.strip()  # 先把换行去掉
#     word = words.split("，")      # 再分隔
#     if word[4] == "测试":
#         continue
#     w.write(line)
#     w.write("\n")
# # 把一行拿出来 去掉前后的换行符和空格， 判断第五个是不是测试 如果是就continue进入下一个循环 如果是就写出
#
# r.close()
# w.close()


fr = open("D:/bill.txt", "r", encoding="UTF-8")
fw = open("D:/bill.txt.bak", "w", encoding="UTF-8")

for line in fr:
    words = line.strip()
    if words.split("，")[4] == "测试":
        continue
    fw.write(words)
    fw.write("\n")


fw.close()
fr.close()