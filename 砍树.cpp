//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//typedef long long ll;
//const int  N = 1000010;
//
//int h[N];
//ll n, m;
//
//bool cmp(int x, int y) { return x > y; };
//
//bool check(int x)
//{
//	int cnt = 0, i;
//	for (i = 0; i < n ; i++)
//	{
//		if (h[i] > x) cnt += (h[i] - x);
//	}
//	if (cnt >= m) return true;//大于等于进入if
//	return false;//小于进入下一个
//}
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 0; i < n; i++) scanf("%d", &h[i]);
//
//	sort(h, h + n, cmp);//从大到小排序
//
//	int l = 0, r = 400010;
//	while (l < r)
//	{
//		int mid = l + r >> 1;
//		if (check(mid)) 
//			l = mid + 1;//x大于等于答案, 说明答案在mid的左侧
//		else r = mid;
//	}
//	printf("%d", l + r >> 1);
//	return 0;
//}
