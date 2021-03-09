#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}
//char* my_strstr(char* s1, char* s2)
//{
//	//abccef
//	//cef
//	char* pc = s1;
//	while (*pc)
//	{
//		char*p1 = pc;
//		char* p2 = s2;
//		while (*p1&&*p2&&*p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == '\0')
//		{
//			return pc;
//		}
//		pc++;
//	}
//	return NULL;
//}
//int main()
//{
//	char str1[] = "abccef";
//	char str2[] = "cef";
//	char* ret=my_strstr(str1, str2);
//	printf("%s\n", ret);
//	return 0;
//}
//int main()
//{
//	char s1[] = "abc";
//	char s2[] = "abcdef";
//	int ret=strcmp(s1, s2);
//	printf("%d\n", ret);
//	return 0;
//}
//strcmp比较字符串，比较对应字符的ASCLL码值
//模拟实现strcmp
//int my_strcmp(const char* s1, const char* s2)
//{
//	assert(s1&&s2);
//	while (*s1== *s2)
//	{
//		if (*s1 == '\0')
//			return 0;
//		s1++;
//		s2++;
//	}
//	if (*s1 > *s2)
//	{
//		return 1;
//	}
//	else
//		return -1;
//}
//int main()
//{
//	char s1[] = "abc";
//	char s2[] = "abcdef";
//	int ret = my_strcmp(s1, s2);
//	printf("%d\n", ret);
//	return 0;
//}
//模拟实现strlen
//int my_strlen(char* s1)
//{
//	int count = 0;
//	while (*s1++ != '\0')
//	{
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str1[] = "abcdef";
//	int ret = my_strlen(str1);
//	printf("%d\n", ret);
//	return 0;
//}
//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置
//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *arr++);
//	}
//	printf("\n");
//}
//void resverse(int* arr, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int ret = arr[left];
//		arr[left] = arr[right];
//		arr[right] = ret;
//		left++;
//		right--;
//	}
//}
//void init(int* arr,int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//
//}
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	//打印数组的每个元素
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	resverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//动态内存管理
//开辟空间，创建变量，创建数组，都为静态
//malloc开辟内存块，返回类型为void*
//int main()
//{
//	int arr[10] = { 0 };//申请了40个字节
//	//在堆区上开辟
//	int* p =(int*) malloc(40);
//	//希望40个字节当成一个10个整形的数组
//	if (p == NULL)
//	{
//		printf("内存开辟失败\n");
//	}
//	else
//	{
//		//开辟成功
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//不再使用p指向的动态内存
//		//手动释放动态开辟的内存
//		//malloc和free要成对出现
//		free(p);
//		//把p的地址赋为空指针
//		p = NULL;
//	}
//	return 0;
//}
//calloc开辟的空间是初始化,每个空间为0
//int main()
//{
//	int* p=calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		fot(i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//		//空间不够了,调整空间
//		int*ptr=(int*) realloc(p,80);//调整空间大小的
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

