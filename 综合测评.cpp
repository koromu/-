#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <assert.h>

//倒转字符串 i like beijing. -> beijing. like i
//1.i like beijing. ->(把整个字符串逆序) .gnijieb ekil i ->(把每个单词逆序) beijing. like i

//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);//检测非空
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
//	//输入
//	fgets(arr, sizeof(arr), stdin);
//	arr[strcspn(arr, "\n")] = '\0'; // 去掉fgets末尾的换行符
//	//逆置
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
//	//gets(目标的地址)函数j, 将地址传入
//	return 0;
//}