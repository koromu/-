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

//int main()
//{
//	int a = 10;//4个字节
//	int arr[10];//40个字节
//	//以上开辟后无法改变
//
//	return 0;
//}

//动态内存管理

//四大函数申请的空间都存储在堆区
//malloc基础语法: void* malloc (size_t size);//需要的尺寸字节个数

//如果开辟成功，则返回一个指向开辟好空间的指针
//如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查
//返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己
//如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器来决定

//开辟空间失败返回空指针

//int main()
//{
//	int* p_int1 = (int*)malloc(40);
//	//int* p_int2 = (int*)malloc(INT_MAX);//申请失败
//	if (p_int1 == NULL)
//	{
//		printf("%s\n", strerror(errno));//参数errno
//		return 1;
//	}
//	//使用内存
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p_int1 + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p_int1 +i));
//	}
//	//没有free, 
//	//并不是内存空间就不回收了
//	//当程序退出的时候,程序结束的时候就还回来了
//	//释放咒语
//	free(p_int1);//这样的p_int还是记得地址
//	//补全安全方法
//	p_int1 = NULL;
//	return 0;
//}

//int main()
//{
//	
//	//malloc();
////如果开辟成功，则返回一个指向开辟好空间的指针
////如果开辟失败，则返回一个NULL指针，因此malloc的返回值一定要做检查
////返回值的类型是 void* ，所以malloc函数并不知道开辟空间的类型，具体在使用的时候使用者自己
////如果参数 size 为0，malloc的行为是标准是未定义的，取决于编译器来决定
//
//	//free();//接受的一定是malloc得到的内存不是什么指针都可以传进去, 如果是空指针,什么都不会做
//
//
//
//	return 0;
//}

//calloc的基础语法
//void* calloc(size_t num需要的小空间个数, size_t size每个小空间的大小(单位字节));


//int main()
//{
//	int *p = (int*)calloc(10, sizeof(int));//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//此处特殊点是,calloc会自动初始化, malloc不会初始化
//		//calloc = malloc + menset初始化
//	}
//	free(p);//开辟空间后就要有释放的习惯
//	p = NULL;
//
//	return 0;
//}


//调整空间的基础语法:
//void* realloc(void* ptr需要修改的空间的起始地址, size_t size需要修改后的空间大小);

//int main()
//{
//	int* p_int = (int*)malloc(40);
//	if (p_int == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p_int+ i) = i + 1;
//	}
//	
//	//扩容:修改p_int的内存空间
//	//情况1:原空间后足够, 直接申请后面的内存
//	int* ptr = (int*)realloc(p_int, 80);//注意强想法转换
//	//情况2:原空间后空间不够,找一个足够的位置, 开辟一块把原内容拷贝一份, 然后释放原内存
//	if (ptr != NULL)
//	{
//		p_int = ptr;
//	}
//	free(p_int);
//	p_int = NULL;
//
//	return 0;
//}


//realloc(NULL, 40) 等价于 malloc(40)


//动态内存管理常见的错误

//1.对动态空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//
//	*p = 20;//直接解引用会出问题, 如果是空指针
//	free(p);
//	return 0;
//}

//对动态内存的开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i <= 10/*此时存在越界访问*/; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//	p = NULL;
//	return 0;
//}

//使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);//free时,p不是指向初始位置, free要传入内存的首位置->所以使用p[i]/*(p+i)进行改变,就不会改变p,而是使用i改变一个指针最后指向的位置
//	p = NULL;
//	return 0;
//}

//5.对同一块动态内存的多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//
//	free(p);
//	//所以此处需要复制为空指针
//	p = NULL;//正确的
//
//	free(p);//野指针再被释放,此条报错
//
//	return 0;
//}

//6.动态开辟内存忘记释放(内存泄漏)

//void test()
//{
//	//int* p = (int*)malloc(40);
//	//pass;
//
//	return;//此处结束了, free有可能不被执行
//	free(p);
//	p = NULL;
//}
//
//int main()
//{
//	test();
//	return 0;
//}



//int* test()
//{
//	int* p = (int*)malloc(40);
//
//	if (p == NULL)
//	{
//		return p;
//	}
//
//	return p;
//	//没有释放
//}
//主函数使用时也不知道要释放


//题目
//void GetMemory(char** p/*存放的是str的地址*/)
//{
//	*p/*得到str的地址*/ = (char*)malloc(100);
//	//str存放的就是动态开辟的100个字节的地址
//}
////p是临时变量, 改变p对str没有影响
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//此时str还是空指针
//	strcpy(str, "hello world");
//	printf(str);
//	//记得释放
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int * test()
//{
//	//返回栈空间的地址
//	int a = 10;
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);//不是永远的到的是原值, 如果被覆盖了,就不是原值了
//	return 0;
//
//}

//题目3

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}//可以打印, 但是没有释放内存
//
//int main()
//{
//	Test();
//	return 0;
//}

//题目4

//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;//解决方法, 让指针失忆
//	if (str != NULL)
//	{
//		//野指针, 还记得地址,但是不是我们应该知道的地址和空间
//		strcpy(str, "world");//野指针进贤修改
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//柔性数组

//typedef struct st_type
//{
//	int i;
//	//int a[0];//形式1:柔性数组成员
//	int a[];//形式2
//}type_a;

//1.结构中的柔性数组成员前面"必须"至少一个其他成员。而且必须是最后一个成员
//2.sizeof 返回的这种结构大小不包括柔性数组的内存
//3.包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构的大小，以适应柔性数组的预期大小

//struct S
//{
//	int i;
//	int arr[];
//};
//
//int main()
//{
//	//int sz = sizeof(struct S);;
//	//printf("%d\n", sz);//4
//	struct S s;//4,没有arr的空间
//
//	//柔性数组的使用
//	struct S* ps = (struct S*)/*注意强制类型转换*/malloc(sizeof(struct S/*除了柔性数组开辟的*/) + 40/*给柔性数组开辟的*/);
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	ps->i = 100;
//	int n = 0;
//	for (n = 0; n < 10; n++)
//	{
//		ps->arr[n] = n;
//	}
//
//	for (n = 0; n < 10; n++)
//	{
//		printf("%d ", ps->arr[n]);
//	}//此时内存放满了, 作为柔性数组可以再开辟
//	struct S* ret = (struct S*)/*左右类型要相同*/realloc(ps, sizeof(struct S) + 80);
//	if (ret != NULL)
//	{
//		ps = ret;//完成了使命可以失忆了
//		ret = NULL;//但不能释放,因为指向的地址空间是一样的
//	}
//
//	free(ps);
//	ps = NULL;
//	return 0;
//}//一次malloc,一次释放


//指针方法
//struct  S
//{
//	int n;
//	int* arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));//第一次malloc
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//			return 1;
//	}
//	ps->n = 100;
//	ps->arr = (int *)/*因为arr是个整型指针*/malloc(40);//第二次malloc
//	if (ps->arr == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//扩容
//	int* ret = (int*)realloc(ps->arr, 80);
//	if (ret != NULL)
//	{
//		ps->arr = ret;
//		ret = NULL;
//	}
//
//	free(ps->arr);//先释放内部的,以防止找不到内部的内存了
//		free(ps);
//	return 0;
//}//malloc两次(容易产生更多的内存碎片), 释放两次 -> 出错率大

//第一个好处是：方便内存释放
//第二个好处是：这样有利于访问速度

//四大函数申请的空间都存储在堆区,为了放在堆区,其他的东西都是