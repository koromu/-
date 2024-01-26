//#include <iostream>
//
//using namespace std;
//
//int q[30][30];
//
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		q[i][1] = 1;//第i个数组的第1个,也就是每一行
//		q[i][i] = 1;
//	}
//	for(int i = 1 ; i <= n ; i ++ )
//	{
//		for (int j = 2; j <=i; j++)
//		{	
//			q[i][j] = q[i-1][j] + q[i-1][j-1];
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//			printf("%d ", q[i][j]);
//		cout << endl;
//	}
//	return 0;
//}
//
