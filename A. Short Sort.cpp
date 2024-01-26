//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool jud(string s)
//{
//	string tmp = s;
//	if (tmp[0] != 'a')
//	{
//		swap(tmp[0], tmp[1]);
//		if (tmp == "abc")
//		{
//			return true;
//		}
//		else
//		{
//			string tmp = s;
//			swap(tmp[1], tmp[2]);
//			if (tmp == "abc")
//			{
//				return true;
//			}
//			else
//			{
//				string tmp = s;
//				swap(tmp[0], tmp[2]);
//				if (tmp == "abc")
//				{
//					return true;
//				}
//				else return false;
//			}
//		}
//	}
//	if (tmp[1] != 'b')
//	{
//		swap(tmp[0], tmp[1]);
//		if (tmp == "abc")
//		{
//			return true;
//		}
//		else
//		{
//			string tmp = s;
//			swap(tmp[1], tmp[2]);
//			if (tmp == "abc")
//			{
//				return true;
//			}
//			else
//			{
//				string tmp = s;
//				swap(tmp[0], tmp[2]);
//				if (tmp == "abc")
//				{
//					return true;
//				}
//				else return false;
//			}
//		}
//	}
//	if (tmp[2] != 'c')
//	{
//		swap(tmp[0], tmp[1]);
//		if (tmp == "abc")
//		{
//			return true;
//		}
//		else
//		{
//			string tmp = s;
//			swap(tmp[1], tmp[2]);
//			if (tmp == "abc")
//			{
//				return true;
//			}
//			else
//			{
//				string tmp = s;
//				swap(tmp[0], tmp[2]);
//				if (tmp == "abc")
//				{
//					return true;
//				}
//				else return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	string s; int n;
//	cin >> n;
//	while (n--)
//	{
//		cin >> s;
//		if (jud(s))
//		{
//			puts("Yes");
//		}
//		else
//			puts("No");
//	}
//	
//
//
//
//	return 0;
//}