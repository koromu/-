#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


//函数 - 子程序,通常被集成软件库



//必须引入头文件 可以使用头文件里的库函数
//1.库函数
//strlen, strcmp(比较两个字符串的大小), sprintf

//IO函数 
//字符串操作函数
//字符操作函数
//内存操作函数
//日期时间函数
//数字函数

//1.strcpy: char *(返回类型) strcpy (char * destination(目的地), const char * source);
//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "good nihao";
//
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);// arr1是目标 arr2是源头 所以打印的arr1就是arr2 good 你好
//	return 0;
//}

//2.memset(mem内存 set 设置) : void *(返回类型) memset (woid * ptr, int value, size_t num);
//把ptr的内容的前num个值设置成value

//案例
//int main()
//{
//	char arr1[] = "hello world";
//	memset(arr1 , 'x', 5);
//	printf("%s", arr1);
//	char arr2[] = "hello world";
//	memset(arr2 + 6, 'y', 3);		//可以使字符串产生便偏移
//	printf("%s", arr2);
//
//	return 0;
//}

//学习使用库函数
// MSDN
//www.cpulpuls.com(英文版)
//www.zh.cppreference.com(中文版)



//自定义函数:函数名 返回类型 返回值 参数

//基本组成
//返回类型 函数名(函数变量, ...)
//{
//	函数内容;
//}函数体,函数的实现



int get_max(int x, int y)
{
	//if (x < y)
	//{
	//	int m = y;
	//}
	//else
	//{
	//	int m = x;
	//}
	//return m
	return (x > y ? x : y);
}
//int main()
//{
//	int a = 0;
//	int b = 0; \
//		scanf("%d %d", &a, &b);
//	int m = get_max(a, b);		//接收返回值
//	printf("%d\n", m);
//
//}



//void Swap( int x, int y)
//{
//	//x, y是形式参数   
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//
//}  FW


void Swap(int* path_x, int* path_y)
{
	//这个时候path_x是a的地址 而*path_x就是这个地址的值也就是a
	//所以
	//int z = *path_x;	//初始化和赋值同时
	int z = 0;			//先初始化
	z = *path_x;		//后赋值z = a
	*path_x = *path_y;	//a = b
	*path_y = z;		//b = z = a
}
//远程操纵:真正改变地址对应的值



//实参传递给形参的时候, 形参是实参的一份临时拷贝
//对形参的修改不会影响实参

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int main()
//{
//
//	int a = 0;
//	int b = 0; \
//		scanf("%d %d", &a, &b);
// int c = Add(a, b);							//传值就行,不用穿地址
//	printf("交换前:a = %d,b = %d\n", a, b);
//	//a 和 b叫实参
//	/*Swap(a, b);*/
//	Swap(&a/*a的地址*/, &b/*b的地址*/);			//要传地址
//	printf("交换后:a = %d,b = %d\n", a, b);
//
//	return 0;
//
//}

//函数内部需要改变实参的值 就需要传地址.只进行运算得到返回值不需要

//一个工程中可以有多个.c文件 但只能有一个,main



//函数的参数

//实际参数
//(常量,变量,表达式,函数(需要有返回值))



 
//形式参数
//是指在函数括号里面的变量,因为形式参数 只要在调用函数的时候会实例化(占有内存) 
//形式参数当函数用完之后就销毁 
//形参实例化之后,实际上是实参的一份拷贝,不会影响实参


//传值调用 :不会改变实参,形参和实参分辨占用不同的内存块
//函数名字(a, b);


//传址调用 :把地址传过去,用指针接受,可能建立联系(指针变量和实参建立联系) ->在函数内部可以应用到main里的某些东西
//函数名字(&a, &b);



//判断一个数是不是素数
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断是否是素数
//		//是素数就打印
//		//用 2 ~ i -1的数字一个一个除以,都不能整除就是素数
//		int j = 0;
//		int flag = 1;
//		int count = 0;
//		for (j = 2; j <= j - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("有%d个素数", count);
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//int main()
//{
////如果是一个素数,那么就可以表示成 m = a * b
//	//那么a和b之中一定有一个小于等于m
//	//那么就不用比较从1 到 m -1 可以到1 到 sqrt(m) 开根号
//	int i = 0;
//	for (i = 100; i <= 200; i+=2)
//	//100 - 200之间 偶数不可能是素数那么直接就判断从101开始的奇数
//	{
//		//判断是否是素数
//		//是素数就打印
//		//用 2 ~ i -1的数字一个一个除以,都不能整除就是素数
//		int j = 0;
//		int flag = 1;
//		int count = 0;
//		for (j = 2; j <= sqrt(i); j++)
//			//sqrt的参数的类型是double 返回值也是double(比如输入是2,返回是2.0) 
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//
//		}
//		if (flag == 1)
//		{
//			printf("有%d个素数", count);
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

void judge_prime(int num)
{
	//是素数返回1
	//不是素数返回0
	int i = 0;

	int flag = 1;
	
	for (i = 2; i <= sqrt(num); i++)
	{
		//获得从2到开根号的数
		//用原数被这个除
		
		if (num % i == 0)
		{
			flag = 0;
			break;
		}
		continue;
	}
	if (flag == 1)
	{
		printf("这个数:%d是素数", num);
	}
	else
	{
		printf("这个数:%d不是素数", num);
	}

}

//return 0;直接退出函数


//请注意以下几点：
//
//scanf() 函数的返回值是成功读取的参数个数，并不是用户输入的值。因此，num 的赋值应该使用 scanf() 函数的返回值而不是直接将 input_num 赋值给 num。
//
//judge_prime() 函数接受的参数应该是整数类型，而不是 scanf() 函数的返回值。


//int main()
//{
//	int input_num = 0;
//	printf("请输入一个整数: ");
//	scanf("%d", &input_num);
//
//	judge_prime(input_num);
//
//	return 0;
//}




//写一个函数判断是不是一个素数
//函数的返回值是1 或者 0
//在主函数中判断返回值
//如果返回1就打印是素数
//否则返回0就打印不是素数

//函数中用 
// 在循环中 从2到目标数的开平方根 去把目标数除一下
//如果被整除 那就返回0return 0;		直接退出函数
//如果没有被整除 就返回1 return 1;	直接推出函数


//打印1000-2000年之间的闰年:
// 1.能被4整除，兵器不能被100整除
// 2.能被400整除
//int main()
//{
//	int  year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4) == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//
//			}
//
//		}
//		// if 和 else if 只能进一个
//		//如果想用两数都判断就是两个if
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int  year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是不是闰年 
//		//1.能被4整除，并且不能被100整除(可以用并且的符号&&,)
//		//2.能被400整除(这两个是只要满足一个就可以,所以是或者||)
//		if (((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)))
//		{
//			printf("%d", year);
//		}
//	}
//	return 0;
//}

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	return 0;
//}	//函数功能的单一
//
//int main()
//{
//	int  year;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


int binary_search(int arr[], int k, int sz)

//这里表面上用一个数组接收,实际上接受的是实参数组的首个参数的地址
//所以这个形参arr看上去是数组,本质上是指针(储存了实参arr的地址)
//每次调用其实都是用地址远程操纵实参!!!
{
	int left = 0;
	int right = sz - 1;//长度就是个数 不包括\0 所以是10 下标就-1

	while(left <= right)//等于的时候也循环进去,就可以判断到,直接返回
	{

		int mid = left + (right - left) / 2;
		if (k < mid)
		{
			right = mid - 1;
		}
		else if (k > mid)
		{
			left = mid + 1;
		}
		else
		{
			return mid;//返回下标目标值
		}
	}
	return -1;//找不到
}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了返回下标 
//	//找不到返回0(但是有可能下标是0,可能返回0 )
//	//所以找不到返回-1
//	int ret = binary_search(arr, k, sz);
//	//传参传数组名{实际上不会传一整个数组进去,否则浪费空间,所以传过去的是首个参数的地址}
//	if (ret == -1)
//	{
//		printf("没有找到");
//	}
//	else
//	{
//		printf("找到了下表是 :%d ", ret);
//	}
//}

//C99 中引入了bool类型 Ture真 False假


// 如果用 return false; 那么这个函数返回的类型是bool
// bool是这个类型 在函数名之前
//布尔类型是1个byte



//写一个函数，每调用一次这个函数，num 的值就加1


//实现函数
void Add(int* path)
{
	(*path)++;//直接远程改变,所以是功能性的,返回值也不用了
}

//int main()
//{
//	int num = 0;//C语言的规则,如果为初始化那么产生的是一个随机数
//				//初始化后可以保证开始为0并在Add函数中自增
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//	Add(&num);
//	printf("%d\n", num);//3
//	return 0;
//}



//局部变量不会自动被格式化
//代码尽量不要用全局变量