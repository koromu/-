//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////找到结构体的第一个位置,把地址变成0x00000000, 然后找后面成员的其实地址, 也就是偏移量,强行转化成无符号整型
//#define OFFSETOF(type, number_name)  (size_t)(&(((type*)0x00000000) -> number_name))
//
//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//
//int main()
//{
//	struct S s = {0};
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//
//	return 0;
//}