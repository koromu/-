import my_utils.str_util
from my_utils import file_util

print(my_utils.str_util.str_reverse("0123456789"))

print(my_utils.str_util.substr_heima("0123456789", 1, 7))

file_util.append_to_file("D:/bill.txt", "good")
file_util.print_file_info("D:/bill.txt")
