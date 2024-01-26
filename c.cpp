//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <math.h>
//
//using namespace std;
//typedef long long ll;
//const int N = 200010;
//
//int main()
//{
//	///能否变成一个数的平方
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n; scanf("%d", &n);
//		ll c = 0;
//		for (int i = 0; i < n; i++)
//		{
//			ll tmp = 0; scanf("%lld", &tmp);
//			c += tmp;
//		}
//		//判断是否可以被开方
//		//if (c == 1)
//		//{
//		//	puts("No");
//		//	continue;
//		//}
//		ll l = 0, r = c;
//		while (l < r)
//		{
//			ll mid = l + r >> 1;
//			if (mid * mid< c)
//				l = mid+ 1;
//			else r = mid;
//		}
//		if (l * l == c)
//			puts("YES");
//		else puts("NO");
//	}
//	return 0;
//}
//
////int main()
////{
////	for (int i = 1; i < 1010; i++) {
////		int l = 0, r = i;
////		while (l < r)
////		{
////			ll mid = l + r >> 1;
////			if (mid * mid < i)
////				l = mid + 1;
////			else r = mid;
////		}
////		if (l * l == i) printf("%d YES\n", i);
////		else printf("%d NO\n", i);
////	}
////}
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//
//
//	return 0;
//}