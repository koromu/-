//#include <iostream>
//
//using namespace std;
//
//const int N = 10;
//int a[N] = { 1,1,1,1,1,1,1,1,1,1 };
//int main()
//{
//	int n; cin >> n;
//	while (n--)
//	{
//		int a[N] = { 1,1,1,1,1,1,1,1,1,1 };
//		int m, ans=0; cin >> m;
//		for (int i = 0; i < m; i++)
//			cin >> a[i];
//		for (int i = 0; i < m; i++)
//		{
//			a[i] += 1;
//			ans = max(a[0] * a[1] * a[2] * a[3] * a[4] * a[5] * a[6] * a[7] * a[8] * a[9], ans);
//			a[i]--;
//		}
//		cout << ans << endl;
//	}
//
//
//	return 0;
//}
