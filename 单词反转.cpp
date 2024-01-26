//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//char s[510];
//
//int main()
//{
//	gets(s);
//	int x = 0;
//	for (int i = 0; i < 510;)
//	{
//		if (s[i] == ' ' || s[i] == '\0')
//		{
//			for (int j = i - 1; j >= x; j--)
//			{
//				printf("%c", s[j]);
//			}
//			while (s[i] == ' ' && s[i] != '\0')
//			{
//				printf(" ");
//				i++;
//			}
//			if (s[i] == '\0') return 0;
//			x = i;
//		}
//		else i++;
//	}
//	return 0;
//}
///* gets example */
////#include <stdio.h>
////
////int main()
////{
////	char string[256];
////	printf("Insert your full address: ");
////	gets(string); 
////	printf("Your address is: %s\n", string);
////	return 0;
////}