#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//可以使用game.h上的变量
#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("*                             *\n");
	printf("*      1.进入游戏             *\n");
	printf("*      0.退出游戏             *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*******************************\n");

}
void game()
{
	char ret = 0;
	char board[ROW][COL];//初始化为空格
	//初始化棋盘，初始化为空格
	initBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	//ROW行 COL列 这样定义更加灵活
	while (1)
	{
		//玩家下棋
		Playmove(board, ROW, COL);
	    //判断输赢
		ret = checkwin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//电脑下棋
		printf("\n");
		computermove(board, ROW, COL);//随机下棋
		
		DisplayBoard(board, ROW, COL);
		printf("\n");
		ret = checkwin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//打印棋盘
		DisplayBoard(board, ROW, COL);

	}
	if (ret == '#')
		printf("电脑赢了\n");
	else if (ret == '*')
		printf("玩家赢了\n");
	else if (ret == 'Q')
		printf("平局\n");

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		//打印一个菜单
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,请重新选择\n");
			break;
		}
		
	} while (input);
	return 0;
}