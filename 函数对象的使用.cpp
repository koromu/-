#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

#include <set>

using namespace std;
//set �������Զ����������, ��������Ҳ�ǿ��Ե�


//���������������:  �ƶ��˶�Ԫ������Ĺ���

//�����Լ�ȥ�ƶ����� -- �Լ�ȥʵ��α����������,����С�ڷ��ŵ�����

//�洢ѧ��������
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


//��Ҫ��������,��Ҫ��

//α������
class Stufunc
{
public:
	//�Ƚ�����ѧ��ѧ��
	 bool operator() (const CStudent& s1, const CStudent& s2)
	
	 const	{
			return s1.m_id < s2.m_id;
			}

};


//����

//int main()
//{
//set<int, less<int>> s1;//�����
//set<int, greater<int>> s2;//�����
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

//����һ������,���洢ѧ������Ϣ


//ʲô��less<> , ʲô��greater<>

//less<> ,greater<> // ��������ģ����

//α���� functor

//���������ֽ�������ָ��,
//typedef int (*FUNC)(int, int); //�Ѻ���ָ��������������Ϊ FUNC
//
////����λ����ָ���ʹ��
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
