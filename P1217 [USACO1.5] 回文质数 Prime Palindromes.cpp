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

//#include <iostream>
//#include <math.h>
//using namespace std;
//
////���� : ��������һ����11�ı���, ���ҳ���11, ż��λ��һ�����ǻ�������, ż��һ����������
//
////�������ж�λ��, ���жϻ�����, ���ж��ǲ���11�ı���, ���ж��ǲ���ż��, ���ж��ǲ�������
//
////�ж�λ��
//bool check_w(int x)
//{
//	if ((x >= 1000 && x <= 9999) || (x >= 100000 && x <= 999999) || (x >= 10000000 && x <= 99999999))
//		return false;
//	return true;
//}
//
//bool check_h(int x)
//{
//	int arr[9], i = 0;
//	while (x > 0)
//	{
//		arr[i] = x % 10;//������Ǹ�λ, ���ұ��ǵ�λ
//		x /= 10;
//		i++;//���õ���i�� λ��
//	}
//	//��ÿһλ�ŵ�һ��������
//	for (int j = 0, m = i-1; j < m; j++, m--)
//	{
//		if (arr[j] != arr[m])
//			return false;
//	}
//	return true;//�о�����
//}
//
//bool check_z(long long x)
//{
//	if (x == 2)return true;
//	for (int i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)return false;
//	}
//	return true;
//}
//int main()
//{
//	int l, r;
//	cin >> l >> r;
//	if (l <= 2) printf("2\n");
//	if (l % 2 == 0)
//		l++;
//	for (int i = l; i <= r; i += 2)
//	{
//		if (check_w(i))
//			if (check_h(i))
//				if (check_z(i))
//					printf("%d\n", i);
//	}
//	return 0;
//}