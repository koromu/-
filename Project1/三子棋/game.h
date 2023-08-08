#pragma once
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
//��ʼ����������
void InitBoard(char board[ROW][COL], int row, int col);
//�˵�����
void menu();
//��Ϸʵ������
void game();
//��ӡ���̵�����
void DisplayBoard(char board[ROW][COL], int row, int col);
//�����������
void PlayerMove(char Board[ROW][COL], int row, int col);
//������������
void ComputerMove(char Board[ROW][COL], int row, int col);
//��Ϸʤ���ж�
char JudgeWin(char board[ROW][COL], int row, int col);
//�����ж��Ƿ�ʤ��
int IsFull(char board[ROW][COL]);
