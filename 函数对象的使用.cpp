#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <set>

using namespace std;
//set 容器是自动进行排序的, 降序排序也是可以的


//函数对象的作用是:  制定了对元素排序的规则

//可以自己去制定规则 -- 自己去实现伪函数的内容,进行小于符号的重载

//存储学生的内容
class CStudent
{
public:
	CStudent(int id, string name)
	{
		m_id = id;
		m_name = name;
	}
	int m_id;
	string m_name;

};


//需要进行排序,需要类

//伪函数类
class Stufunc
{
public:
	//比较两个学生学号
	 bool operator() (const CStudent& s1, const CStudent& s2)
	
	 const	{
			return s1.m_id < s2.m_id;
			}

};


//方法

//int main()
//{
//set<int, less<int>> s1;//升序的
//set<int, greater<int>> s2;//降序的
//
//s1.insert(1);
//s1.insert(2);
//s1.insert(6);
//s1.insert(5);
//
//s2.insert(1);
//s2.insert(2);
//s2.insert(6);
//s2.insert(5);
//
//for (auto it = s1.begin(); it != s1.end(); it++)
//{
//	cout << *it << " ";
//}//1256
//cout << endl;
//
//for (auto it = s2.begin(); it != s2.end(); it++)
//{
//	cout << *it << " ";
//}//6521
//cout << endl;
//
//set<CStudent, Stufunc> stu;
//
//stu.insert(CStudent(10, "nihao"));
//stu.insert(CStudent(23, "good"));
//stu.insert(CStudent(18, "c"));
//stu.insert(CStudent(1, "python"));
//
//for (auto it = stu.begin(); it != stu.end(); it++)
//{
//	cout << it->m_id << " ";
//}
//
//	return 0;
//}

//定义一个容器,来存储学生的信息


//什么是less<> , 什么是greater<>

//less<> ,greater<> // 这两个是模板类

//伪函数 functor

//函数的名字叫做函数指针,
//typedef int (*FUNC)(int, int); //把函数指针类型重新命名为 FUNC
//
////以下位函数指针的使用
//
//class cal
//{
// private:
//		int madd(int x, int y)
//		{
//			cout << "madd : ";
//			return x + y;
//		}
//
//		int msub(int x, int y)
//		{
//			cout << "msub : ";
//			return x - y;
//		}
//
//		int mmult(int x, int y)
//		{
//			cout << "mmult : ";
//			return x * y;
//		}
//
//		int mdiv(int x, int y)
//		{
//			cout << "mdiv : ";
//			return x / y;
//		}
//
//
//
//public:
//		int mmain(int x, int y,FUNC f)
//		{
//			return  f(x, y);
//		}
//};
//
//
//int main()
//{
//	cal c1;
//	cout << c1.mmain(10, 50, madd) << endl;
//	return 0;
//}
//
