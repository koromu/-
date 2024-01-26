//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//int main()
//{
//	int t;; cin >> t;
//	while (t--)
//	{
//		int n = 0;
//		string a, b;
//		cin >> n;
//		cin >> a >> b;
//		int ca = 0, cb = 0, c = 0;
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] == '1')ca++;
//			if (b[i] == '1')cb++;
//		}
//		if (ca == 0)
//		{
//			cout << cb << endl;
//			continue;
//		}
//		//如果ca < cb说明不够一定有要变的的, 如果大于也要变,如果不相同就要移动, 先移动再变, 移动的次数最多是ca的数量, 然后ca--cb--, 然后ca减到0,剩下的cb就是要变的
//		if (ca <= cb) {
//			for (int i = 0; i < n; i++)
//			{
//				if (a[i] == b[i] && a[i] == '1')
//				{
//					if (ca > 0 && cb > 0)
//					{
//						ca--, cb--;//1 4
//					}
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				if (a[i] != b[i])
//				{
//					if (ca > 0 && cb > 0)
//					{
//						ca--, cb--;//0 3
//						c++;//1
//					}
//				}
//			}
//			cout << c + cb << endl;
//			continue;
//		}
//		if (ca > cb)
//		{
//			for (int i = 0; i < n; i++)
//			{
//				if (a[i] == b[i] && a[i] == '1')
//				{
//					if (ca > 0 && cb > 0)
//					{
//						ca--, cb--;//1 5
//					}
//				}
//			}
//			for (int i = 0; i < n; i++)
//			{
//				if (a[i] != b[i])
//				{
//					if (ca > 0 && cb > 0)
//					{
//						ca--, cb--;//1 0
//						c++;//1
//					}
//				}
//			}
//			cout << c + ca << endl;
//			continue;
//		}
//	}
//	return 0;
//}