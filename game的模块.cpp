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
//		//��ӡ����
//		int j = 0;
//		for (j = 0; j < col; j++)
//		{
//			printf(" %c ", board[i][j]);
//			if (j < col - 1)//���һ�鲻��ӡ
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
////�������
//void PlayerMove(char board[ROW][COL], int row, int col)
//{
//	while (1)
//	{
//		int x = 0;
//		int y = 0;//������������,�������1-3, 1-3,���ܳ�����Χ
//
//		printf("��Ļغ�!ѡ����Ҫ�µ�λ��:\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
//		{
//			//�ж��ǲ��ǿո�(��λ), �Ǿ���,���ǾͲ�����
//			if (board[x - 1][y - 1] == ' ')
//			{
//				board[x - 1][y - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("�����Ѿ��¹���,������������\n");
//			}
//		}
//		else
//		{
//			printf("������������.\n");
//		}
//	}
//}
//
////��������
//void ComputerMove(char Board[ROW][COL], int row, int col)
//{
//	printf("��������\n");
//	int x = 0;
//	int y = 0;
//
//	while (1)
//	{
//		x = rand() % row;//(0-32767),%3������һ����0-2
//		y = rand() % col;//��������
//		if (Board[x][y] == ' ')
//		{
//			Board[x][y] = '#';
//			break;
//		}
//	}
//}//����µ�, ����
//
//
////�ж�
//char JudgeWin(char board[ROW][COL], int row, int col)
//{
//
//	//���ж���
//	int i = 0;
//	//for (i = 0; i < row; i++)
//	//{
//	//	if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
//	//	{
//	//		return board[i][0];
//	//	}
//	//}
//	//�����Ǿ�̬��
//	//���Զ�̬
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
//	}//����ʧ��
//
//
//	//��
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
//	//�Խ���
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
//	//�ж��Ƿ�ƽ��
//	if (IsFull(board))
//	{
//		return 'Q';
//		//ƽ��
//	}
//	//��Ϸ����
//	return 'C';
//}
////ƽ�� ,�ж���������û�пո�
//
//
//int IsFull(char board[ROW][COL])
//{
//	//���˷���1
//	//û������0
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
//	}//��������
//	return 1;
//}
//
//
////����
////������Ӯ��,�������Ӯ��.--*
////����Ӯ��,�������Ӯ��. --#
////ƽ����,����ƽ���� -- Q
////���� -- c
