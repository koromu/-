//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//bool check(char a)
//{
//	char _ = '_';
//	if (a == _)
//		return true;
//	else if (a >= '0' && a <= '9')
//		return true;
//	else if (a >= 'a' && a <= 'z')
//		return true;
//	else if (a >= 'A' && a <= 'Z')
//		return true;
//	return false;//不符合标准
//}
//
//int main()
//{
//	char a[25];
//	while (cin >> a)
//	{
//		bool flag = false;
//		if (a[0] <= '9' && a[0] >= '0')
//			puts("no");
//		else
//		{
//			for (int i = 1; a[i]; i++)
//			{
//				if (!check(a[i]))
//				{
//					flag = true;
//					puts("no");
//					break;
//				}
//			}
//			if(!flag)
//				puts("yes");
//		}
//	}
//	return 0;
//}
////RKPEGXSR;TwyYcp
////tot