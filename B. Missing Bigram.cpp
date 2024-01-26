//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		string ss[100];
//		string s1 = {};
//		int n; cin >> n;
//		for (int i = 0; i <= n - 3; i++) cin >> ss[i];
//		s1 += ss[0];
//		for (int i = 1; i <= n - 3;)
//		{
//			if (ss[i][0] == ss[i][1] && s1[s1.size()-1] == ss[i][0])
//			{
//				s1 += ss[i][1];
//				i += 1;
//				continue;
//			}
//			if (ss[i][0] == ss[i][1] && s1[s1.size() - 1] != ss[i][0])
//			{
//				s1 += ss[i];
//				i += 1;
//				continue;
//			}
//			else if (s1[s1.size()-1] == ss[i][0] && ss[i + 1][0] == ss[i + 2][0])
//			{
//				//s1 += ss[i];
//				s1 += ss[i + 2][1];
//				i += 3;
//				continue;
//			}
//			else if (s1[s1.size() - 1] == ss[i][0] && ss[i + 1][0] != ss[i + 2][0])
//			{
//				//s1 += ss[i];
//				s1 += ss[i + 1][1];
//				i += 2;
//				continue;
//			}
//			else if (ss[i][1] != ss[i + 1][0] && s1[s1.size() -1 ] != ss[i][0])
//			{
//				s1 += ss[i];
//				i++;
//				continue;
//			}
//			else if (ss[i][1] != ss[i + 1][0] && s1[s1.size() - 1] == ss[i][0])
//			{
//				s1 += ss[i][1];
//				i++;
//				continue;
//			}
//		}	
//		cout << s1 << endl;
//	}
//
//	return 0;
//}
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	int t;
//	cin >> t;
//	while (t--)
//	{
//		string ss;
//		string s1 = {};
//		int n; cin >> n;
//		for (int i = 0; i < n-2; i++)
//		{
//			string tmp;
//			cin >> tmp;
//			ss += tmp;
//		}
//		if (ss.size() != 2)
//			for (int i = 0; i <= 2 * (n - 2) - 1;)
//			{
//				if (i == 2 * n - 1)
//				{
//					s1 += ss[n - 1];
//					break;
//				}
//				if (ss[i] != ss[i + 1])
//				{
//					s1 += ss[i];
//					i++;
//					continue;
//				}
//				else if (ss[i] == ss[i + 1] && ss[i + 2] == ss[i + 3] && ss[i] == ss[i + 2])
//				{
//					s1 += ss[i];
//					s1 += ss[i + 1];
//					i = i + 4;
//					continue;
//				}
//				else if ((ss[i] == ss[i + 1] && ss[i + 1] == ss[i + 2] && ss[i + 2] != ss[i + 3]))
//				{
//					s1 += ss[i];
//					s1 += ss[i + 1];
//					i = i + 3;
//					continue;
//				}
//				else if (ss[i] == ss[i + 1] && ss[i + 1] != ss[i + 2])
//				{
//					s1 += ss[i];
//					s1 += ss[i+1];
//					i += 2;
//					continue;
//				}
//				else
//				{
//					s1 += ss[i]; s1 += ss[i + 1];
//					i += 2;
//					continue;
//				}
//			}
//		else
//			s1 += ss;
//		while (s1.size() < n)
//		{
//			if (s1[s1.size() - 1] == 'a') s1 += 'b';
//			else s1 += 'a';
//		}
//		cout << s1 << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//
//		string ss, s1;
//		int n; cin >> n;
//		string tmp; cin >> tmp;
//		s1 += tmp;
//		for (int i = 0; i < n - 3; i++)
//		{
//			cin >> tmp;
//			if (s1[s1.size() - 1] == tmp[0])
//			{
//				s1 += tmp[1];
//			}
//			else
//			{
//				s1 += tmp;
//			}
//		}
//		while (s1.size() < n)
//		{
//			if (s1[s1.size() - 1] == 'a')s1 += 'b';
//			else s1 += 'a';
//		}
//		cout << s1 << endl;
//	}
//	return 0;
//}//ac