#include <iostream>

using namespace std;

//int f(int a, int b = 20, int c = 30)
//{
//	return a + b + c;
//}

//int main()
//{
//	cout << f(10, 30) << endl; //70 = 10 + 30 + 30 , 明显,以我们传入的数据为主,
//	
//	//注意 : 
//	// 1. 如果某个位置,那么这个参数从左到右都需要有默认值 即b,c可以有默认值, 但不能只有b有默认值
//
//	// 2. 函数参数的默认值可以在声明中设置, 但是在声明中设置默认值的话,实现就不能再设置默认值了,会导致重定义默认值, 因为会产生歧义 - 声明和实现只能有一个设置默认参数.防止歧义
//
//
//	return  0;
//}


//函数占位参数
//类型 函数名(typename1 形参, typename2 )
//{
//	函数体
//}
//
//int main()
//{
//	函数名(参数1,参数2)//参数2也是必须的,而且符合typename2
//
//	return 0;
//}

//注意 : 函数占位参数也可以有默认参数哦  - typename2 = 默认值;


//函数重载
//条件
//1. 同一作用域下
//2. 函数名称相同
//3. 函数参数类型不同 或者 个数不同 或者 顺序不同
//4. 返回值不能作为函数重载的条件

//void f1()
//{
//		cout << "f1"<<endl;
//}
//
//void f1(int a,int b)
//{
//	cout << "f1的重载int" << endl;
//}
//
//void f1(double a, int b)
//{
//	cout << "f1的重载double,int" << endl;
//}
//void f1(int a, double b)
//{
//	cout << "f1的重载int.double" << endl;
//}
//
//int main()
//{
//	f1();//调用第一个
//	f1(6 , 3.0);//调用第三个
//	f1(3.0 , 6);//调用第四个
//	return 0;
//}

//5. 引用作为重载的条件 - 利用const
//void f(int &a)
//	{
//	cout << "void f(int &a)的调用" << endl;
//	}
//
//void f(const int& a)//const 
//{
//	cout << "void f(const int& a)的调用" << endl;
//}
////6. 函数重载和默认参数 - 写函数重载尽量不设置默认参数
//void f(int a)
//{
//	cout << " void f(int a)" << endl;
//}
//
//void f(int a, int b = 10)
//{
//	cout << "void f(int a, int b = 10)" << endl;
//}
//int main()
//{
//	int a = 0;
//	//f(a);//a是变量,int a 和int &a 和 int a ,int b=10冲突,出现二义性
//	//f(10);//10是一个常量,引用能引用的是堆上,或者栈上
//	
//
//	return 0;
//}

//内联函数


