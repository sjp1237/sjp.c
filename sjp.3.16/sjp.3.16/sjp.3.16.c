#define _CRT_SECURE_NO_WARNINGS 1
//求一个斐波那阶数（非递归）
#include<stdio.h>
//int fabio(int n)
//{
//	int fib1 = 1;
//	int fib2 = 1;
//	int fib3 = 3;
//	int i = 0;
//	for (i = 0; i < n - 2; i++)
//	{
//		fib3 = fib1 + fib2;
//		fib1 = fib2;
//		fib2 = fib3;
//	}
//	return fib3;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fabio(n);
//	printf("%d\n", ret);
//	return 0;
//}
//求n的阶乘
//int fib(int n)
//{
//	if (n == 1)
//		return 1;
//	return n*fib(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret=fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//接受一个整型值（无符号），按照顺序打印它的每一位。 例如： 输入：1234，输出 1 2 3 4.
//
//void print(int n)
//{
//	if (n > 10)
//		print(n / 10);
//	//1234
//		printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//用函数递归模拟实现strlen
//int my_strlen(char* p1)
//{
//	if (*p1 == '\0')
//		return 0;
//	return my_strlen(p1 + 1) + 1;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	int ret=my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}
//写一个函数求 unsigned int 型变量x在内存中二进制1的个数
//int numberof(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		count++;
//		i = i&(i-1);
//	}
//	return count;
//}
//int main()
//{
//	unsigned int i = 5;
//	int ret=numberof(i);
//	printf("%d\n", ret);
//}
//有一个数组a，编写函数，求数组中前k个最小的数字
//int mini(int arr[9], int k)
//{
//	int mix = arr[0];
//	int i = 0;
//	for (i = 0; i<k; i++)
//	{
//		if (mix > arr[i])
//			mix = arr[i];
//	}
//	return mix;
//}
//int main()
//{
//	int arr[] = { 23, 4, 5, 9, 1, 3, 0, 34, 2 };
//	int k = 0;
//	scanf("%d", &k);
//	int ret=mini(arr, k);
//	printf("%d\n", ret);
//	return 0;
//}
