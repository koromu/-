#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>
#include <stdlib.h>


//字符指针
//char* 类型的指针
//int main()
//{
//	//值属性, 类型属性
//
//	//(abcdef是一个常量字符串,不能更改,传入一个指针中, 有可能被更改, 权限变大了, 有危险会报错)
//	const char* p = "abcdef";//实际放的是字符串首字符的地址(包括'\0'就有7个字符, 是7个字节, 而指针只能存4个字节)
//	char arr[] = "abcdef";//数组中放到
//	printf("%s\n", p);//告诉一个地址,printf看到, %s然后检查'\0'
//
//	return 0;
//}


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";//常量反正不可以更改,所以存放的地址是只读区域.只是有两个指针, 指向同一个地方,拥有相同的地址.
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//数组是可以更改的, 所以存放的地方是两个空间,地址是不相等的.数组名表示数组首元素的地址.
//
//	if (p1 == p2)
//	{
//		printf("p1 == p2\n");
//	}
//	else
//	{
//		printf("p1 != p2");
//	}
//	if (arr1 == arr2)
//	{
//		printf("arr1 ==arr2\n");
//	}
//	else
//	{
//		printf("arr1 != arr2");
//	}
//}


//指针数组:是用来存放指针的数组
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };//存放整型指针的数组int* int* int* int*
//	int arr2[] = { 2, 3, 4, 5, 6 };//存放字符指针的数组char* char* char*
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* arr[]{ arr1, arr2, arr3 };//数组的嵌套,依靠指针数组
//
//	int i;
//	int j;
//	for (i = 0; i < 3; i++)
//	{
//		int j;
//		for (j = 0; j < 5; j++)
//		{
//			//*(p + i) = p[i]
//			printf("%d ", *(arr[i]+j));//模拟二维数组, 三个数组内存不一样定连续存放,所以不是二维数组
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//数组指针 -> 指针 -> 指向数组的指针

//整型指针 - 指向整型的指针
//int*
//字符指针 - 指向字符的指针

//int main()
//{
//	//int* p1[10];//p1是指针数组
//	//int(*p2)[10];//p2是数组指针, p2可以指向一个数组, 该数组有10个元素, 每个元素是int类型
//	char* arr[5] = { 0 };
//	char* (*pc) [5] = &arr;
//
//
//	return 0;
//}

//数组名vs

//int main()
//{
//	int arr[10] = { };
//	int* p = arr;
//	int (*p2)[10] = &arr;//改用什么类型的指针存放数组的地址呢 - 数组指针>用来存放整个数组的地址: int(*)[] 是数组类型, 指针是p2
//	printf("%d\n", arr);
//	printf("%d\n", arr+1);//一个整型
//
//	printf("%d\n", &arr);
//	printf("%d\n", &arr+1);//一个整型
//	
//	printf("%d\n", &arr[0]);
//	printf("%d\n", &arr[0]+1);//跳过了整个数组, 跳了40个字节
//}

//数组名通常表示的都是首元素的地址
//但有两个意外
//1. sizeof(数组名), 这里的数组名表示整个数组, 计算的是整个数组的大小
//2. &数组名, 这里的数组名表示的依然是整个数组, 所以 '&数组名' 取出的是 '整个数组' 的地址

//int main()
//{
//	int arr[] = { 1, 2 ,3 ,4 ,5 ,6 ,7, 8, 9, 10 };
//	//int (*p)[10] = &arr;//括号默认是0
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	//printf("%d ", (*p)[i]);//p是指向数组的, *p其实就相当于数组名, 数组名又是数组首元素的地址
//	//	//printf("%d ", *(*p + i));
//
//	//}
//
//	//int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p + i));
//	//}
//
//	return 0;
//}


//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//void print2(int (*p)[5], int r, int c)//二维数组第一个元素, 是一个数组.所以一个数组的地址, 应该用数组指针接收
//{
//	//二维数组的首元素是第一行
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", (*(*p + i) + j));
//			//printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);
//}

//int(*parr3[10])[5] = { &arr1, &arr2, &arr3 }; //存放数组指针的数组
//int* parrr2[10]; //整型指针数组

//数组参数, 指针参数
//二级指针就是存放一级指针的地址
//void test(int** arr)
//{
//
//}

//int main()
//{
//
//	int* arr[20] = { };
//	test(arr);
//}

//(形参的)二维数组行可以省略, 列不能省略
//void test(int arr[][5])
//{
//}

//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}


//二级指针传参

//void  test(int** ptr)
//{
// }
//int main()
//{
//	//那么test()可以传入什么参数呢
//
//	//1.指针数组
//	//2.一级指针
//	//3.三级指针解引用一次
//	//...
//
//}

//函数指针:指向函数的指针就是函数指针
//数组指针: 指向数组的指针就是数组指针

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int arr[5] = {	};
//	//&数组 - 取出数组的地址
//	int(*p)[5] = &arr;//数组指针
//
//	printf("%d\n", &Add);
//	//打印函数的地址, 函数也是有地址的
//	printf("%d\n", Add);//?
//	//对于函数来说, 取地址函数名和函数名都是函数的地址;
//
//	  int		 (*pf) (int,		 int) = &Add;
//	//返回值类型      (参数类型, 参数类型)

// //和函数的写法很像
//	  int ret = (*pf)(2, 3);//解引用函数指针, 同样可以是使用函数
//	  //int ret = (pf)(2, 3);//不写也行, 写多少个星号都行, 因为函数名Add本来就是地址, pf也是个地址, 所以函数可以直接写, 函数指针也行
//	  printf("%d\n", ret);
//	return 0;
//}

//void calc(int (*pf)(int , int ))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}

//int main()
//{
//	calc(Add);
//	return 0;
//}

//数组指针的产生
//int arr[5];			
//pa = &arr;			
//(*pa) = &arr;			地址存到指针里面
//(*pa)[5] = &arr;		数组中有5个元素
//int(*pa)[5] = &arr;	每个元素的类型是整型

//int main()
//{
//	( *( void(*)() )0 )();
//	//void(*)( )是一个类型
//	//(类型)0就是强制转换
//	// 
//	//( coid(*)() )0, 强制转化地址0
//	//1.把0强制类型转化为无参数, 返回类型是void的函数地址
//	//2.调用0地址处的这个函数
//	//typedef unsigned int uint;
//
//	typedef void(*pf_t)(int);// 把void(*)(int)类型重命名为pf_t
//
//	void(*signal(int, void(*)(int)))(int);
//	//以上代码是一次函数声明, 声明的第一个参数的类型是int, 第二个参数的类型是函数指针, 该函数指针指向的函数参数是int
//	//返回值是void, signal函数的返回类型也是一个函数 指针类型
//	pf_t signal(int, pf_t);
//	return 0;
//}

//函数指针的用处

//计算器
// x&y
// x|y
// ...不够简洁 



//void menu()
//{
//	printf("******************************\n");
//	printf("******  1.add	2.sub   ******\n");
//	printf("******  3.mul   4.div   ******\n");
//	printf("******     0.exit	******\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//void comp(int (*pf) (int, int))
//{
//
//	printf("请选择两个操作数:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}


//int main()
//{
//	int input = 0;
//	int x;
//	int y;
//	int ret;
//	do
//	{
//		menu();
//		printf("请输入需要的运算:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			printf("请选择两个操作数:");
//			scanf("%d %d", &x, &y);
//			//comp(Add);
//			break;
//		case 2:
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			printf("请选择两个操作数:");
//			scanf("%d %d", &x, &y);
//			//comp(Sub);
//			break;
//		case 3:
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			printf("请选择两个操作数:");
//			scanf("%d %d", &x, &y);
//			//comp(Mul);
//			break;
//		case 4:
//			ret = Div(x, y);
//			printf("%d\n", ret); 
//			printf("请选择两个操作数:");
//			scanf("%d %d", &x, &y);
//			//comp(Div);
//			break;
//		case 0:
//			break;
//		default:{
//			printf("选择错误.\n");
//		break;
//		}
//		}//函数的重复把函数地址传入进去, 在内部找到对应的函数, 传入不同的函数, 得到不同的功能(回调函数)
//	}
//		while (input);
//
//		printf("退出成功");
//		return 0;
//}

//函数指针数组用法
//int main()
//{
//	int input;
//	int x;
//	int y;
//	int ret;
//	int (*arr[])(int, int) = {0 , Add, Sub, Mul, Div};
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出成功");
//			break;
//		}
//		else if (input >=1 && input <=4)
//		{
//			printf("请选择两个操作数:");
//			scanf("%d %d", &x, &y);
//			printf("\n");
//			ret = arr[input](x, y);
//			printf("结果是:%d\n", ret);
//		}
//		else
//		{
//			printf("输入错误\n");
//		}
//
//
//
//	} while (input);
//
//	return 0;
//}

//函数指针数组
//存放函数指针的数组 

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	int (*pf)(int, int) = Add;
//
//	//形成过程
//	//aee[4]:一个数组四个元素(元素是函数名 -> 地址)
//	//int (*)(int, int ) 函数公用的参数类型, 和返回类型
//	//合体: int (*arr[4])(int, int ) -> 函数指针数组
//
//	int (*arr[4])(int, int ) = {Add, Sub, Mul, Div};//参数类型相同, 返回类型相同的函数, 放到函数指针数组中
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d\n", ret);
//	}
//	return 0;
//}


//只想函数指针数组的指针: 解引用得到的是函数指针数组的首元素地址

//int main()
//{
//	int (*arr[])(int, int) = {0, Add, Sub, Mul, Div };
//	//类型: int (*)(int,int)
//	//主体: arr[4]
//	//指向[函数指针数组]的指针: 那主体是指针
//	int (*(*p_arr)[5])(int, int) = &(arr);//这个5不能少因为不能检测这个实体有多少个元素, 需要对应能包含这个函数指针数组
//	//类型:int(*)(int, int) -> 函数指针数组
//	//:函数指针数组*arr[4] -> 类型是指针 指向的是函数指针数组
//	return 0;
//}


//回调函数
//回调函数就是一个通过函数指针调用的函数。如果你把函数的指针（地址）作为参数传递给另一个
//函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
//的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的，用于对该事件或条件进
//行响应。

//冒泡排序

//两两相邻的元素比较
//void bubble_sort(int* arr, int len)
//{
//	int i = 0;
//	for (i = 0; i < len - 1; i++)
//	{
//		//假设数组的意见排好序的
//		int flag = 1;
//		//一趟冒泡函数
//		int j = 0;
//		for (j = 0; j < len  -1 -i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
////
////qsort - 这个函数可以排序任意类型的数组
////
////void qsort("void* base,//你要排序的数据的起始位置"
////			 "size_t num,//待排序的数据元素的个数"
////			 "size_t width,//待排序的数据元素的大小(单位是字节)"
////			 "int(* cmp)(const void* e1, const void* e2)//函数指针 - 比较函数"
////			 );
//
////qsort的参数意义:
////作者能不能知道传入的待排序的数据? 不能 -> 所以用了void*接收
////知道的元素类型吗? 不能 ->所以要求传入元素个数和元素宽度, 就可以读到每个元素
////
//
//
//
////这个函数比较两个整型元素
////e1指向一个整数, 是个指针
////e2指向另一个整数, 是个指针
//int cmp_int(const void* e1, const void* e2)
//{
//	////但是不能直接解引用 void*类型的指针
//	//if (*(int*)e1 - *(int*)e1)
//	//{
//	//	return 1; //e1 - e2 大于0,需要返回大于0的数
//	//}
//	//else if (*(int*) e1 < *(int*) e2)
//	//{
//	//	return -1;//e1 - e2 小于0,需要返回小于0的数
//	//}
//	//else
//	//{
//	//	return 0;//e1 == e2 相等时需要返回0
//	//}
//	return (*(int*)e1 - *(int*)e2);//升序
//	//return (*(int*)e2 - *(int*)e1);//降序
//
//}
//
//
////void的类型的指针
////int main()
////{
////	int a = 10;
////	//char* pa = &a;//类型不一致
////	void* pa = &a; // 没有明确类型的指针(void*), 可以接受任意类型的地址
////	//void* 是无具体类型的指针, 所以不能解引用操作, 也不能+-整数
////}
//
//
////int main()
////{
////	//int arr[] = {9,8,7,6,5,4,3,2,1,0};
////	int arr[] = {0,1,2,3,4,5,6,7,8,9};
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	//排序
////	//bubble_sort(arr, sz);
////	qsort(arr, sz, sizeof(arr[0]), cmp_int);//用qsort可以排序, 把比较函数传进去, 是qsort在内部在特定的时候使用 -> 回调函数的定义
////
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////
////	return 0;
////}
//
//void test1()
//{
//		//int arr[] = {9,8,7,6,5,4,3,2,1,0};
//		int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		//排序
//		//bubble_sort(arr, sz);
//		qsort(arr, sz, sizeof(arr[0]), cmp_int);
//
//		int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr[i]);
//		}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//先找到e1内部
//	//strcmp -> 刚好和qsort的规则相同 e1, e2的比较返回的值是>0 <0 =0	
//	return  strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);//比较名字,是比较两个字符串必须用strcmp
//
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//先找到e1内部
//	return  ((struct Stu*)e1)->age -((struct Stu*)e2)->age;//比较年龄,直接做差e1 e2得到的就是返回的值
//
//}
//
////改造自己的冒泡函数
//
//void Swap(char* infort, char* after, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *after;
//		*after = *infort;
//		*infort = tmp;
//	}
//}
//
//void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2))//参考qsort的参数, 第四个函数指针叫cmp
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//假设数组是排好序的
//		int flag = 1;
//		//一趟冒泡函数
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//计算传入的base是什么类型, 才能强制类型转换, 然后传给e1, e2然后比较这两个(不能传入void*), 比较前后项目 -> 冒泡函数的概念
//			//计算从base的开头, 再计算加j个宽度, 得到的就是第j个元素的开头
//			//计算从base的开头, 再计算加j+1个宽度, 得到的就是第j+1个元素的开头
//
//			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)//使用传入的比较函数比较
//			{
//				//交换函数
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//			flag = 0;//到里面了就是没排好
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void test2()
//{
//	//使用qsort排序结构数据
//	struct Stu s[] = { {"nihao", 12}, {"good", 11}, {"c", 16} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);//默认是升序, 
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//默认是升序, 
//}
//
//void test3()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	//int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//排序
//	//bubble_sort(arr, sz);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void test4()
//{
//	//使用qsort排序结构数据
//	struct Stu s[] = { {"nihao", 12}, {"good", 11}, {"c", 16} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);//默认是升序, 
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);//默认是升序, 
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//}



