////9*9的棋盘 10个雷,位置用容器存起来
////雷和非雷可以用1和0代表
//#include "扫雷.h"
//
//
//int main()
//{
//	int input = 0;
//	//用时间设置随机数
//	srand((unsigned int)time(NULL));
//
//
//	do
//	{
//		menu();//打印菜单
//		printf("请选择;");
//			scanf("%d", &input);
//			switch (input)
//			{
//			case 1:
//				printf("游戏开始\n");
//				game(); 
//				break;
//			case 2:
//				printf("退出游戏\n");
//				return 0;
//			default:
//				printf("选择错误,重新选择\n");
//				
//			}
//	} while (1);
//
//	return 0;
//}
//
//
//
////初始展开一片
//// 1.坐标不是雷
//// 2.该坐标周围没有雷
//// 3.该坐标没有被排查过
////标记功能