//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <Windows.h>
//#include <time.h>
//#include <math.h>
//#include <stdlib.h>
//#include "ɨ��.h"
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
////��ʽ��ɨ�׵�����
//void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < rows/*11*/; i++)
//	{
//		for (j = 0; j < cols/*11*/; j++)
//		{
//			board[i][j] = set;
//		}
//	}
//}
//
//void DisplayBoard(char board[ROWS][COLS], int row, int col)
//{
//	int i = 0;
//	int j = 0;
//	printf("-----------ɨ����Ϸ-----------\n");
//	for (j = 0; j <= col/*9*/; j++)//��ӡ�е�����
//	{
//		printf("%d ", j);
//	}
//	printf("\n");
//	for (i = 1; i <= row/*9*/; i++)
//	{
//		printf("%d ", i);//�ڵ�һ��Ϊλ�ô�ӡ�е�����
//
//		for (j = 0; j < col; j++)
//		{
//			printf("%c ", board[i][j]);
//		}
//		printf("\n");
//	}
//	printf("-----------ɨ����Ϸ-----------\n");
//}
//
//
//void SetMine(char board[ROWS][COLS], int row, int col)
//{
//	int count = EASY_COUNT;//�׵ĸ���
//	while (count)
//	{
//		//int x = rand() % (row - 2) + 1; // ����1��row-2֮������������1��9
//		//int y = rand() % (col - 2) + 1; // ����1��col-2֮������������1��9
//
//		int x = rand() % row +1;
//		int y = rand() % col ;
//		//��Ҫ�ŵ��������
//		//�ж��Ƿ�������,
//		if (board[x][y] == '0')
//		{
//			board[x][y] = '1';
//			count--;//�滻����,��һ����
//		}
//	}
//}
//
////�Ų���
//void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
//{
//	int x = 0;
//	int y = 0;
//	int win = 0;//�ҵ����׵ĸ���
//	while (win < col*row - EASY_COUNT)
//	{
//		printf("������Ҫ�Ų������:\n");
//		scanf("%d %d", &x, &y);
//		if (x >= 1 && x <= row && y >= 1 && y <= col)//�Ϸ���Χ
//		{
//			if (show[x][y] != '*')
//			{
//				printf("�����Ų��; \n");
//			}
//			else 
//			{
//
//				if (mine[x][y - 1] == '1')
//				{
//					printf("�ȵ��׿�,�㱻ը����\n");
//					DisplayBoard(mine, ROW, COL);
//					break;
//				}
//				else//���������
//				{
//					//ͳ�����������Χ�İ˸������м�����
//					//(x-1, y+1)	(x, y+1)	(x+1, y+1)
//					//(x-1, y)	(x, y)		(x+1, y)
//					//(x-1, y-1)	(x, y-1)	(x+1, y-1)
//					//�ַ���ASCII��ֵ
//					//��1��ASCII��ֵ��ȥ0��,�õ���ֵ
//					//�����
//					int count = get_mine_count(mine, x, y);
//					show[x][y - 1] = count + 8 * '0';//ת���������ַ�
//					DisplayBoard(show, ROW, COL);
//					win++;
//				}
//			}
//		}
//		else
//		{
//			printf("���ںϷ���Χ���Ų�,����������");
//		}
//	}
//	if (win == row * col - EASY_COUNT)
//	{
//		printf("��ϲ��,���׳ɹ�\n");
//		DisplayBoard(show, ROW, COL);
//		DisplayBoard(mine, ROW, COL);
//	}
//
//}
//
////ͳ���׵ĸ���
//int get_mine_count(char board[ROWS][COLS], int x, int y)
//{
//	return (board[x - 1][y + 1] + 
//		board[x][y + 1] + 
//		board[x + 1][y + 1] +
//		board[x - 1][y] + 
//		board[x][y] + 
//		board[x + 1][y] +
//		board[x - 1][y - 1] + 
//		board[x][y - 1] + 
//		board[x + 1][y - 1]);
//}
//
//void game()
//{
//	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
//	char show[ROWS][COLS] = { 0 };
//	//��ʼ������������
//	// mine ��ʼȫ��0
//	// show ��ʼȫΪ*
//	InitBoard(mine, ROWS, COLS, '0');
//
//	InitBoard(show, ROWS, COLS, '*');
//	int input = 0;
//	while (1)
//	{
//		//��ӡ����
//		//DisplayBoard(show, ROW, COL);
//		//������
//		SetMine(mine, ROW, COL);
//		DisplayBoard(mine, ROW, COL);//����ʾ�׵�λ��
//		//DisplayBoard(show, ROW, COL);
//		//DisplayBoard(mine, ROW, COL);//����ʾ�׵�λ��
//		//�Ų���
//		FindMine(mine, show, ROW, COL);
//		
//	}
//}
//
