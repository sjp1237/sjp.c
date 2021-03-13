#include<stdio.h>
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
//函数的声明
void initBoard(char board[ROW][COL], int row, int col);//初始化棋盘
void DisplayBoard(char board[ROW][COL],int row, int col);//打印棋盘
void Playmove(char board[ROW][COL], int row, int col);//玩家下棋
void computermove(char board[ROW][COL], int row, int col);//电脑下棋
//判断输赢
//电脑赢 '#'
//玩家赢 '*'
//平局   '0'
//继续  'c'
int checkwin(char board[ROW][COL], int row, int col);//判断输赢
