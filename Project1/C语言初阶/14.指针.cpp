#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//内存空间如何管理呢?
//讲内存切割成内存单元 -> 1 byte(字节) -> 为了找到,定位到内存单元 -> 编号:称为地址,也叫指针 -> 指针就是内存最小单元的编号
//口头语中的指针通常是指指针变量
//int main()
//{
//	int a = 10;//a是一个整型变量,占用四个字节的空间
//	int* path_a = &a;//指针就是地址, 类型是 int* 
//	//X86->32位的指针变量大小是4个字节,64位的指针变量傻笑是8个字节
//
//	return 0;
//}


//int main()
//{
//	char* pc = NULL;
//	char* ps = NULL;
//
//	//sizeof 的返回类型是unsigned int 专用的格式化%zu, %d %u 也可以使用
//	printf("%zu\n", sizeof(pc));
//	printf("%zu\n", sizeof(ps));
//
//}

//int main() {
//	int a = 0x11223344;
//	char* pc = (char*)&a;
//	*pc = 0;
//
//	//*pc 解引用pc
//	//指针类型决定了指针在被解引用的时候访问几个字节(权限)
//	//如果是int*的指针, 解引用访问4个i解
//	//char*的指针,解引用访问1个字节
//	return 0;
//}

//int main()
//{
//	//int a = 0x11223344;
//	//int* pa = &a;
//	//char* pc = (char*) & a;//强制储存到char*中
//
//	//printf("pa = %p\n", pa);	//指针的类型决定了+-1跳过几个字节
//	//printf("pa = %p\n", pa+1);	//选择不同的类型指针，得到不同的效果：指针解引用时访问的字节数(也叫做权限)（char1个,int4个）,+-1时跳过的字节数
//	//printf("pc = %p\n", pc);
//	//printf("pc = %p\n", pc+1);
//
//	int a = 0;
//	
//	int* pi = &a;
//	float* pf = (float*) & a;
//
//	*pi = 100;
//	*pf = 100.0;//这两个储存的方式不一样
//
//	return 0;
//}



//int* test()
//{
//	int a =10;
//	return &a;
//}
// 
//3.野指针,指针指向的位置是不可知的. 指针没有初始化,没有明确的指向
//int main()
//{
//	//一个局部变量不初始化(成因1),放的是随机值,oxccccccc
//	//指针越界访问
//	//int* p;
//	//*p = 10;//非法访问内存,这里的p就是野指针
//	
//	//int arr[10] = { 0 };
//	//int* p = arr;//&arr[0]
//	////一次解引用是读取一个整型,如果+1,一直加直到超出arr的范围时,就也是野指针
//	//int i = 0;
//	//for (*p += i; i <= 10; i++)
//	//{
//	//	printf("%p\n", *p);
//	//}
//	
//	//int* p = test(); //得到一个地址,但是a是个临时变量,离开函数是,销毁了内存.所以主函数中得到的是个非法地址,成了野指针
//
//
//
//	//指针的初始化
//	int* p1 = NULL;
//
//	if (p1 != NULL)
//	{
//		*p1 = 100;
//	}//赋值的时候做个判断
//
//
//	return 0;
//}
//预防方法
// 1.定义指针时,赋予NULL,得到一个空指针
// 2.小心指针变量
// 3.指针使用之前检查有效性


//4.指针的运算
//指针的+-整数

//#define N_VALUES 5
//int main()
//{
//	//float values[5];
//	//float *vp;
//	//for (vp = &values[0]; vp < &values[N_VALUES];)
//	//{
//	//	*vp++ = 0;
//	//	//分为 *vp = 0 和 vp++ ++只作用于vp 不包括*
//	//}
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++ )
//	{
//		*(p + i) = 1;//p是指针变量, +1 跳过一个整型 ,原本指向的是数组的第一个元素,一次循环变成第二个元素
//	}
//	int j = 0;
//	for (j = 0; j <= sz; j++)
//	{
//		printf("%d\n", arr[j]);
//	}
//
//
//	return 0;
//}


//指针的相减
//4.1
//int my_strlen(const char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	
//	}
//	return count;
//}

//4.2.递归
//4.3.指针-指针
//int my_strlen(const char* str)
//{
//	const char* start = str;	//str是个指针变量, 接收了地址(实际上是第一个字节的地址)
//						//勇哥记录以后,寻找这个地址中的值
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return (str - start);
//}

//int main()
//{
//	//int arr[10] = { 0 };
//	//printf("%d\n", &arr[9] - &arr[8]);
//	//指针减去指针得到的是指针和指针之间元素的个数(有正负)
//	//不是所有的指针都能相减
//	//需要指针指向的是同一个内存空间,才能相减
//	int len = my_strlen("abcdef");//字符串: a b c d e f \0
//	printf("%d\n", len);
//
//
//	return 0;
//}

//指针的关系运算(比较大小)

//#define N_VALUES 5
//
//int main()
//{
//	float values[N_VALUES];
//	float* vp;//野指针
//
//
//	for (vp = &values[N_VALUES]; vp >= &values[0];)
//	{
//		*--vp = 0;
//	}
//
//}

//规范标准: 允许指针与指向数组最后一个元素后面的那个内存位置的比较,不允许与指向第一个元素之前的那个内存位置的指针比较

//5.指针 - 数组
//数组: 一组相同类型元素的集合
//指针变量 : 是一个变量,存放的是地址

//int main()
//{
//	int arr[10] = { 0 };
//	//arr是首元素地址
//	//&arr[0]同上
//	int* p = arr;
//	//通过指针访问数组
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p-----%p-----%p\n", &arr[i], (p + i), (arr + i));//地址相同,那么对应的值也可以是相同的
//	}
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d\n", *(p + i));
//	//}
//
//	return 0;
//}

//void test(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) //实际上都是知道地址,然后移位
//	{
//		printf("%d ", *(p + i));
//	}
//}

//void test(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]); //实际上都是知道地址,然后移位
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	test(arr, 10);
//
//	return 0;
//}


//6.二级指针
//int main()
//{
//	int a = 10;
//	int* pa = &a;//pa是一个指针变量,同样是一个一级指针变量
//	//*pa = 20;//一次解引用就能够找到
//
//	int** ppa = &pa;//pa本来也是变量,应该也有自己的内存,有自己的空间,尝试取地址
//	//类型是int** , ppa是个二级指针变量
//	**ppa = 25;
//	//*ppa 指向的是pa的地址 **ppa得到的是a的值, 两次解引用.
//
//	int* a = &a;   // * 表示后面的变量是指针. int 表示后面的变量指向的变量类型是int.
//	int** ppa;		// int* 表示 ppa指向的对象是int*类型. * 表示ppa是指针 
//	//二级指针变量是用来存放一级指针的地址
//	printf("%d\n", a);
//
//
//	return 0;
//}

//6.指针数组:存放指针的数组就是指针数组
//int main()
//{
//	//int a = 10;
//	//int b = 12;
//	//int c = 15;
//
//	//int arr[10] = { 0 };
//	//int* pa = &a;
//	//int* pb = &b;
//	//int* pc = &c;
//
//	////存放指针的数组就是指针数组
//	//int* parr[10] = { &a, &b, &c };
//	//int i = 0;
//	//for (i = 0; i < 3; i++)
//	//	{
//	//	printf("%d\n", *(parr[i]));// *(parr[0]) = (&a)
//	//	}
//
//
//	//模拟二维数组
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	// primtf("\n")
//	//}
//
//	int arr1[4] = { 1, 2, 3, 4 };
//	int arr2[4] = { 2, 3, 4, 5 };
//	int arr3[4] = { 3, 4, 5, 6 };
//
//	int* parr[3] = { arr1, arr2, arr3 };//放的三个数组的地址
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", parr[i][j]);//arr[i] = *(arr + i),括号就是解引用
//			//这里的parr[i][j]表示访问指针parr所指向的数组的第i个元素(数组),再访问这个元素(数字)偏移j的元素，并将其打印。
//		}
//	}
//	return 0;
//}

