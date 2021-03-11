#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//判断大小端
//int main()
//{
//	int i = 1;
//	char* p = (char*)&i;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//	return 0;
//}
//用指针数组创建一个计算器
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
//		printf("请选择功能\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个整数\n");
//			scanf("%d%d", &i, &j);
//			int sum = (*ptr[input])(i,j);//函数指针数组的引用
//			printf("%d\n", sum);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算\n");
//			break;
//		}
//		else
//			printf("选择错误，请重新选择");
//	} while (input);
//	return 0;
//}
//辗转相除法求最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	int i = a;
//	//将a，b的值保存在i和j
//	int j = b;
//	while (b)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("最大公约数=%d\n", a);
//	//求最小公倍数
//	//最大公约数乘*最小公倍数=两个数的乘积i*j
//	int ret = (i*j) / a;
//	printf("最小公倍数=%d\n", ret);
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