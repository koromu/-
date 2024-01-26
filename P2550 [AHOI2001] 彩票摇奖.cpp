//#include <iostream>
//#include <set>
//#include <vector>
//using namespace std;
//
//
////int main()
////{
////	//七个不同的号码, 直接自动排序!
////	
////	int n; cin >> n;
////	set<int> s0;
////	vector<int> v2;
////	for (int i = 0; i < 7; i++)
////	{
////		int temp; cin >> temp;
////		s0.insert(temp);
////	}//中奖号码, 升序排列
////
////	for (int i = 1; i <= n; i++)
////	{
////		for (int j = 7*(i-1); j < 7*i; j++)
////		{
////			int temp; cin >> temp;
////			v2[j] = temp;
////		}
////	}
////	int arr1[7] = { 0 };//来个数组记录中奖情况 中一个在第一个位置, 7 6 5 4 3 2 1
////	for (int i = 1; i <= n; i++)
////	{
////		int c = 0;
////		for (int j = 7 * (i - 1); j < 7 * i; j++)
////		{
////			//从第一行开始搜索
////				if (s0.count(v2[j]))
////					c++;
////		}
////		if(c-7 >= 0)
////			arr1[c-7]++;
////	}
////	for (int i = 0; i < 7; i++)
////		cout << arr1[i] << ' ';
////	return 0;
////}
//
//int main()
//{
//	//七个不同的号码, 直接自动排序!
//
//	int n; cin >> n;
//	set<int> s0;
//	int v2[7004];
//	for (int i = 0; i < 7; i++)
//	{
//		int temp; cin >> temp;
//		s0.insert(temp);
//	}//中奖号码, 升序排列
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 7 * (i - 1); j < 7 * i; j++)
//		{
//			int temp; cin >> temp;
//			v2[j] = temp;
//		}
//	}
//	int arr1[7] = { 0 };//来个数组记录中奖情况 中一个在第一个位置, 7 6 5 4 3 2 1
//	for (int i = 1; i <= n; i++)
//	{
//		int c = 0;
//		for (int j = 7 * (i - 1); j < 7 * i; j++)
//		{
//			//从第一行开始搜索
//			if (s0.count(v2[j]))
//				c++;
//		}
//		if (c != 0)
//			arr1[c - 1] = arr1[c - 1] + 1;
//	}
//	for (int i = 6; i >= 0; i--)
//		cout << arr1[i] << ' ';
//	return 0;
//}