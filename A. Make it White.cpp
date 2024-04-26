//#include <iostream>
//#include <string>
//using namespace std;
//
//const int N = 11;
//
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		int n; cin >> n;
//		string a;
//		cin >> a;
//		int l = 99, r = -99;
//		for (int i = 0; i < n; i++)
//			if (a[i] == 'B')
//			{
//				l = i + 1;
//				break;
//			}
//		for (int i = n - 1; i >= 0; i--)
//			if (a[i] == 'B')
//			{
//				r = i + 1;
//				break;
//			}
//		cout << r - l + 1 << endl;
//	}
//	return 0;
//}