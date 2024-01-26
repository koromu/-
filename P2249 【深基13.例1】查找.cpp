#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//const int N = 1000010;
//
//int a[N];
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 0; i < n; i++)scanf("%d", &a[i]);
//	while (m--)
//	{
//		int l = 0, r = n; long long q; cin >> q;
//		while (l < r)
//		{
//			int mid = l + r >> 1;
//			if (a[mid] < q) l = mid+1;
//			else r = mid;
//		}
//		if (a[l] == q) printf("%d ", r + 1);
//		else printf("-1 ");//-1后面也要空格
//	}
//	return 0;
//}
////11 3
////1 3 3 3 5 7 9 11 13 15 15
////1 15 8