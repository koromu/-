#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//.h头文件(函数的声明, 类型的声明, 拖文件的包含)
//.c源文件(函数实现)


//指针
//1.	内存会分为一个个的内存单元(一个内存单元的大小是:1byte)
//	每个内存单元都有一个编号
//	32位电脑
//	-------- 是 地址线
//	1/0
//	32根
//	地址线
//	0000000000000000000000000000000
//	0000000000000000000000000000001
//	.......
//	1111111111111111111111111111111
//	总共2^32个地址序列 可以管理	4294967296 byte
								//4194304 kb
								//4096MB
								//4GB
// int c;//4 byte = 32 bit 32个内存定制有点浪费

//int main()
//{
//	int a = 10;//向内存申请4个字节,储存10
//	//&a; //区地址操作符
//	//printf("%p\n", &a);
//	int* p = &a;
//		// p就是(存放地址的变量) 指针变量  就是用来存放地址的
//	//char ch = 'w';
//	//char* pc = &ch;
//	*p = 20;//解应用操作符,意思就是筒骨P中存放的地址,找到p指向的对象,*p就是p指向的对象
//	printf("%d\n", a);//用地址找到对象,进行操作
//	return 0;
//}
//	10 的 16进制  0x 00 00 00 0a   0123456789abcdef


//内存单元有编号
//编号->地址->地址也被称为指针

//int a = 10;
//int* p = &a;//int* 是个类型   *说明P是指针变量 int 说明P 指向的对象是int类型的

//int main()
//{
//	printf("%zu\n", sizeof(char*));		//不管什么类型的指针梦都是指针变量
//	printf("%zu\n", sizeof(short*));		//指针变量是用来存放地址的
//	printf("%zu\n", sizeof(int*));		//指针变量的大小取决于一个地址存放的时候需要多大的空间
//	printf("%zu\n", sizeof(float*));		//32位机器上的地址:32bit位 - 4 byte 4个字节 
//	printf("%zu\n", sizeof(double*));	//64位电脑上的地址:64bit位 - 8 byte 8个字节
//}
// %zu 返回sizeof的


