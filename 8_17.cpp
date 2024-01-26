//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <stdlib.h>
//#include <time.h>
//#include <math.h>
//#include <assert.h>
//#include <stdlib.h>
//
//
//int judge(char* s)
//{
//	int i;
//	for (i = 0; i < strlen(s); i++)
//	{
//		if (*s == '(')
//		{
//			s++;
//		}
//		else
//		{
//			s++
//		}
//	}
//}
//
//
//
//int main()
//{
//	int t;
//	char s[51];
//	scanf("%d", &t);
//	//×öÊ×ÒªÅÐ¶Ï
//	for (; t > 0; t--)
//	{
//		scanf("%s", &s);
//		int i;
//
//		char* p_s = s;
//		int count_left = 0;
//		int count_right = 0;
//		while (*p_s == '(')
//		{
//			p_s++;
//			count_left++;
//		}
//		while (*p_s == ')')
//		{
//			p_s++;
//			count_right++;
//		}
//		if (count_left == count_right)
//		{
//			judge(s);
//		}
//		else
//		{
//			printf("NO\n");
//		}
//	}
//
//
//	return 0;
//}