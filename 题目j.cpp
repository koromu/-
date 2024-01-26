//#include <iostream>
//
//using namespace std;
//
//const int N = 100010;
//
//int b[N];//存放图书
//int da[N];//记录每本书读完的日子
//int m, n;
//
//int main()
//{
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++)
//		cin >> b[i];
//
//	for (int i = 0; i < n; i++)
//	{
//		//n天的读书计划
//		int tmp1, tmp2; cin >> tmp1 >> tmp2;
//		if (b[tmp1] <= 0) continue;
//		b[tmp1] -= tmp2;
//		if (b[tmp1] <= 0)da[tmp1] = i+1;
//	}
//
//	for (int i = 1; i <= m; i++)
//	{
//		if (b[i] <= 0)
//			cout << da[i] << " ";
//		else cout << "-1 ";
//	}
//	return 0;
//}
////4 5
////1 2 3 4
////2 1
////1 1
////3 4
////2 1
////1 3