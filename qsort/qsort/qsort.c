#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//void*可以接受任意类型的指针，但不能解引用
//练习使用库函数，qsort排序各种类型的数据
//int cmp_int(const void* p1, const void* p2)
//{
//	return *((int*)p1) - *((int*)p2);
//}
////void test1()
////{
////	int i = 0;
////	int arr[10] = { 4, 2, 5, 6, 1, 3, 6, 9, 8, 0 };
////	int sz = sizeof(arr) / sizeof(arr[0]);
////	qsort(arr, sz, sizeof(arr[0]), cmp_int);
////	for (i = 0; i < sz; i++)
////	{
////		printf("%d ", arr[i]);
////	}
////}
//
//struct student
//{
//	char name[20];
//	int age;
//};
//int strcmp_student_name(const void* p1, const void* p2)
//{
//	return strcmp(((struct student*)p1)->name, ((struct student*)p2)->name);
//}
//
#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int arr[10][10] = { 0 };
	scanf("%d %d", &n, &m);
	int i = 0;
	int j = 0;
	for (i = 0; i<n; i++)
	{
		for (j = 0; j<m; j++)
		{
			scanf("%d ", &arr[i][j]);
		}
	}
	int k = 0;
	scanf("%d", &k);
	for (i = 0; i<k; k++)
	{
		int a = 0;
		int b = 0;
		char t = 0;
		scanf(" %c %d%d", t, &a, &b);
		if (t == 'r')
		{
			for (j = 0; j<m; j++)
			{
				int tmp = arr[a][j];
				arr[a][j] = arr[b][j];
				arr[b][j] = arr[a][j];
			}
		}
		else if(t == 'c')
		{
			for (j = 0; j<n; j++)
			{
				int tmp = arr[j][a];
				arr[j][a] = arr[j][b];
				arr[j][b] = tmp;
			}
		}
		
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}