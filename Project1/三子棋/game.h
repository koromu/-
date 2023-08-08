#pragma once
#define ROW 3
#define COL 3
#include <stdlib.h>
#include <time.h>
//初始化棋盘声明
void InitBoard(char board[ROW][COL], int row, int col);
//菜单声明
void menu();
//游戏实现声明
void game();
//打印棋盘的声明
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋声明
void PlayerMove(char Board[ROW][COL], int row, int col);
//电脑下棋声明
void ComputerMove(char Board[ROW][COL], int row, int col);
//游戏胜负判断
char JudgeWin(char board[ROW][COL], int row, int col);
//声明判断是否胜利
int IsFull(char board[ROW][COL]);
