//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//const int N = 100010;
//int a[N], s[N];
//int n, m;
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
//	
//	for (int i = 1; i <= n; i++) s[i] = s[i - 1] + a[i];//初始化前缀和
//	while (m--)
//	{
//		int l, r;
//		scanf("%d%d", &l, &r);
//		printf("%d\n", s[r] - s[l-1]);
//	}
//
//
//
//	return 0;
//}