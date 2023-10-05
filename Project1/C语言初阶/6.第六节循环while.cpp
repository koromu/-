#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//C语言语句分为五类
//1.表达语句
//2.控制语句
//控制语句分为三类 
 

//3.
//4.复合语句
//5.空语句


//C语言是[结构化]的程序设计语言
//顺序结构 选择结构(if switch) 循环结构(for while do while)



//分支
//if (表达式)	if后面只能跟一条语句
	//{语句1};		//表达式成立执行语句1
//else			else后面也只能跟一条语句
	//{语句2];		//表达式不成立执行语句2



//多分支
//int main() {
//	if (表达式)
//	{
//		语句1
//	}
//	else if (表达式)
//	{
//		语句2
//	}
//	else if (表达式)
//	{
//		语句3
//	}
//	else
//	{
//		语句4
//	};
//	return 0;
//}
//如果表达式非0,就执行后面的语句

// else 和最近的 if 同一个层级


//加强代码的规范  C语言变量名中可以用驼峰 也可以下划线

//if (常量 == 变量)这样做判断 如果丢掉等号就会警报  否则不会报错


//int main()
//{
//	int num = 0;
//	scanf("%d\n", &num);
//
//	if (num % 2 == 1)
//	{
//		printf("奇数\n");
//	}
//	else
//	{
//		printf("偶数\n");
//	};
//	return 0;
//}

//判断1-100之间的奇数
//int main()					
//{							
//	int num = 1;						
//	while (num <= 100)				
//	{								
//		if (num % 2 == 1)			
//		{							
//			printf("%d\n", num);	
//			num++;						
//		}								
//		else							else 其实可以不用加就在下面
//		{							
//			num++;
//			continue;
//		}
//	}
//
//	return 0;
//}									

//switch 用于多分支语句
//int main()
//{
//	switch (整型表达式)
//	{
//		case 整形常量表达式:
//			语句;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:		//不能是1.0,是常量不是整形 不能是n,不是常量 !字符有ASCII码值所以可以
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d\n", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误");
//		break;
//	}
//	return 0;
//}


//如上 default语句


//switch是可以嵌套的
//break是跳出所在的switch




//循环语句
//while (条件(表达式))
//{
//	循环语句;
//}


//int main()
//{
//	if (1)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//
//	return 0;
//}	//在屏幕打印1-10

//int main()
//{
//	int i = 1;
//	while (i <= 9)
//	{
//		int j = 1;
//		while (j <= i)
//		{
//			int sum = j * i;
//			printf("%d * %d = %d ", j, i, sum);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//	return 0;
//}	//99乘法表



//continue就是跳过下面的内容,直接开始下一个循环

//int main()
//{
//	int ch = getchar();
//	printf("%c\n", ch);
//	putchar(ch);
//}
//int main()
//{
//	//int ch = 0;
//	//while ((ch = getchar() != EOF))
//	//{
//	//	putchar(ch);
//	//}
//
//	//举例子
//	char password[20] = { 0 };
//	printf("请输入密码");
//	scanf("%s", password);			//scanf 不拿不该拿的 1.\n 2.空格
//	//getchar();						//读取了\n
//	int ch = 0;
//	while ((ch = getchar() != '\n'))//这一段就是清理缓冲区
//	{
//		;
//	}
//	printf("请确认密码(Y/N):>\n");
//	int ret = getchar();			//getchar就会拿      \n
//
//		if ('Y' == ret)
//		{
//			printf("Yes\n");
//		}
//
//		else
//		{
//			printf("No\n");
//		}
//
//	return 0;
//}






#include <stdio.h>
//int main()
//{
//	char ch = '\0';
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')		// a || b   读作a或者b满足一个即可
//			continue;
//		putchar(ch);					//如果是12345678就会打印 可以在一堆字符中里打印出来目标
//	}
//	return 0;
//}



