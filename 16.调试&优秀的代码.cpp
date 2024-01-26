#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>

//拒绝迷信式调试(是在下了!)

//调试 : debuging/Debug 是发现和减少计算机程序或电子仪器设备中的程序错误的一个过程

//1.发现程序错误的存在
//2.以隔离,消除等方式对错误进行定位
//3.确定错误产生的原因
//3.提出纠正错误的解决方法
//4.对程序错误予以改正,重新测试

//debug(调试版本), release(发布版本)
//release是没有调试信息的
//常用的快捷键

//F5:启动调试
//F9创建断点和取消断点,在想停止下来的地方设置断点.
//F10逐语句,一步一步
//F11可以让我们进入库函数中
//ctrl+F5 
//Fn - 辅助快捷键

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//
//	//赋值
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d",  & arr[i]);
//	}
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//void test(int a[])
//{
//	;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	test(arr);
//
//	return 0;
//}

//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//int main()
//{
//	test();
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//}

//调试过程中查看程序当前信息
//1.监视
//2.监视窗口,在内函数中传入的是首元素的地址,所以监视的时候得到第一个元素 ,所以可以用  元素,个数  这样的到的就是输入个数的元素
//3.自动窗口(不方便)
//4.内存(左边是地址 中间是数值 右边是推断内容,字符可以好推断一点)
//5.查看汇编
//6.查看寄存器


//数据结构中的栈 压栈 出栈
// 从下往上堆, 从上往下拿走

//实例1
//求1 到 n 的阶乘的和


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (j = 1; j <= n; j++)
//	{
//		int ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}//输入3得到15?经过调试得知是ret的值的问题
//
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//这两个局部数据放在内存的栈区中:
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;//越界访问,发现在改变arr[12]是i变成0了
//		//查看地址发现,i 和 arr[12]的地址相同
//		printf("hehe\n");
//	}
//	return 0;
//}

//1.栈区内存的使用习惯是
//先使用高地址处的空间,
//再使用低地址处的空间.
//2.数组随着下标的增长地址是由低到高变化的.
//3.如果i在arr之前定义先使用高地址, 后从低地址向高地址访问数组,甚至越界,只要之间有适当的空间,就有可能会导致死循环.(vs2022是隔两个单元)
// 编译器再循环检测不到呢．
//ｃ陷阱与缺陷

//优秀的代码!!!
  //coding技巧
//使用assert
//尽量使用const
//养成良好的编码风格
//避免编码的陷阱

//模拟strcpy库函数

//void my_strcpy(char* dest, char* scr)
//{
//	while (*scr != '\0')
//	{
//		*dest = *scr;
//		dest++;
//		scr++;
//	}//少了一个斜杠0
//	*dest = *scr;
//}


//char* my_strcpy(char* dest, const char* scr)//const对象不能直接修改, 可以用指针取地址,再修改
////const修饰指针变量->	1.const放在星号左边const int* p, 这时修饰的是"*p". (int const* p也是一样的)
////					2.const放在星号右边int * const p, 这里修饰的是p(p指向的对象是可以通过p来改变的, 但是不能修改p变量本身的值),
//// 
//// 总结: 在星号左边时:不能修改p指向对象的值, p的值可以修改(限制的是*p)
////	   在星号右边时:不能修改p本身的值 , p指向的对象的值可以修改(限制的是p)
//{
// char* ret = dest;//目标dest的内容被改变了,最后返回首地址,得到的就是新的目标
//	//断言
//	assert(scr != NULL);//需要头文件#include <assert.h>, 为假是断言失败,报错.
//	assert(dest != NULL);
//	while (*dest++ = *scr++)//在判断中赋值了斜杠0, 然后得到0 是否退出了
//	{
//		;
//	}
// return ret;
//}
//返回值应该是char* ?  :是为了实现链式访问

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "nihao";
//	//strcpy在拷贝字符串的时候,会把源字符串中的\0也拷贝进去
//  ret = my_strcpy(arr1, arr2);//传入的是指针,有可能还空指针.如果是空指针
//
//	printf("%s\n", ret);
//	return 0;
//}

//int my_strlen(const char* str)//这样就不能改变*p也就是改变原值 只实现功能
//{
//	int count = 0;
//	assert(str);//为假是就报错
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "nihao good";//得到'\0'之前有10个字符
//	int len = my_strlen(arr);//此处是小权限,没有const ,放到上面一个函数中参数是const,权限放大了.是允许的.
//	printf("%d\n", len);
//
//	return 0;
//}


//错误类
//1.编译错误 - 不符合语法规则,语法错误,在编译期间检查出来的.
//2.链接型错误 - 想引用一个函数,结果有都没有这个函数 就是链接错误(搜索crtl + f)(不存在/ 写错了)
// 文件 -> 编译 -> 链接 -> 可执行程序 
//3.运行时错误 - 调试解决

//总结错误