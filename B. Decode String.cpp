//#include <iostream>
//#include <string>
//using namespace std;
//
//char al[30] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		string s1, s2 = {};
//		int n; cin >> n;
//		cin >> s1;
//		int tmp = 0;
//		for (int i = 0; i < s1.size();)
//		{
//			if ((i + 2 >s1.size()-1 || s1[i + 2] != '0')|| s1[i+3] =='0')
//			{
//				s2 += al[s1[i] - '0' - 1];
//				i++;
//			}
//			else
//			{
//				int tmp = 0;
//				tmp += (s1[i] - '0')*10;
//				tmp += s1[i + 1] - '0';
//				s2 += al[tmp-1];
//				i += 3;
//			}
//		}
//		cout << s2 << endl;
//	}
//	//2
//	//4
//	//1100
//	//7
//	//1111100
//
//
//
//	return 0;
//}