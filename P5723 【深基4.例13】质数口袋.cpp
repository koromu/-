//#include <iostream>
//using namespace std;
//
//
//int jud3(int i)
//{//�ҵ�����
//	//�ҵ��������м���+1(�Է���һ),����������Դ�1 - �м���, ����������������
//	int mid = i / 2 + 1;
//	for (int j = 2; j < mid; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int l,c1=0,c2 = 0; cin >> l;
//	for (int i = 2;; i++)
//	{
//		if (jud3(i))
//		{
//			c2 += i;
//			if (c2 <= l)
//			{
//				cout << i << endl;
//				c1++;
//			}
//			else break;
//		}
//	}
//	cout << c1;
//
//	return 0;
//}