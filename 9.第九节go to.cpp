#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>



// goto 符号
//符号使用: 符号:
//只要有合适的符号,就可以随意跳转
//goto 不能跨函数跳转

//适合场景:终止函数在某些深度嵌套的循环,多成循环这种情况使用break不太方便
//int main()
//{
//again:
//
//	printf("nihao\n");
//		
//	goto again;
//		
//	return 0;
//}

//关机程序 
//1.电脑运行起来后, 1分钟内关机
//2.如果输入; 取消,就取消关机

//cmd中的关机shutdown -s(设置关机) -t(设计倒计时关机) 60(单位是s)
//shutdown -a(取消关机)



//int main()
//{
//	char input[20] = { 0 };
//
//	system(" shutdown -s -t 60");
//again:
//	printf("请注意!!你的电脑在60秒内关机,如果输入:取消,就取消关机");
//	scanf("%s", input);
//
//	if (strcmp(input, "取消") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//上下效果相同
//int main()
//{
//	char input[20] = { 0 };
//
//	while (1)
//	{
//		system(" shutdown -s -t 600");
//
//		printf("请注意!!你的电脑在600秒内关机,如果输入:取消,就取消关机");
//		scanf("%s", input);
//
//		if (strcmp(input, "取消") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//}
//
//	return 0;
//}





