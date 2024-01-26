//#include <iostream>
//using namespace std;
//
//const int N = 100010;
//int q[N];
//bool b[N];
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//		cin >> q[i];
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 2; j < q[i]; j++)
//		{
//			if (q[i] % j == 0)
//			{
//				if (q[i] == 1 || q[i] == 2 || q[i] == 3 || q[i] == 5 || q[i] == 7)
//				{
//					b[i] = 0;
//					break;
//				}
//				b[i] = 1;
//				break;
//			}
//
//		}
//	}
//	for (int i = 0; i < n; i++)
//		if (b[i] == 0)
//			cout << q[i] <<' ';
//	return 0; 
//}