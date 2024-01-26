#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef unsigned long long ll;
//const int N = 200010;
//
//int main()
//{
//	
//	int t; scanf("%d", &t);
//	while (t--)
//	{
//		int h[N];
//		int n, f, a, b,ans = 0;
//
//		scanf("%d%d%d%d", &n, &f, &a, &b);
//		//计算每两个时间的间隔, 计算如果间隔时间消耗电量大于开关机消耗的电量, 那么就关机开机, 更新电量
//		if (n > 1) {
//			scanf("%d", &h[0]);
//			for (int i = 1; i < n; i++)
//			{
//				scanf("%d", &h[i]);
//				h[i - 1] = h[i] - h[i - 1];//预处理好间隔数组
//			}
//		}
//		else if (n == 1)
//		{
//			scanf("%d", &h[0]);
//			ll ah = a * h[0];
//			if (/*2 **/ b / h[0] <= a)
//			{
//				if (f > /*2 **/ b)
//				{
//					puts("YES");
//					continue;
//				}
//				else puts("NO");
//				continue;
//			}
//			else//如果开关机大于间隔耗电
//			{
//				if (f > ah)
//				{
//					puts("YES");
//					continue;
//				}
//				else //如果当前电量不支持待机
//				{
//					puts("NO");
//					continue;
//				}
//			}
//		}
//		int flag = 1;
//		for (int i = 0; i < n-1; i++)
//		{///遍历每一个间隔
//			ll ah = static_cast<ll>(a) * h[i];
//			if (/*2 **/ b / h[i] <= a)
//			{//如果间隔耗电大于开关机
//				if (f > /*2 **/ b)//如果当前电量大于开关机电量
//				{
//					ans += b;
//					flag++;
//					continue;
//				}
//				else //如果当前电量不支持开关机
//				{
//					puts("NO");
//					break;//退出循环
//				}
//			}
//			else//如果开关机大于间隔耗电
//			{
//				if (f / h[i] > a)
//				{
//					ans += a * h[i];
//					continue;
//				}
//				else //如果当前电量不支持待机
//				{
//					puts("NO");
//					break;//退出循环
//				}
//			}
//		}
//		if (ans == f)//把所有信息回复完毕则yes, 否则在上面no
//			puts("YES");
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//typedef long long ll;
//using namespace std;
//const int N = 2e5+10;
//
//ll h[N];
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		ll n, f, a, b;
//		ll ans = 0;
//		cin >> n >> f >> a >> b;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> h[i];
//			h[i] = h[i] - h[i-1];
//			ans += min(b, a * h[i]);
//		}
//		if (ans < f)puts("YES");
//		else puts("NO");
//	}
//	return 0;
//}
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  NO
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//NO		  NO
//YES		  YES
//YES		  YES
//NO		  NO
//NO		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  NO
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//YES		  YES
//NO		  NO
//YES		  YES
//YES		  YES
//Y...	  YES...
//
//2 75 6 5
//1 2
//2 29 7 2
//2 5
//4 17 6 2
//2 7 8 9
//3 11 9 6
//6 8 10
//5 63 3 9
//1 5 7 8 10
//3 34 8 6
//1 5 10
//2 45 1 7
//4 7
//1 4 5 4
//5
//5 21 5 1
//1 2 3 5 6
//2 89 9 7
//2 6
//2 68 3 5
//2 4
//5 94 8 4
//1 2 3 9 10
//1 92 10 7
//7
//5 67 7 8
//1 3 4 6 10
//3 59 3 2
//2 4 5
//5 79 4 7
//2 5 8 9 10
//4 92 10 7
//1 8 9 10
//1 73 9 5
//1
//5 55 8 8
//2 5 7 8 10
//1 69 8 4
//4
//3 14 5 6
//2 4 6
//3 53 2 7
//1 5 10
//3 5 10 4
//2 7 10
//3 40 3 9
//3 6 10
//2 25 9 2
//3 9
//1 76 5 7
//10
//3 27 10 2
//4 6 9
//5 1 8 9
//3 5 7 8 10
//3 68 7 7
//6 7 ...