#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>

//��ת�ַ��� i like beijing. -> beijing. like i
//1.i like beijing. ->(�������ַ�������) .gnijieb ekil i ->(��ÿ����������) beijing. like i

//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);//���ǿ�
//	while (left < right)
//	{
//		char tem = *left;
//		*left = *right;
//		*right = tem;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[101] = {0};
//	//����
//	fgets(arr, sizeof(arr), stdin);
//	arr[strcspn(arr, "\n")] = '\0'; // ȥ��fgetsĩβ�Ļ��з�
//	//����
//	int len = strlen(arr);
//	reverse(arr, arr+len-1);
//	//
//	char* start = arr;
//	char* end = start;
//	while (*start)
//	{
//		while (*end != ' '&& *end != '\0')
//		{
//			end++;
//		}
//		reverse(start, end - 1);
//		if(*end != ' ')
//		{
//			start = end++;
//		}
//		else	
//		{
//			start = end++;
//		}
//
//	}
//	printf("%s\n", arr);
//	//gets(Ŀ��ĵ�ַ)����j, ����ַ����
//	return 0;
//}