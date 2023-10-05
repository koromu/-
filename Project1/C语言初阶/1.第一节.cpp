#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//尖括号<>


// main 前面的int 意思表示main 函数调用返回一个整形值
//int main()
//{
//	printf("hello world\n");
//		return 0; // 返回0
//}

//f 就是 function

//printf-打印函数	库函数-C语言本身提供给我们提供给我们使用的函数	别人的东西-要打招呼
//招呼就是#include-包含		包含stdio.h = std-标准standard. i = input .out = output.	全部叫做头文件

// 一下为过时的代码
//void main()


//数据类型
//char		字符类型
//short		短整型
//int		整形
//long		长整型
//long long 更长的整形  c99
//float		单精度浮点数
//double	双精度浮点数
// 格式化类型
//%d -		打印整型
//%c -		打印字符串
//%f -		打印浮点数字- 打小数	小数点后面5位数
//%p -		以地址的形式打印
//%x -		打印16进制数字
//%o -		...
//int main()
//{
//	//char ch = 'A';//向内存申请一个空间
//	//printf("%c\n", ch);//%c == 打印字符格式的数据
//
//	//int age = 20;
//	//printf("%d", age);//%d --打印整型10进制数据
//	double d = 6.111;
//	printf("%lf\n", d);//双精度 double要用%lf
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));		//1 单位是字节 
//	printf("%d\n", sizeof(short));		//2
//	printf("%d\n", sizeof(int));		//4
//	printf("%d\n", sizeof(long));		//可以是4也可以是8
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));		//4
//	printf("%d\n", sizeof(double));		//8
//	return 0;
//}

//bit - 比特币					计算机是硬件--通电
//byte - 字节(八个比特位)		正电 负电
//kb	 1024个字节				 1     0
//mb	1024个kb				一个1或者一个0就是比特位
//gb	1024个mb					10进制	0 1 2 3 4 5 6 7 8 9 
//tb	1024个gb					2进制	0 1 
//pb	1024个tb					8进制	0 1 2 3 4 5 6 7
//123 = 1*10^2 + 2*10^1 + 3*10^0
//010 = 0*2^2 + 1*2^1 + 0*2^0 = 0+2+0 = 2
//一个short是16个字节 可以表示的最大 2^16-1 = 65535 
// 'short int' 比 'int' 更省空间


//int main()
//{
//	short age = 20;//向内存申请2个字节 = 16bit位,用来存放20
//	float weight = 95.6;//向内存申请4个字节用来存储
//	return 0;
//}

//C语言标准规定
//sizeof(long) >=sizeof(int)就够了






//变量和常量
//int num2 = 20;//全局变量-定义在代码块({})之外的变量
//int main()
//{
//	int num2 = 10;//局部变量 - 在代码块之中的变量
//	printf("%d\n", num2);
//	return 0;			//局部变量和全局变量名字不要相同
//						//局部变量和全局变量名字相同时,局部变量优先
//}

//int main()
//{
//		int a = 10;
//	printf("%d\n", a);
//	return 0;
//}

//变量的使用
//int main()
//{
//	//计算两个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据 - scanf
//	scanf("%d%d", &num1, &num2);
//	//int num1 = 0; 有4个自己的空间 &xxx 把xxx的位置放在前面
//	//C语言语法规定, 变量要定义在当前代码块的最前面
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	//局部变量的作用域,所在的代码块里面都可以用用
//	int num = 0;
//	{
//		printf("%d\n", num);
//	}
//	return 0;
//}
//int global = 2023;


//void test()
//{
//	printf("%d\n", global);
//}
//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;
//}
//int main()
//{	//全局变量需要在使用的文件里声明，才能使用整个工程的变量
//	extern int global_char;
//	printf("global_char = %d\n", global_char);
//
//	return 0;
//}

// 变量生命周期		局部变量:进入括号开始，出括号结束
//					全局变量:整个程序的生命周期