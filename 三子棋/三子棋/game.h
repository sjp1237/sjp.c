#include<stdio.h>
#define ROW 3
#define COL 3
#include<stdlib.h>
#include<time.h>
//����������
void initBoard(char board[ROW][COL], int row, int col);//��ʼ������
void DisplayBoard(char board[ROW][COL],int row, int col);//��ӡ����
void Playmove(char board[ROW][COL], int row, int col);//�������
void computermove(char board[ROW][COL], int row, int col);//��������
//�ж���Ӯ
//����Ӯ '#'
//���Ӯ '*'
//ƽ��   '0'
//����  'c'
int checkwin(char board[ROW][COL], int row, int col);//�ж���Ӯ
