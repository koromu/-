//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include <iostream>
//int main() {
//    FILE* fp;
//    char ch, fname[10];
//
//    printf("请输入文件名:");
//    gets_s(fname);
//
//    if ((fp = fopen(fname, "w")) == NULL) {
//        printf("不能打开文件！\n");
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
//	printf("请输入文件名:");
//	cin >> fname;;
//	if ((fp = fopen(fname, "r")) == NULL)
//	{
//		printf("不能打开文件！\n"); exit(0);
//	}
//	printf("文件中的内容为：\n");
//	while (ch != '!')
//	{
//		ch = fgetc(fp);
//		putchar(ch);
//		if (ch >= '0' && ch <= '9')
//			count++;
//	}
//	printf("\n数字字符的个数为：%d\n", count);
//	fclose(fp);
//	return 0;
//}