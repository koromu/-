//using namespace std;
//#include <iostream>
//#include <vector>
//typedef long long ll;
//
//
//int jud2(ll i)
//{//�ҵ�����
//	if (i % 2 != 0)
//		return 1;
//	else 
//		return 0;
//}
//
//int jud3(ll i)
//{//�ҵ�����
//	//�ҵ��������м���+1(�Է���һ),����������Դ�1 - �м���, ����������������
//	ll mid = i / 2 + 1 ;
//	for(int j = 2; j < mid ; j++)
//	{
//		if (i % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int Pow(int x, int y)
//{
//	int temp = 1;
//	for (int i = 0; i < y ; i++)
//	{
//		temp = temp * x;
//	}
//	return temp;
//}
//
//int jud5(int i)
//{//�ж�λ��
//	int c = 0;
//	while (i > 0)
//	{
//		i /= 10;
//		c++;
//	}
//	return c;
//}
//
//int jud4(ll i)
//{//�ж��Ƿ����, ���������԰�һ�����������ж��Ƿ����
//	int temp1 = 0,temp2 = i, c = jud5(i);//c��¼λ��
//	while (temp2 > 0)
//	{
//		temp1 += (temp2 % 10) * Pow(10,c-1);
//		temp2 /= 10;
//		c--;
//	}
//	if (temp1 == i)
//	{
//		return 1;
//	}
//	else return 0;
//
//}
//
//int main()
//{
//	//��������, ���ж��Ƿ����
//	//���������� ������һ��������
//	ll a, b;
//	cin >> a >> b;
//	for (ll i = a; i < b; i++)//��a-b
//	{
//		if (jud2(i))
//		{
//			if (jud3(i))
//			{
//				if (jud4(i))
//				{
//					cout << i << endl;
//				}
//			}
//		}
//	}
//	return 0;
//}