//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//typedef long long ll;
//using namespace std;
//const int N = 100010;
//ll s[N], smod[N];
//ll n, k, c;
//
//int main()
//{
//	//n个数字
//	cin >> n >> k;
//	for (int i = 1,tmp; i <= n; i++)
//	{
//		scanf("%d", &tmp);//存原数组
//		s[i] = s[i - 1] + tmp;
//	}
////计算前缀和
//	smod[0] = 1;//余数为0的数组本身可以成为一个区间
//	for (int i = 1; i <= n; i++)//为什么从0开始
//		smod[s[i] % k]++;//什么意思?
//		//计算这个余数是这个的集合有多少个, 然后两两组合
//	for (int i = 0; i < k; i++) c += (smod[i] * (smod[i] - 1)) / 2;//排列组合计算区间数
//	cout << c;
//	return 0;
//}