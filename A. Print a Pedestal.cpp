//#include <iostream>
//
//using namespace std;
//
//
//int main()
//{
//	int t; cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n; cin >> n;
//		int three_mid = n / 3;
//		int f = three_mid + 1, s = three_mid, t = three_mid - 1;
//		if (f + s + t != n)
//		{
//			f++;
//			if (f + s + t != n)
//				s++;
//		}
//		cout << s << ' ' << f << ' ' << t << endl;
//	}
//	return 0;
//}