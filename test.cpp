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
//void game()
//{
//	//棋盘
//	//一个3*3的储存数据的容器:数组
//	//初始化为全是空格->看起来是空的
//	char ret = ' ';
//	char board[ROW][COL] = { 0 };//容器
//	InitBoard(board, ROW, COL);//初始化棋盘的函数
//
//
//	while (1)
//	{
//		DisplayBoard(board, ROW, COL);
//		PlayerMove(board, ROW, COL);
//		//判断输赢
//		ret = JudgeWin(board, ROW, COL);
//
//		if (ret != 'C')
//		{
//			break;
//		}
//		DisplayBoard(board, ROW, COL);
//		ComputerMove(board, ROW, COL);
//		ret = JudgeWin(board, ROW, COL);
//		if (ret != 'C')
//		{
//			break;
//		}
//	}
//	if (ret == '*')
//	{
//		DisplayBoard(board, ROW, COL);
//		printf("你赢了\n");
//	}
//	else if (ret == '#')
//	{
//		DisplayBoard(board, ROW, COL);
//		printf("你输了\n");
//	}
//	else if (ret == 'Q')
//	{
//		DisplayBoard(board, ROW, COL);
//		printf("平局了\n");
//	}
//}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//打印数据
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//
//		printf("---|---|---\n");
//	
//	
//	}
//}