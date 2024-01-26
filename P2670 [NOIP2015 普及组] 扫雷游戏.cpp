//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//const int N = 110, M = 110;
//char q[N][M];
//int c[N][M];
//string s;
//int count(int x, int y)
//{
//	return c[x - 1][y - 1] + c[x - 1][y] + c[x][y - 1] + c[x + 1][y] + c[x][y + 1] + c[x + 1][y + 1] + c[x - 1][y + 1] + c[x + 1][y - 1];
//}
//
//int main()
//{
//	int n, m; cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s;
//		for (int j = 1, k = 0; j <= m; j++)
//		{
//
//			q[i][j] = s[k++];
//			if (q[i][j] == '*')
//				c[i][j] = 1;
//			else
//				c[i][j] = 0;
//		}//c数组全变成了有雷即是1, 没雷就是0
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (q[i][j] == '*')
//				cout << '*';
//			else cout << count(i, j);
//		}
//		cout << endl;
//	}
//
//
//
//	return 0;
//}