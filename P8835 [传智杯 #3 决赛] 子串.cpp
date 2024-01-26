//#include <iostream>
//#include <string>
//using namespace std;
//string sn, sm;
//int n, m;
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		int c = 0;
//		cin >> n >> m;
//		cin >> sn >> sm;
//		for (int i = 0; i < n; i++)
//		{
//			if (sn[i] <= 'Z' && sn[i] >= 'A')
//			{
//				sn[i] += 32;
//			}
//		}//处理字符串
//		for (int i = 0; i < m; i++)
//		{
//			if (sm[i] >= 'A' && sm[i] <= 'Z')
//			{
//				sm[i] += 32;
//			}
//		}
//		for (int i = 0 ; i < m;)
//		{
//			if (sm.find(sn, i) != -1)//从i开始查找
//			{
//				c++;
//				i = sm.find(sn, i) + 1;
//			}
//			else break;
//		}
//		cout << c << endl;
//	}
//}
//
////1
////2 10
////aa
////AAaAaaAaAa