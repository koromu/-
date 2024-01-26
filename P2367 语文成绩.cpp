//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//const int N = 1000010;
//int a[N], s[N];
//int n, p;
//int x, y, z;
//
//int main()
//{
//	scanf("%d%d", &n, &p);
//	for (int i = 1; i <= n; i++)
//		scanf("%d", &a[i]);
//
//	for (int i = 1; i <= n; i++)
//		s[i] = a[i] - a[i-1] ;
//	while (p--)
//	{
//		scanf("%d%d%d", &x, &y, &z);
//		s[x] += z, s[y+1] -= z;
//	}
//	for (int i = 1; i <= n; i++) a[i] = s[i] + a[i-1];
//	sort(a+1, a + n + 1);
//	cout << a[1];
//	return 0;
//}