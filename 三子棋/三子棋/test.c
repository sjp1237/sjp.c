#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ʹ��game.h�ϵı���
#include"game.h"
void menu()
{
	printf("*******************************\n");
	printf("*                             *\n");
	printf("*      1.������Ϸ             *\n");
	printf("*      0.�˳���Ϸ             *\n");
	printf("*                             *\n");
	printf("*                             *\n");
	printf("*******************************\n");

}
void game()
{
	char ret = 0;
	char board[ROW][COL];//��ʼ��Ϊ�ո�
	//��ʼ�����̣���ʼ��Ϊ�ո�
	initBoard(board,ROW,COL);
	DisplayBoard(board, ROW, COL);
	//ROW�� COL�� ��������������
	while (1)
	{
		//�������
		Playmove(board, ROW, COL);
	    //�ж���Ӯ
		ret = checkwin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		DisplayBoard(board, ROW, COL);
		//��������
		printf("\n");
		computermove(board, ROW, COL);//�������
		
		DisplayBoard(board, ROW, COL);
		printf("\n");
		ret = checkwin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		//��ӡ����
		DisplayBoard(board, ROW, COL);

	}
	if (ret == '#')
		printf("����Ӯ��\n");
	else if (ret == '*')
		printf("���Ӯ��\n");
	else if (ret == 'Q')
		printf("ƽ��\n");

}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		//��ӡһ���˵�
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//��������Ϸ
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,������ѡ��\n");
			break;
		}
		
	} while (input);
	return 0;
}