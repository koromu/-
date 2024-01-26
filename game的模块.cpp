//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <time.h>
//#include <math.h>
//#include <stdlib.h>
//#include "game_三子棋.h"
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
//
//void InitBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (j = 0; j < col; j++)
//		{
//			board[i][j] = ' ';
//		}
//	}
//}
//
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)//最后一组不打印
//				printf("|");
//		}
//		printf("\n");
//		if (i < col - 1)
//		{
//			j = 0;
//			for (j = 0; j < col; j++)
//			{
//				printf("---");
//				if (j < col - 1)
//				{
//					printf("|");
//				}
//			}
//			printf("\n");
//		}
//	}
//}
//
////玩家下棋
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int x = 0;
//		int y = 0;//根据坐标下棋,玩家输入1-3, 1-3,不能超过范围
//
//		printf("你的回合!选择你要下的位置:\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
//		{
//			//判断是不是空格(空位), 是就下,不是就不让下
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("这里已经下过了,不能下在这里\n");
//			}
//		}
//		else
//		{
//			printf("请下在棋盘内.\n");
//		}
//	}
//}
//
////电脑下棋
//void ComputerMove(char Board[ROW][COL], int row, int col)
//{
//	printf("电脑下棋\n");
//	int x = 0;
//	int y = 0;
//
//	while (1)
//	{
//		x = rand() % row;//(0-32767),%3的余数一定是0-2
//		y = rand() % col;//催你坐标
//		if (Board[x][y] == ' ')
//		{
//			Board[x][y] = '#';
//			break;
//		}
//	}
//}//随机下的, 蠢的
//
//
////判断
//char JudgeWin(char board[ROW][COL], int row, int col)
//{
//
//	//先判断行
//	int i = 0;
//	//for (i = 0; i < row; i++)
//	//{
//	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//	//	{
//	//		return board[i][0];
//	//	}
//	//}
//	//这里是静态的
//	//尝试动态
//	int x = 0;
//	for (i = 0; i < row; i++)
//	{
//		for (x = 0; x < col-2; x++)
//		{
//			if (board[i][x] == board[i][x + 1] && board[i][x + 1] == board[i][x + 2] && board[i][x + 1] != ' ')
//			{
//				return board[i][x];
//			}
//		}
//	}//尝试失败
//
//
//	//列
//	int j = 0;
//	for (j = 0; j < row; j++)
//	{
//		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[1][j] != ' ')
//		{
//			return board[0][j];
//		}
//	}
//
//
//	//对角线
//	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//
//	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
//	{
//		return board[1][1];
//	}
//
//	//判断是否平局
//	if (IsFull(board))
//	{
//		return 'Q';
//		//平局
//	}
//	//游戏继续
//	return 'C';
//}
////平局 ,判断数组中有没有空格
//
//
//int IsFull(char board[ROW][COL])
//{
//	//满了返回1
//	//没满返回0
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j < COL; j++)
//		{
//			if (board[i][j] == ' ')
//			{
//				return 0;
//			}
//		}
//	}//遍历数组
//	return 1;
//}
//
//
////规则
////如果玩家赢了,报告玩家赢了.--*
////电脑赢了,报告电脑赢了. --#
////平局了,报告平局了 -- Q
////继续 -- c
