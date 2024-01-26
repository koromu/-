#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//读入一个点, 然后计算可能的位置, 用个数组记录走过的格子, 遍历上下左右

//bool st[10][10];
//
//void solve(char x, char y)
//{
//	if (!st[x - 'a'][y - '1'] && ((y > '8' || y < '0') || (x < 'a' || x >'h')))return;
//	for (int i = 0; i < 10; i++)
//	{
//		st[x - 'a'][y - '1'] = true;
//		solve(x , y + 1);
//		printf("%c%c\n", x, y);
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		st[x - 'a'][y - '1'] = true;
//		solve(x, y - 1);
//		printf("%c%c\n", x, y);
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		st[x - 'a'][y - '1'] = true;
//		solve(x+1, y);
//		printf("%c%c\n", x, y);
//		return;
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		st[x - 'a'][y - '1'] = true;
//		solve(x-1, y);
//		printf("%c%c\n", x, y);
//		return;
//	}
//}
//
//int main()
//{
//	int n; cin >> n;
//	while (n--)
//	{
//		char op[2];
//		scanf("%s", &op);
//		st[op[0] - 'a'][op[1]- '1'] = true;
//		solve(op[0],op[1]);
//	}
//
//	return 0;
//}//wa
//#include <iostream>
//using namespace std;
//
//char op[2];
//int main()
//{
//	int n; cin >> n;
//	while (n--) {
//		scanf("%s", op);
//		char x = op[0], y = op[1];
//		for (int i = 1; i < 10; i++)
//		{
//			if (y - i > '0')
//			{
//				printf("%c%c\n", x, y - i);
//			}
//			else break;
//		}
//		for (int i = 1; i < 10; i++)
//		{
//			if (y + i <= '8')
//			{
//				printf("%c%c\n", x, y + i);
//			}
//			else break;
//		}
//		for (int i = 1; i < 10; i++)
//		{
//			if (x - i >='a')
//			{
//				printf("%c%c\n", x - i, y );
//			}
//			else break;
//		}
//		for (int i = 1; i < 10; i++)
//		{
//			if (x + i <= 'h')
//			{
//				printf("%c%c\n", x + i, y );
//			}
//			else break;
//		}
//	}
//	return 0;
//}//ac

