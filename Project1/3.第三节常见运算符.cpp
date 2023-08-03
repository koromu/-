#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// typedef 函数重命名
typedef unsigned int uint;	//unsigned int 的名字变成了unit 使用这两个是一样的

//typedef struct Node			//这是个类型,给类型变了个名字
//{
//	int data;
//	struct Node* next;
//}; Node;

//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct Node n;
//	Node n2;
//	return 0;
//}





//static是静态 是用来修饰变量和函数的
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//1.修饰局部变量
//void test()		//void就是不需要返回
//{
//	static int a = 1;				//这个内存在编译过程就弄好了,后背运行根本不运行这条语言	
//									// 切记局部变量的生命周期
//	a++;							// 但是用了static 出了作用域的时候没有销毁
//	printf("a = %d\n", a);			// static修饰的变量会改变变量的存储位置到 静态区
//}
									//内存分为 
									//"栈区"局部变量(进去创建,出来销毁)
									//"堆区" 
									//"静态区"静态变量 (生命周期变成 进入作用域创建 出作用域不销毁,程序销毁时才销毁)
//int main() 
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//
//	return 0;
//}


//2.修饰全局变量
// 全局变量是具有"外部链接属性"的, 所以可以声明在别的文件使用


// 但是用static修饰全局变量以后,全局变量的"外部链接属性",变成了"内部链接属性"


/*int g_val = 2023;
extern int g_val;*/	//在另外一个源文件时需要声明


//int main()
//{
//	printf("%d\n",g_val);
//	return 0;
//}


//static修饰函数

/*int Add(int x, int y)
{
	return x + y;
}

extern int Add(int x, int y);*/		//在别的源文件也就是声明一下即可以了
						//函数也是具有外部链接属性的
						//用static修饰以后变成静态函数到静态区了,又变成内部链接属性了,其它源文件.c就不能使用这个函数了


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//
//	return 0;
//}


//register - 寄存器
//电脑上的存储设备有哪些呢?
//1.寄存器(集成到CPU上)	快	空间小造价高	CPU直接用
//2.高速缓存(cache)		|					
//3.内存				|					
//4.硬盘				慢	空间大造价低	从下往上传



//int main()
//{
//	//寄存器变量
//	register int num = 3; // 建议： 3放在寄存器中
//
//	return 0;
//}



//#define 定义标识符常量和宏

//1.定义标识符常量
#define NUM 100		//什么都可以用


//2.定义宏->用于替换的
//宏量是有参数
//# define 宏名(参数1, 参数2) ( (参数1) _(符号) (参数2) )->宏体 宏体会替换宏名字
//1.宏里面参数不需要类型
#define ADD(x, y) ((x) + (y))

//int Add(int x, int y)
//{
//	return x + y;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);			//用(a)+(b)替换ADD(a, b);
//	printf("%d\n", NUM);
//	return 0;
//}
