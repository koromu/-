//#include "扫雷.h"
//
//
//void menu()
//{
//	printf("***********************\n");
//	printf("*********1.play********\n");
//	printf("*********2.exit********\n");
//	printf("***********************\n");
//
//}
//
////格式化扫雷的盘子
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows/*11*/; i++)
//	{
//		for (j = 0; j < cols/*11*/; j++)
//		{
//			board[i][j] = set;//0 - 10 都变成了 set
//		}
//	}
//}
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("-----------扫雷游戏-----------\n");
//	std::cout << "  ";//在最开始隔开
//	for (j = 1; j <= col; j++)//打印列的坐标, 在第一行打印坐标 1 - 9 
//	{
//		printf("%d ", j);
//	}
//	printf("\n");
//	for (i = 1; i <= row; i++)
//	{
//		printf("%d ", i);//在第一个为位置打印行的坐标 也是 1 - 9
//
//		for (j = 1; j <= col; j++)
//		{
//			printf("%c ", board[i][j]);//打印board的的内容, board初始化是0 - 10 ,其中我们要用的部分是 1 - 9
//		}
//		printf("\n");
//	}
//	//printf("-----------扫雷游戏-----------\n");
//	std::cout << std::endl;
//}//改好
//
//
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;//雷的个数
//	while (count)
//	{
//		//int x = rand() % (row - 2) + 1; // 生成1到row-2之间的随机数，即1到9
//		//int y = rand() % (col - 2) + 1; // 生成1到col-2之间的随机数，即1到9
//
//		int x = rand() % row + 1;//原范围是 0 - 8 现范围是 1 - 9
//		int y = rand() % col + 1 ;
//		//雷要放的随机坐标
//		//判断是否布置了雷,
//		if (board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			count--;//替换了雷,减一个雷
//		}
//	}
//}//改好
//
////排查雷
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;//找到非雷的个数
//	while (win < col*row - EASY_COUNT)
//	{
//		printf("请输入要排查的坐标:\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)//合法范围
//		{
//			if (show[x][y] != '*')
//			{
//				printf("这里排查过; \n");
//			}
//			else //show 的这里不是 * 
//			{
//				if (mine[x][y] == '1')//mine中有雷的范围是 1 - 9 x 的范围是1 - 9
//				{
//					printf("踩到雷咯,你被炸死了\n");
//					DisplayBoard(mine, ROW, COL);
//					break;
//				}
//				else//如果不是雷
//				{
//					//统计这个坐标周围的八个坐标有几个雷
//					//(x-1, y+1)	(x, y+1)	(x+1, y+1)
//					//(x-1, y)	(x, y)		(x+1, y)
//					//(x-1, y-1)	(x, y-1)	(x+1, y-1)
//					//字符的ASCII码值
//					//用1的ASCII码值减去0的,得到差值
//					//再相加
//					int count = get_mine_count(mine, x, y);
//					show[x][y] = count + '0' - 8 * '0';//转换成数字字符
//					DisplayBoard(show, ROW, COL);
//					win++;
//				}
//			}
//		}
//		else
//		{
//			printf("请在合法范围内排查,请重新输入");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("恭喜你,排雷成功\n");
//		DisplayBoard(show, ROW, COL);
//		DisplayBoard(mine, ROW, COL);
//	}
//}
//
////统计雷的个数
//int get_mine_count(char board[][COLS], int x, int y)
//{
//	return (board[x - 1][y + 1] + board[x][y + 1] + board[x + 1][y + 1] +board[x - 1][y]/* + board[x][y]*/ + board[x + 1][y] + board[x - 1][y - 1] + board[x][y - 1] + board[x + 1][y - 1]);
//}
//
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
//	char show[ROWS][COLS] = { 0 };
//	//初始化化两个数组
//	// mine 初始全是0
//	// show 初始全为*
//	InitBoard(mine, ROWS, COLS, '0');
//
//	InitBoard(show, ROWS, COLS, '*');//展示的棋盘
//	int input = 0;
//		//打印棋盘
//		//DisplayBoard(show, ROW, COL);
//		//设置雷
//		SetMine(mine, ROW, COL);
//		DisplayBoard(show, ROW, COL);//会显示雷的位置
//		//DisplayBoard(show, ROW, COL);
//		//DisplayBoard(mine, ROW, COL);//会显示雷的位置
//		//排查雷
//		FindMine(mine, show, ROW, COL);
//		std::cout << "游戏结束" << std::endl;
//}
//
