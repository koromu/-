//#include <iostream>
//
//using namespace std;
//
//int a[10] = { 1, 10, 100, 1000, 10000, 100000, 1000000, 10000000, 100000000, 1000000000 };
//
//int main()
//{
//	int t; cin >> t;
//
//	while (t--)
//	{
//		int n; cin >> n;
//		for (int i = 0; i < 10; i++)
//		{
//			if (n < a[i])
//			{
//			cout << n - a[i - 1]<< endl;
//				break;
//			}
//			else if (n == a[i])
//			{
//				cout << n - a[i] << endl;
//				break;
//			}
//		}
//	}
//	return 0;
//}