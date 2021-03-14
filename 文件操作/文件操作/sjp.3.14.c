#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//fopen函数如果是以写的形式打开
//	//如果文件不存在，会创建这个文件
//	//fopen
//}
//int mian()
//{
	//const  int i = 10;
	//i = 12;
	/*const 修饰后使i不能被修改
	return 0;*/
//}
//条件操作符
//int main()
//{
//	int i = 1;
//	int j = 2;
//	int max = i > j ? 1: j;
//	printf("%d\n", max);
//}
//void test()
//{
//	static int j= 0;
//	j++;
//	printf("%d\n", j);
//}
////static 修饰局部变量，改变变量的声明周期，使生命周期变长，直到程序结束
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10;i++ )
//	{
//		test();
//	}
//}
//static修饰全局变量和函数，使的全局变量和函数只能在该源文件使用
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 4)
//			break;
//	} while (i);
//	return 0;
//}
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
//void left_move(char* p, int k)
//{
//	int i = 0;
//	int j=strlen(p)-1;
//	while (k--)
//	{
//		//abcdef
//		//cdefab
//		char pa = *p;
//		for (i = 0; i < j; i++)
//		{
//			*(p + i) = *(p + i + 1);
//		}
//		*(p + j ) = pa;
//	}
//}
//倒叙法
//abcdef
//ba fedc
//cdefab
//void resverse(char* pa, char* pc)
//{
//	char* left = pa;
//	char* right = pc;
//	while (left < right)
//	{
//		char mid = *left;
//		*left = *right;
//		*right = mid;
//		left++;
//		right--;
//	}
//	
//}
//void left_move(char* p,int k)
//{
//	int sz = strlen(p)-1;
//	先将ab进行倒叙
//	resverse(p,p+k-1);
//	在将cdef倒叙
//	resverse(p + k , p + sz );
//	//在将整个数组倒叙
//	resverse(p, p + sz);
//}
//int main()
//{
//	char str[] = "abcdef";
//	int k = 2;
//	left_move(str,k);
//	printf("%s\n", str);
//	return 0;
//}
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//abcdefabcedf
//int judge(char *p1, char *p2)
//{
//	int sz = strlen(p1);
//	if (strlen(p1)!= strlen(p2))
//	{
//		return 0;
//	}
//	strncat(p1, p1, sz);
//	char*pa=strstr(p1, p2);
//	if (pa)
//		return 1;
//	else
//		return 0;
//	return 0;
//}
//int main()
//{
//	char s1[20] = "abcdef";
//	char s2[] = "cdef";
//	int ret=judge(s1, s2);
//	if (ret ==1)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//}
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);意思是查找的次数要小于矩阵的元素的个数
//int check(int arr[3][3], int k)
//{
//	int x = 0;
//	int y = 2;
//	while (x<3&&y>=0)
//	{
//		if (arr[x][y] > k)
//			x++;
//		if (arr[x][y] < k)
//			y--;
//		else
//			return 1;
//	}
//	return 0;
//
//}
//int main()
//{
//	//1 2 3
//	//2 3 4
//	//3 4 5
//	int arr[3][3] = { 1, 2, 3, 2, 3, 4, 3, 4, 5 };
//	int k = 7;
//	int ret=check(arr, k);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//}
//在屏幕上打印杨辉三角。
//1
//1 1
//1 2 1
//1 3 3 1
int main()
{

	return 0;
}