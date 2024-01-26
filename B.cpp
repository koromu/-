//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//using namespace std;
//
//int main()
//{
//	int t; cin >> t;
//	while (t--)
//	{
//		for (int i = 0; i < 3; i++)
//		{
//			char op[5];
//			scanf("%s", op);
//			bool a = false, b = false, c = false , s = false;
//			for (int i = 0; i < 3; i++)
//			{
//				if (op[i] == '?') {
//					s = true;
//					continue;
//				}
//				if (op[i] == 'A') {
//					a = true;
//					continue;
//				}
//				if (op[i] == 'B') {
//					b = true;
//					continue;
//				}
//				if (op[i] == 'C') {
//					c = true;
//					continue;
//				}
//			}
//			if (s)
//			{
//				if (a == false)
//				{
//					puts("A");
//					s = false;
//					continue;
//				}
//				if (c == false)
//				{
//					puts("C");
//					s = false;
//					continue;
//				}
//				if (b == false)
//				{
//					puts("B");
//					s = false;
//					continue;
//				}
//			}
//		}
//	}
//
//	return 0;
//}