//#include <iostream>
//
//using namespace std;
//
//typedef long long ll;
//const ll mod = 1e9 + 7;
//
//int n, k;
//ll c;
//int main()
//{
//	//һ�εķ�Χ��1 - 6
//	//���εķ�Χ��11- 66
//	//���εķ�Χ��111 - 666
//	//�Ĵεķ�Χ��1111 - 6666
//	//��εķ�Χ��11111 - 66666
//	//���εķ�Χ��111111 - 666666
//	//n��ȷ����Χ��, k�������жϱ�����
//	cin >> n >> k;
//	if (n == 1)
//	{
//		for (int i = 1; i <= 6; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 2)
//	{
//		for (int i = 11; i <= 66; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 3)
//	{
//		for (int i = 111; i <= 666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 4)
//	{
//		for (int i = 1111; i <= 6666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 5)
//	{
//		for (int i = 11111; i <= 66666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 6)
//	{
//		for (int i = 111111; i <= 666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c%mod;
//		return 0;
//	}
//	else if (n == 7)
//	{
//		for (int i = 1111111; i <= 6666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//	else if (n == 8)
//	{
//		for (int i = 11111111; i <= 66666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//	else if (n == 9)
//	{
//		for (int i = 111111111; i <= 666666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//	else
//	{
//		for (int i = 1111111111; i <= 6666666666; i++)
//		{
//			if (i % k == 0)
//			{
//				c++;
//				cout << i << endl;
//			}
//		}
//		cout << c % mod;
//		return 0;
//	}
//}
//
//#include <iostream>
//
//using namespace std;
//typedef long long ll;
//const ll mod = 1e9 + 7;
//int n, k;//Ͷ��n��, 
//int c;
//void dfs(int a, ll b)//ʵ�ʽ�������a - 1 ��i, ������a - 1λ, Ҫ�ﵽnλ, ����Ҫ  a - 1 == n 
//{
//	if (a - 1 == n)//���a == n, ˵���ս������, ���ʱ��û�н��������ѭ��, ���ʱ��b����aλ, ���Ǹ�λ����0
//	{
//		if (b % k == 0)
//		{
//			c++;
//			c %= mod;
//		}
//		return;
//	}
//
//	for (int i = 1; i <= 6; i++)
//	{
//		//����ÿһλ
//		dfs(a + 1, b * 10 + i);//����a+1λ, ��С����һ��ֱ������һλ, Ȼ���λ��1��ʼ����
//	}//����˳����˾��ٸ�λ�ټ�һλ
//}
//
//int main()
//{
//	cin >> n >> k;
//	dfs(1, 0);
//	cout << c;
//}