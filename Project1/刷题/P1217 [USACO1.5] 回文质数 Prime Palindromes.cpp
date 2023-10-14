//using namespace std;
//#include <iostream>
//#include <vector>
//typedef long long ll;
//
//
//int jud2(ll i)
//{//找到奇数
//	if (i % 2 != 0)
//		return 1;
//	else 
//		return 0;
//}
//
//int jud3(ll i)
//{//找到素数
//	//找到奇数的中间数+1(以防万一),用这个数除以从1 - 中间数, 不被整除就是素数
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
//{//判断位数
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
//{//判断是否回文, 回文数可以把一个数倒过来判断是否相等
//	int temp1 = 0,temp2 = i, c = jud5(i);//c记录位数
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
//	//先找素数, 再判断是否回文
//	//素数是奇数 奇数不一定是素数
//	ll a, b;
//	cin >> a >> b;
//	for (ll i = a; i < b; i++)//从a-b
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