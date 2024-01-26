//#include "静态通讯录的功能声明.h"
//
//enum Option
//{
//	EXIT,
//	ADD,
//	DEL,
//	SEARCH,
//	MODIFY,
//	SHOW,
//	SORT
//};//如此定义可以,把0123456变成英文, 增加了可读性
//
//int main()
//{
//	
//	int input = 0;
//	con con1;
//	InitContact(&con1);//初始化通讯录, 传地址可以改
//	do
//	{
//		menu();
//		printf("请输入想要使用的功能:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case ADD:
//		{
//			AddCon(&con1);
//			break;
//		}
//		case DEL:
//		{
//			DelCon(&con1);
//			break;
//		}
//		case SEARCH:
//		{
//			SearachCon(&con1);
//			break;
//		}
//		case MODIFY:
//		{
//			ModifyCon(&con1);//先查找,然后重新录取一遍
//			break;
//		}
//		case SHOW:
//		{
//			ShowCon(&con1);
//			break;
//		}
//		case SORT:
//		{
//			SortConName(&con1);
//			break;
//		}
//		case EXIT:
//		{
//			DestoryCon(&con1);
//			break;
//		}
//		default:
//			printf("输入错误, 请重新输入\n");
//			break;
//		}
//			
//	} while (input);
// 
//	return 0;
//}