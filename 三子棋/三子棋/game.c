#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//���̳�ʼ��
void initBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


  
void DisplayBoard(char board[ROW][COL], int row, int col)//��ӡ����
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//��ӡ����
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
		int j = 0;
			for (j = 0; j < col; j++)
			{
				printf(" %c ", board[i][j]);
				if (j<col - 1)
					printf("|");
			}
			printf("\n");
			//��ӡ�ָ����
			/*if (i<row-1)
			printf("---|---|---\n");*/
			if (i < row - 1)
			{
				for (j = 0; j < col; j++)
				{
					printf("---");
					if (j < col - 1)
						printf("|");
				}
				printf("\n");
			}

	}
}


void Playmove(char board[ROW][COL], int row, int col)//�������
{
	printf("����ߣ�>\n");
	printf("������һ������\n");
	int i = 0;
	int j = 0;
	//�жϺϷ���
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//�ж�����λ���Ƿ���λ��
			if (board[i-1][j-1] == ' ')
			{
				board[i-1][j-1] = '*';
				break;
			}
			else
				printf("�ó������壬������ѡ��");
		}
		else
		{
			printf("����Ƿ���������ѡ��\n");
		}
	}
}



void computermove(char board[ROW][COL], int row, int col)//��������
{
	printf("�����ߣ�>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; i < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

int checkwin(char board[ROW][COL], int row, int col)//�ж���Ӯ
{
	int i = 0;
	//����
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[i][0] != ' ')
		{
			return board[0][i];
		}
	}
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] &&board[1][1]!=' ')
	{
		return board[1][1];
	}
	if (board[1][2] == board[1][1] && board[2][1] == board[1][1] && board[1][1]!= ' ')
	{
		return board[1][1];
	}
	//������ȫ���򷵻�1
	if (full(board,row,col))
	{
		return 'Q';
	}
	return 'c';
}