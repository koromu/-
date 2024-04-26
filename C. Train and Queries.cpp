//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//const int N = 200010;
//vector<int> w;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int n, k, tmp; cin >> n >> k;
//		for (int i = 1; i <= n; i++)
//		{
//			scanf("%d", &tmp);
//			w.push_back(tmp);
//		}
//		//读入数组
//		while (k--)
//		{
//			int l, r;
//			scanf("%d %d", &l, &r);
//			auto it1 = lower_bound(w.begin(), w.end(), l);
//			if (it1 != w.end() && *it1 == l)//如果找到才找右边的
//			{
//				auto it2 = lower_bound(it1, w.end(), r);
//				if (it2 != w.end() && *it2 == r)
//					puts("yes");
//				else
//					puts("no");
//			}
//			else puts("no");
//		}
//	}
//	return 0;
//}
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<iostream>
//using namespace std;
//
//#include<algorithm>
//#include<vector>
//int main()
//{
//	int t;;
//	cin >> t;
//	while (t--) {
//		int n, k;
//		cin >> n >> k;
//		vector<int> arr(n);
//		for (int i = 0; i < n; i++)
//			cin >> arr[i];
//		while (k--)
//		{
//			int az = -1;
//			int bz = -1;
//			int a, b;
//			cin >> a >> b;
//			for (int i = 0; i < n; i++)
//			{
//				if (arr[i] == a && az == -1)
//					az = i;
//				if (arr[i] == b)
//				{
//					bz = i;
//				}
//				if (bz > az && az != -1)
//					goto flag;
//			}
//		flag:
//			if (az != -1 && bz != -1 && az < bz)
//				cout << "YES" << endl;
//			else
//				cout << "NO" << endl;
//		}
//	}
//}
//#include <iostream>
//#include <algorithm>
//#include <map>
//
//using namespace std;
//
//
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		map<int, int> mb;
//		map<int, int> me;
//		int tmp;
//		int n, k; cin >> n >> k;
//		for (int i = 0; i < n; i++) 
//		{
//			cin >> tmp;
//			if (mb.find(tmp) == mb.end())
//				mb[tmp] = i;
//			me[tmp] = i;
//		}//预处理数组
//		while (k--)
//		{
//			int l, r;
//			cin >> l >> r;
//			if (mb.find(l) == mb.end() || me.find(r) == me.end())
//				puts("no");
//			else
//				if (mb[l] < me[r])
//					puts("yes");
//				else puts("no");
//		}
//	}
//	return 0;
//}