//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
////�ҵ��ṹ��ĵ�һ��λ��,�ѵ�ַ���0x00000000, Ȼ���Һ����Ա����ʵ��ַ, Ҳ����ƫ����,ǿ��ת�����޷�������
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