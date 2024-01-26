//#include <iostream>
//#include <algorithm>
//#include <string>
//#include <vector>
//using namespace std;
//
//string a, b;
//int check(int c)
//{
//	int t = 0, ans = 0;
//	vector<int> v1;
//	for (int i = 0; i < a.size(); i++)if (a[i] == b[c]) 
//	{
//		v1.push_back(i);
//	}
// 	for(int j = 0; j < v1.size();j++)
//	{
//		int res = 0;
//		int tmp = c;
//		bool f1 = false,f2 = true;
//		
//		for (int i = v1[j]; i < a.size(); i++)
//		{
//			if (f1 && c >= tmp)
//				return res;//
//			if (c >= b.size())
//			{
//				c = 0;
//				f1 = true;
//			} 
//			if (a[i] == b[c])
//			{
//				c++;
//				res++;
//				ans = max(res, ans);
//			}
//			else 
//			{
//				f2 = false;
//				res = max(res, ans);
//				c = tmp;
// 				break;
//			}
//		}
//		for (int i = 0; i < v1[j] && f2 && c ; i++)
//		{
//			if (f1 && c >= tmp)
//				return res;
//			if (c >= b.size())
//			{
//				c = 0;
//				f1 = true;
//			}
//			if (a[i] == b[c])
//			{
//				c++;
//				res++;
//				ans = max(res, ans);
//			}
//			else 
//			{
//				res = max(res, ans);
//				c = tmp;
//				break;
//			}
//		}
//	}
//	return ans;
//}
////遍历b字符串的每一个起点, 长度最多是b字符串的长度
////大循环每次确定b字符串的起点, 小循环每次确定a字符串的起点
//int main()
//{
//	cin >> a >> b;
//	if (a.size() < b.size())swap(a, b);
//	int ans = 1;
//    for (int i = 0; i < b.size(); i++)
//	{
//		ans = max(ans, check(i));
//	}
//	cout << ans;
//	return 0;
//}
//
////ABCEFAGADEGKABUVKLM MADJKLUVKL