#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//数组的创建

//数组:相同类型元素的集合
//数组的元素类型 数组名字 [常量表达式]
//type_t arr_name[const_t]

//int main()
//{
//	int arr[10];
//	double datal[20];
//	double data2[15 + 5];
//	char ch[5];
//	//[括号里面]
//	//C99标准之前,数组的大小必须是常量或者常量表达式
//	//c99之后,数组的大小可以是变量,为了支持变长(元素大小决定变量长度)数组
//	int n = 10;
//	scanf("%d", &n);
//	int arr2[n];//这种数组不能初始化--在创建数组是给一些合理的值
//
//
//	return 0;
//
//}


//int main()
//{
//	int arr[10] = { 1, 2, 3 };//不完全初始化,其它的值默认为0,可通过调试查看
//	char ch1[10] = { 'a', 'b', 'c' };//同上	这个实质是		abc
//	char ch2[10] = "abc";//也默认是0		字符串的实质	"abc\0"
//	
//	int arr3[] = { 1, 2, 3 }; //这个是不给定数字,根据元素个数给定长度
//	char ch3[] = { 'a', 'b', 'c' }; //三个元素
//	char ch4[] = "abc";  //四个元素
//	return 0;
//}


//一维数组 
//[]: 下标引用操作符

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	//在栈区里面找到了'一个连续空间'存了10个元素
//	//这是元素有个名字叫:数组名
//	//
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//
//}

//一维数组在内存中的储存

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	//在栈区里面找到了'一个连续空间'存了10个元素
//	//这是元素有个名字叫:数组名
//	//
//	//printf("%d\n", arr[4]);
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", arr[i]);
//	//}
//
//	for (i = sz - 1; i >= 0; i--)
//	{
//		int* p = &arr[i];// 实际上不用每个都占用内存,直接调用
//		//打印数组的每个元素
//		printf("取元素arr[%d] = %p\n", i,p);//读作:取这个地址上的值
//											//如果是p读作:取地址
//
//		//printf("取元素arr[%d] = %p\n", i, &arr[i]);//读作&取地址
//		//得到结果每个地址相差4个字节  ->一维数组是连续存放的
//		//随着数组下标的增长,元素的地址也是有规律的增长.
//	}
//	return 0;
//
//}


//int main() {
//    int arr[] = { 1, 2, 3, 4, 5 };
//    int* ptr;
//
//    ptr = &arr[1];
//
//    printf("ptr 指向的地址：%p\n", ptr);
//    printf("ptr 指向的值：%d\n", *ptr);
//
//    return 0;
//}



//二维数组

//二维数组的创建

//基础语法:	数组类型 数组名[行数][列数]

//存储
//1 2 3 4 
//2 3 4 5 
//3 4 5 6

int main()
{

	//基础的创建
	int arr1[3][4] = 
	{	1, 2, 3, 4,
		2, 3, 4, 5,
		3, 4, 5, 6	};//如果每填满,就一次补满
	//行可以省略,列不可以省略 
	int arr3[3][4]{ {1, 2}, {2, 3}, {3, 4} };
	//监视一下看到内容的组成
	char arr2[5][10];

	return 0;
}