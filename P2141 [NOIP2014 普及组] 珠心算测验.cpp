#include <iostream>
#include <set>
using namespace std;

//����Ҫȥ��, �������Ǹ�����!!
int main()
{
	int arr[200] = {0};
	int n,count = 0; cin >> n; // count ¼�ж��ٸ���
	set<int> s1;//�����е���������ͬ
	for (int i = 0; i < n; i++)
	{
		int temp; cin >> temp;
		s1.insert(temp);
	}//����˳�����е�����
	//һ��ȥ������
	auto it1 = s1.begin();
	auto it4 = s1.end();
	auto it5 = s1.end();//it2�ľ�����
	it4--;//it1�ľ�����
	for (int m = 0 ; m < s1.size()-2; m++)//m��¼1ָ���λ��
	{
		auto it2 = it1;
		it2++;
		auto it3 = it2;
		it3++;
		for (int i = 0; i < s1.size() - 1; i++)//i��¼2ָ���λ��
		{
			int c = 0;
			c = *it1 + *it2;
			for (; *it3 <= c&& it3!=s1.end(); it3++)
			{//�����������������, ���С��c�ͼ�������, �����Ȼ��ߴ���c���˳�
				if (*it3 == c)
					if (arr[*it3] == 0)
					{
						arr[*it3] = 1;
						count++;
					}
				if (it3 == --s1.end())
					break;
			}
			it2++;
			if (it2 == it5)
				break;
		}
		it1++;

		if (it1 == it4)
			break;
	}
	cout << count;
	return 0;
}

//#include <iostream>
//#include <set>
//using namespace std;
//
//
//int main()
//{
//	int n, count = 0; cin >> n; // count ¼�ж��ٸ���
//	set<int> s1;//�����е���������ͬ
//	for (int i = 0; i < n; i++)
//	{
//		int temp; cin >> temp;
//		s1.insert(temp);
//	}//����˳�����е�����
//	//һ��ȥ������
//	auto it1 = s1.begin();
//	auto it4 = s1.end();
//	auto it5 = s1.end();//it2�ľ�����
//	it4--;//it1�ľ�����
//	for (int m = 0; m < s1.size() - 2; m++)//m��¼1ָ���λ��
//	{
//		auto it2 = it1;
//		it2++;
//		auto it3 = it2;
//		it3++;
//		for (int i = 0; i < s1.size() - 1; i++)//i��¼2ָ���λ��
//		{
//			int c = 0;
//			c = *it1 + *it2;
//			for (; *it3 <= c && it3 != s1.end(); it3++)
//			{//�����������������, ���С��c�ͼ�������, �����Ȼ��ߴ���c���˳�
//				if (*it3 == c)
//					count++;
//				if (it3 == --s1.end())
//					break;
//			}
//			it2++;
//			if (it2 == it5)
//				break;
//		}
//		it1++;
//
//		if (it1 == it4)
//			break;
//	}
//	cout << count;
//	return 0;
//}//40