#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//typedef pair<int, int > pii;
//
//
//
////读入一堆时间, 然后排序, 计算下一个闹钟响起之前, 能睡多久
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		vector<pii> v1 = {};
//		int n, H, M; scanf("%d%d%d", &n, &H, &M);
//		for (int i = 0; i < n; i++)
//		{
//			int a, b; scanf("%d%d", &a, &b);
//			v1.push_back({ a,b });
//		}
//
//		sort(v1.begin(), v1.end());//从小到大
//		int ans_h = 25, ans_m = 61;
//		for (int i = 0; i < n; i++)
//		{
//			int h = v1[i].first, m = v1[i].second;
//			if (H <= h)
//			{
//				if (h - H < ans_h)
//				{
//					ans_h = h - H;
//					if (M <= m)
//					{
//						ans_m = M - m;
//					}
//					else
//					{
//						ans_h -= 1;
//						ans_m = 60 + m - M;
//					}
//				}
//				else continue;
//			}
//			else
//			{
//				if (h + 24- H < ans_h) 
//				{
//					ans_h = h + 24 - H;
//					if (M < m)
//					{
//						ans_m = M - m;
//					}
//					else
//					{
//						ans_h -= 1;
//						ans_m = 60 + m - M;
//					}
//				}
//				else continue;
//			}
//		}
//		printf("%d %d\n", ans_h, ans_m);
//	}
//
//	return 0;
//}
