#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
//if语句中.0是假,非0是真

//switch中default可以在任意位置,不会应为在case前就先判断

//case后的表达式,只能是整形表达式:char-也属于整型,因为字符存储是,存储的是ASCII值
//switch()括号中只能是整型

//void Swap(int* px, int* py)
//{
//	int tmp = *px;//把px和py互换
//	*px = *py;
//	*py = tmp;
//
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//输入
//	scanf("%d %d %d", &a, &b, &c);
//	//调整
//	int tmp = 0;
//	if (a < b)
//	{//把小的换到大的里面
//	//	int tmp = a;
//	//	a = b;
//	//	b = tmp;
//	//
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		//tmp = a;
//		//a = c;
//		//c = tmp;
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		//tmp = b;
//		//b = c;
//		//c = tmp;
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}



//给定两个数,求这两个数的最大公约数
//找两个数的最小的数,然后--的找,找到的第一个就是最大公约数


//暴力求解
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d",&a, &b);
//	int min = (a < b ? a : b);
//	while (1)
//	{
//		if (a % min == 0 && b % min == 0)
//		{
//			break;
//		}
//		min--;
//	}
//	printf("%d\n", min);
//}

//辗转相除法
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d", &a, &b);
//	//用a%b的余数 
//	//用余数代替b,用b代替a
//	while(c = a%b)
//	{
//		a = b;
//		b = c;
//		//c = 0 也就是整除的时候,得到0为假,退出循环
//	}
//	printf("%d\n", b);
//}



//a*b/最大公约数=最大公倍数

//编写程序数一下 1 到 100 的所有整数中出现多少个数字9

//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//判断个位是不是9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//
//		//判断十位是不是9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


//分数求和 1-1/2+1/3-...+1/99-1/100的值

//除号取整数,除非除号两边有一个浮点数

//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag * (1.0 / i);
//		flag = -flag;
//	}
//
//	printf("%f\n", sum);
//
//	return 0;
//}


// 求是个整数中的最大值

