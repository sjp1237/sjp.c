#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//棋盘初始化
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


  
void DisplayBoard(char board[ROW][COL], int row, int col)//打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//打印数据
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
		int j = 0;
			for (j = 0; j < col; j++)
			{
				printf(" %c ", board[i][j]);
				if (j<col - 1)
					printf("|");
			}
			printf("\n");
			//打印分割的行
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


void Playmove(char board[ROW][COL], int row, int col)//玩家下棋
{
	printf("玩家走：>\n");
	printf("请输入一个坐标\n");
	int i = 0;
	int j = 0;
	//判断合法性
	while (1)
	{
		scanf("%d%d", &i, &j);
		if (i >= 1 && i <= row && j >= 1 && j <= col)
		{
			//判断棋盘位置是否有位置
			if (board[i-1][j-1] == ' ')
			{
				board[i-1][j-1] = '*';
				break;
			}
			else
				printf("该出已落棋，请重新选择");
		}
		else
		{
			printf("坐标非法，请重新选择\n");
		}
	}
}



void computermove(char board[ROW][COL], int row, int col)//电脑下棋
{
	printf("电脑走：>\n");
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

int checkwin(char board[ROW][COL], int row, int col)//判断输赢
{
	int i = 0;
	//三行
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
	//若棋盘全满则返回1
	if (full(board,row,col))
	{
		return 'Q';
	}
	return 'c';
}