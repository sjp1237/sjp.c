#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�жϴ�С��
//int main()
//{
//	int i = 1;
//	char* p = (char*)&i;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//	return 0;
//}
//��ָ�����鴴��һ��������
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int i, j;
//	int input = 1;
//	int(*ptr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		printf("��ѡ����\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("��������������\n");
//			scanf("%d%d", &i, &j);
//			int sum = (*ptr[input])(i,j);//����ָ�����������
//			printf("%d\n", sum);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else
//			printf("ѡ�����������ѡ��");
//	} while (input);
//	return 0;
//}
//շת����������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	int i = a;
//	//��a��b��ֵ������i��j
//	int j = b;
//	while (b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("���Լ��=%d\n", a);
//	//����С������
//	//���Լ����*��С������=�������ĳ˻�i*j
//	int ret = (i*j) / a;
//	printf("��С������=%d\n", ret);
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	//
	int i = 1;
	while ((a*i) % b)
	{
		i++;
	}
	printf("%d\n", a*i);
	return 0;
}