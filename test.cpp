//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <time.h>
//#include <math.h>
//#include <stdlib.h>
//#include "game_������.h"
//
//
//void game()
//{
//	//����
//	//һ��3*3�Ĵ������ݵ�����:����
//	//��ʼ��Ϊȫ�ǿո�->�������ǿյ�
//	char ret = ' ';
//	char board[ROW][COL] = { 0 };//����
//	InitBoard(board, ROW, COL);//��ʼ�����̵ĺ���
//
//
//	while (1)
//	{
//		DisplayBoard(board, ROW, COL);
//		PlayerMove(board, ROW, COL);
//		//�ж���Ӯ
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
//		printf("��Ӯ��\n");
//	}
//	else if (ret == '#')
//	{
//		DisplayBoard(board, ROW, COL);
//		printf("������\n");
//	}
//	else if (ret == 'Q')
//	{
//		DisplayBoard(board, ROW, COL);
//		printf("ƽ����\n");
//	}
//}
//
//void DisplayBoard(char board[ROW][COL], int row, int col)
//{
//	int i = 0;
//	for (i = 0; i < row; i++)
//	{
//		//��ӡ����
//		printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);
//		//
//		printf("---|---|---\n");
//	
//	
//	}
//}