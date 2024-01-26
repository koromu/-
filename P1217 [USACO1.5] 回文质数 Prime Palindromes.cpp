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

//#include <iostream>
//#include <math.h>
//using namespace std;
//
////规律 : 回文质数一定是11的倍数, 而且除了11, 偶数位的一定不是回文质数, 偶数一定不是质数
//
////所以先判断位数, 再判断回文数, 再判断是不是11的倍数, 再判断是不是偶数, 再判断是不是奇数
//
////判断位数
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
//		arr[i] = x % 10;//最左边是高位, 最右边是低位
//		x /= 10;
//		i++;//最后得到的i是 位数
//	}
//	//把每一位放到一个数组中
//	for (int j = 0, m = i-1; j < m; j++, m--)
//	{
//		if (arr[j] != arr[m])
//			return false;
//	}
//	return true;//感觉可以
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