//#include <iostream>
//
//using namespace std;
//
//const int N = 30;
//int n, ans[N], c;
////每一行只有一个皇后
//bool col[N], dg[N], udg[N];
////用于判断是否有皇后
//
//void dfs(int x)
//{
//	if (x == n)
//	{
//		c++;
//		//if (c <= 2) 
//		//{
//			for (int i = 0; i < n; i++)//从第一行开始, 输出每一行的棋子在哪一列
//				cout << ans[i] << " ";
//			cout << endl;
//		//}
//		return;
//	}
//
//	for (int y = 0; y < n; y++)//这个y是列, x是行
//	{
//		if (!col[y] && !dg[y + x] && !udg[y - x + n])
//		{
//			ans[y] = x + 1;
//			col[y] = dg[y + x] = udg[y - x + n] = true;
//			dfs(x + 1);
//			col[y] = dg[y + x] = udg[y - x + n] = false;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n;
//	dfs(0);
//	cout << c;
//	return 0;
//}
