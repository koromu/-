//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		int a[200010];
//		int n; cin >> n;
//		for (int i = 1; i <= n; i++)cin >> a[i];
//		int f; cin >> f;
//		while (f--)
//		{
//			int l, r; cin >> l >> r;
//			bool flag = true;
//			for (int i = l; i <= r && flag; i++)
//				for (int j = i + 1; j <= r && flag; j++)
//				{
//					if (a[i] != a[j]) {
//						cout << i << ' ' << j << endl;
//						flag = false;
//					}
//				}
//			if(flag) cout << "-1 -1" << endl;
//		}
//	}
//
//	return 0;
//}