//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <math.h>
//using namespace std;
//#include <vector>
//const int N = 20010;
//
////需要找到一个降序的字符列表
//struct al{
//	char a;
//	int b;
//}als[N];
//
//bool cmp(al x1, al x2)
//{
//	return x1.a > x2.a;
//}
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		string s; cin >> s; vector<int> v1[20010];
//		v1->push_back(1);
//		for (int i = 0; i < s.size(); i++)
//		{
//			als[i + 1].a = s[i];
//			als[i + 1].b = i;
//		}
//		sort(als + 2, als + s.size() + 1, cmp);
//		int cost = 0, m = 1;
//		for (int i = 2,j = 1; i <= s.size(); i++)
//		{
//			if (als[1].a >= als[i].a)
//			{
//				cost += abs(als[j].a - als[i].a);
//				j = i;
//				m++;
//				v1->push_back(als[i].b+1);
//			}
//		}
//		cout << cost << ' ' << m << endl;
//		for (auto i = v1->begin(); i != v1->end(); i++)
//			cout << *i << ' ';
//		cout << endl;
//	}
//
//	return 0;
//}
////adbaadabad
////0 5
////1 4 5 7 9
