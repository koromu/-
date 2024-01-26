//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//using namespace std;
//
//int q[101];
//
//int main()
//{
//	for (int i = 1; i <= 100; i++)	scanf("%d", &q[i]);
//	int c = 0;
//	for (int i = 1; i <= 92; i++)
//	{
//		int j = i;
//		if (q[j] == 2)
//		{
//			if (q[j + 1] == 0)
//			{
//				if (q[j + 2] == 2)
//				{
//					if (q[j + 3] == 3)
//					{
//						int tmp = q[j + 4] * 10 + q[j + 5];
//						if (tmp <= 12 && tmp > 0)
//						{
//							int t = q[j + 6] * 10 + q[j + 7];
//							if (t == 31)
//							{
//								if (tmp == 1 || tmp == 3 || tmp == 5 || tmp == 7 || tmp == 8 || tmp == 10 || tmp == 12)
//									c++;
//
//							}
//							else if (t == 30)
//							{
//								if (tmp == 4 || tmp == 6 || tmp == 9 || tmp == 11)
//									c++;
//							}
//							else if (t == 28)
//								if (tmp == 2)
//									c++;
//						}
//					}
//				}
//			}
//		}
//	}
//	printf("%d", c);
//	return 0;
//}