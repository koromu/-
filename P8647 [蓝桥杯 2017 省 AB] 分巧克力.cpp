//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//const int N = 100010;
//int a[N], b[N];//分别记录长度和宽度
//
//int n, m;//块数和人数
//
//bool check(int x)
//{
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{//计算出每一块巧克力可以分给多少个人
//		count += (a[i] / x) * (b[i] / x);//完整巧克力
//		if (count >= m) return 1;
//	}
//	return (count >= m);
//}
////a[i] / x表示长的方向上可以切出多少块巧克力, b[i] / x表示宽的方向上可以切出多少块巧克力
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		scanf("%d%d", &a[i], &b[i]);
//	int l = 0, r = 100001;//二分查找范围内的数据, 长和宽都是十的五次方,如果是一个人, 那么答案就是十的五次方 
//	while (l < r)
//	{
//		int mid = (l + r + 1) >> 1;
//		if (check(mid))
//			l = mid;//mid可能是答案
//		else r = mid - 1;//说明mid在答案的右边, 所以mid不是答案, 可以用mid - 1
//	}
//	cout << l;
//
//	return 0;
//}