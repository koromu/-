#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>
#include <errno.h>
#include <ctype.h>

//打开文件,使我们的东西都储存起来,持久化的保存在电脑上
//1.程序文件
//2.数据文件

//文件名:包含3部分：文件路径+文件名主干+文件后缀

//数据文件的打开然后才有读和写的操作,最后还需要关闭文件

//文件指针
// 2013版本的封装
//struct _iobuf 
//{
//	char* _ptr;
//	int   _cnt;
//	char* _base;
//	int   _flag;
//	int   _file;
//	int   _charbuf;
//	int   _bufsiz;
//	char* _tmpfname;
//};
//typedef struct _iobuf FILE;

//stdio.h中的代码

//把硬盘中的文件打开, 会在"内存"中创建一个文件信息区(是一个结构体, 类型是FILE),这个内存的其实地址的类型是 FILE*
//使用fopen函数打开文件, 然后返回一个FILE*(类型+*等于指针),我们用一个指针FILE* pf接收地址, 这个指针即是"文件指针"
// 定义pf是一个指向FILE类型数据的指针变量。可以使pf指向某个文件的文件信息区(是一个结构体变量)
// 通过该文件信息区中的信息就能够访问该文件
// 也就是说，通过文件指针变量能够找到与它关联的文件

//打开函数fopen
//基础语法:FILE* fopen(const char* filename, const char* mode);
//												文件的打开模式,打开的模式不一样,作用不一样



//关闭文件fclose


//int main()
//{	//绝对路径:指定位置
//	//相对路径:就在本程序的文件夹中寻找该文件
//	FILE* pf = fopen("E:\\test.txt.txt", "r");//以读的模式打开文件
//	//文件打开有可能失败,空指针
//	// 
//	//判断
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//
//	//关闭文件
//	//int fclose ( FILE * stream );
//	fclose(pf);//和free很像,所以加一个赋值为空
//	pf = NULL;
//
//	return 0;
//}

//文件的顺序读写
//int main()
//{
//	FILE* pf = fopen("E:\\test.txt.txt", "w");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	} 
//	//写文件:fputc:int fputc(int(因为是ASCII所以是整型) character, FILE* stream(地址))
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		fputc('a'+i, pf);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("E:\\test.txt.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件:fgetc:int fget(FILE* stream(地址)),所以返回的值才是字符a
//	//int ch = fgetc(pf);//一个一个字符的去读
//	//printf("%c\n", ch);
//	int ch;
//	while ((ch = fgetc(pf)) != EOF)//读错了返回EOF
//	{
//		printf("%c ", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//写一行字符串
//int main()
//{
//	FILE* pf = fopen("E:\\test.txt.txt", "w");//会直接销毁,如果不想销毁就用a:追加
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
////写一行:fputs:int fputs(const char*str , FILE* stream)
//	const char ch[] = "abcdefg";
//	fputs(ch, pf);
//	fputs(ch, pf);
//	fclose(pf);
//	pf = NULL;
//读一行数据//
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("E:\\test.txt.txt", "r");//会直接销毁,如果不想销毁就用a:追加
//
//	if (pf == NULL)
//	{
//		//printf("%s\n", strerror(errno));//和下面的功能相同
//		perror("fopen");//遇到错误就会"我们输入的字符串":错误信息.然后再打印
//		return 1;
//	}
//	//读一行:fgets:int fgets(char* str,int num(要读取的字符数量),  FILE* stream)
//	char arr[20];
//	fgets(arr, 5, pf);
//	fclose(pf);
//	printf("%s\n", arr);//读出1234'\0',最多读20,和数组的大小一样
//	pf = NULL;
//	return 0;
//}

//struct S {
//	char name[20];
//	int age;
//	float score;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 50.5f };
//	struct S tmp = { 0 };
//	char arr[100];
//	sprintf(arr, "%s%d%f", s.name, &(s.age), &(s.score));
//
//	//printf("%s", arr);
//	sscanf(arr, "%s %d %f", tmp.name, &(tmp.age), &(s.score));
//	return 0;
//}

