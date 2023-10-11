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

//内置类型
//数组:一组相同元素的集合
//基础语法:
//struct tag
//{
//	member - list;
//}variable - list;

//学生
//struct Stu //标签名
//{
//	//成员变量-属性
//	char name[20];
//	int age;
//	char sex[20];
//}s1, s2;//利用Stu类型创建的结构体变量, 如果在申明类型时定义的变量是全局变量, 在主函数中调用类型的是局部变量

//struct
//{
//	char name[20];
//	int age;
//	char sex[20];
//}s1;//不写名字得到匿名类型, 只能在申明时用一次

//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20], * p;

//虽然成员变量相同,但是得到的结构体变量的类型是不一样的.

//结构的自引用
//数据结构: 数据在内存中的存储结构

//线形
//顺序表 -> 连续存放12345
//链表 -> 上一个找下一个, 各一个中间无关系

//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//int main()
//{
//	sizeof(struct Node);
//
//	return 0;
//}//结构体包含同类型的结构体, 无法计算

//struct Node
//{
//	int data;			//数据域
//	struct Node* next;	//指针域(存放地址)
//};//结构体包含同类型结构体的指针, 可以计算
//
//typedef struct//重命名和自引用, 的顺序不可以
//{
//	int data;
//	Node* next;
//}Node;

//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;//先自引用, 然后重命名
//
//int main()
//{
//	return 0;
//}
//树形
//二叉树


//结构体的初始化
//struct Point
//{
//	int x;
//	int y;
//}p1 = {2,3}; //声明类型的同时定义变量p1, 并且初始化
//
//struct score
//{
//	int n;
//	char ch;//单个字符
//
//};
//struct Stu
//{
//	char name[20];
//	int age;
//	char sex[20];
//	struct score s;
//};
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "nihao", 20 , "男",{100, 'q'}};
//	printf("%s %d %d %s %c\n", s1.name, s1.age, s1.s.n,s1.sex, s1.s.ch);
//	return 0;
//}

//结构体内存对齐:计算结构体内存大小

//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//
//struct S2
//{
//	char c1;//1
//	char c2;//1
//	int i;//4
//};
////S1 和 S2成员相同但占用内存不用
////结论: 让占用空间小的成员尽量集中在一起.避免浪费
//
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;//对齐到自己的最大对齐数的整数倍处, 此处最大对齐数时8,所以到8的整数倍
//	double d;
//};
//
//
////内存不能直接按照成员本身的大小直接计算
//int main()
//{
//	printf("%d\n", sizeof(struct S1));//12
//	printf("%d\n", sizeof(struct S2));//8
//	printf("%d\n", sizeof(struct S3));//16
//	printf("%d\n", sizeof(struct S4));//32
//
//	printf("%d\n", offsetof(struct S1, c1));//c1的位置
//	printf("%d\n", offsetof(struct S1, i));//i的位置
//	printf("%d\n", offsetof(struct S1, c2));//c2的位置(偏移量)
//	return 0;
//}

//vs 编译器默认对齐数是8.对齐数是, 编译器实际的默认值和该成员大小中的较小值
//第一个成员放在偏移量为0的位置
//其他成员变量要对齐到对齐数的整数倍的地址处(此处有可能浪费内存)
//结构体的大小也是对齐数中最大的整数倍(此处有可能浪费内存)

//1. 第一个成员在与结构体变量偏移量为0的地址处。
//2. 其他成员变量要对齐到某个数字（对齐数）的整数倍的地址处。
//对齐数 = 编译器默认的一个对齐数 与 该成员大小的较小值。
//VS中默认的值为8(只有vs有默认对齐数, 其他编译器是自身大小)
//3. 结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍。



//4. 如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍。

//offsetof计算成员的偏移量

//为什么对齐
//1. 平台原因(移植原因)：
//不是所有的硬件平台都能访问任意地址上的任意数据的；某些硬件平台只能在某些地址处取某些特定类型的数据，否则抛出硬件异常。


//2. 性能原因：
//数据结构(尤其是栈)应该尽可能地在自然边界上对齐。
//原因在于，为了访问未对齐的内存，处理器需要作两次内存访问；而对齐的内存访问仅需要一次访问。
//32位机器, 一次性读取4个字节, 如果不对齐, 需要两次内存, 对齐时访问仅需要一次.(那空间换取时间)

//修改默认对齐数,

//#pragma once 
//头文件中使用, 功能是:放置头文件被多次引用

//#pragma pack(4)
//struct S
//{
//	int i;//0~3
//	double d;
//};
//
//#pragma pack()
//
//#pragma pack(1)
//
//struct S1
//{
//	char c1;//1
//	int i;//4
//	char c2;//1
//};
//
//#pragma pack()
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));//修改前是16, 修改后是12
//	printf("%d\n", sizeof(struct S1));//修改前是12, 修改后是1, 直接就是相加, 但是不要乱改
//	return 0;
//}

//结构体传参
//struct S
//{
//	int data[1000];
//	int num;
//};
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n" ,ss.num);
//}
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps-> num);
//}
//
//int main()
//{
//	struct S s = { {1,2,3}, 100 };
//	print1(s);//传值调用, 效率低, 但是值不影响原值
//	print2(&s);//传址调用, 效率高, 但是地址是可以改变原值, 所以const, 又安全又高效
//
//	return 0;
//}

//位段
//1.位段的成员必须是 int、unsigned int 或signed int 。
//2.位段的成员名后边有一个冒号和一个数字
//struct A
//{
//	//四个四个字节的用, 不够就再开辟4个比特位
//	int _a : 2/*限制给两个比特位*/;
//	int _b : 5;
//	int _c : 10;//此时还剩15个比特位
//	int _d : 30;//不够用了, 所以再开辟4个字节
//	//结构大小是8个字节
//
//	//位段的空间上是按照需要以4个字节（ int ）或者1个字节（ char ）的方式来开辟的。一般位段放的是同一类型的整型家族(位段的成员可以是 int unsigned int signed int 或者是 char类型)
//	//位段涉及很多不确定因素，位段是不跨平台的，注重可移植的程序应该避免使用位段。
//};
////位段是节省空间的,且只能在结构体里面用
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}


//struct S
//{
//	//四个成员
//	char a : 3;
//	char b : 4;//此处一个字节
//	char c : 5;//此处一个字节, 如果用了上面的剩余, 结果就是两个字节.
//			   //如果没有用剩余的, 结果就是d还需要再开辟一个字节空间			
//	char d : 4;//不能改成14, 不能超过8个比特位,一个字符顶多1个字节
//};
//
//
//int main()
//{
//
//	printf("%d\n", sizeof(struct S));//结果是3,说明浪费了比特位
//	struct S s = { 0 };//创建一个对象
//	//开辟空间
//	//	0 110	0 010   000 0	0011	0000	0100	00000000
//	//0x6		2		0		3		0		4		00
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//
//	return 0;
//}

//1. int 位段被当成有符号数(signed)还是无符号数(unsigned)是不确定的。
//2. 位段中最大位的数目不能确定。（16位机器最大16，32位机器最大32，写成27，在16位机器会出问题。
//3. 位段中的成员在内存中从左向右分配，还是从右向左分配标准尚未定义。()
//4. 当一个结构包含两个位段，第二个位段成员比较大，无法容纳于第一个位段剩余的位时，是舍弃剩余的位还是利用，这是不确定的。(舍弃还是利用是不确定的)

//位段应用在位段里面
//数据在网络上查找目标需要位段,改变开票空间的大小(单位是比特位)

//此处开始实现一个通讯录

//这个键盘的键位好奇怪哦,这个盘版好奇怪哦好奇怪破


//枚举类型
//enum Day//星期, 把每个可以一一列举的值变成一个抽象类型
//{
//	mon = 1,
//	tues,
//	wed,
//	thur,
//	fri,
//	sat,
//	sun
//};//这是个类型,创造变量时申请内存
//
//int main()
//{
//	enum Day d = fri;//左右类型相同, c++中就会检测到左右的类型是否相同
//	printf("%d\n", mon);
//	printf("%d\n", thur);
//	printf("%d\n", wed);
//	printf("%d\n", fri);
//	printf("%d\n",tues);
//	printf("%d\n", sat);
//	printf("%d\n", sun);
//	return 0;
//}


//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
////枚举增加代码的可读性和可维护性
////和#define定义的标识符比较枚举有类型检查，更加严谨。枚举是有类型的
////便于调试, 预处理后符号宏, 全部进行替换, 调试时, 找不到宏了
//
//
////联合(共用体)
////联合的一系列成员共用同一块空间,空间里的成员不能同时使用
//
//union Un
//{
//	int a;
//	char c;
//};
//
//struct St
//{
//	int a;
//	char c;
//};
//
//
////判断大小端
//int check_sys1()
//{
//	int a = 1;
//	return *((char*)&a);//强制类型转换成char* 限制权限, 一次访问一个字节, 传入首地址,如果是从低向高存放(小端存储)那就是1, 如果是大端存储, 那第一个字节读出来就是0
//}
//
//int check_sys2()
//{
//	union Un
//	{
//		int a;
//		char b;
//	}u;
//	u.a = 1;//如果是小端存储,那读取是也是从低地址向高地址, 那读到的第一个字节就是1
//			//如果是大端存储,存放时是从高地址向低地址,而读取是从低地址向高地址,读取的就是0 
//	return u.b;//从低地址向高地址找一个字节存放b, 如果b是0, 那就是大端存储,1就是小端
//}


//int main()
//{
//	union Un u;
//	u.a = 0x11223344;//使用u开的的四个字节
//	u.c = 0x00;//直接覆盖u的开始的一个字节
//
//	int ret1 = check_sys1();
//	int ret2 = check_sys2();
//	if (ret1 == 1)
//	{
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	if (ret2 == 1)
//	{
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//	//printf("%d\n", sizeof(u));
//	//printf("%d\n", sizeof(&u));
//	//printf("%d\n", sizeof(&u.a));
//	//printf("%d\n", sizeof(&u.c));
//	return 0;
//}

//判断系统的大小端储存方式

//联合体大小的计算    ------    联合体也存在对齐

//union U
//{
//	short arr[7];//short是2个字节,所以这个数组是14, 最大对齐数是4, 整数倍是16
//	//相当于
//	// char c1
//	// char c2
//	// char c3
//	// char c4
//	int i;
//};
//
//
//
//int main()
//{
//	printf("%d\n", sizeof(U));
//	return 0;
//}