//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <iostream>
//int main() {
//    FILE* fp;
//    char ch, fname[10];
//
//    printf("�������ļ���:");
//    gets_s(fname);
//
//    if ((fp = fopen(fname, "w")) == NULL) {
//        printf("���ܴ��ļ���\n");
//        exit(0);
//    }
//
//    while ((ch = getchar()) != '!') {
//        fputc(ch, fp);
//    }
//
//    fclose(fp);
//    return 0;
//}
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main()
//{
//	FILE* fp; int count = 0;
//	char ch, fname[10];
//	printf("�������ļ���:");
//	cin >> fname;;
//	if ((fp = fopen(fname, "r")) == NULL)
//	{
//		printf("���ܴ��ļ���\n"); exit(0);
//	}
//	printf("�ļ��е�����Ϊ��\n");
//	while (ch != '!')
//	{
//		ch = fgetc(fp);
//		putchar(ch);
//		if (ch >= '0' && ch <= '9')
//			count++;
//	}
//	printf("\n�����ַ��ĸ���Ϊ��%d\n", count);
//	fclose(fp);
//	return 0;
//}