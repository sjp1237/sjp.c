#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//模拟实现memcpy
void my_memcpy(void*dest,const void* src,size_t count)
{
	assert(dest&&src);
	while (count--)
	{
		*((char*)dest) = *((char*)src);
		((char*) dest)++;
		((char*)src)++;
		//++的优先级大于char*
	}

}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 16);//内存拷贝
	//memcpy函数是拷贝不相关内存块的
	my_memcpy(arr2, arr1, 16);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(arr2 + i));
	}

	return 0;
}
//memcpy的使用
//int main()
//{
//	int i = 0;
//	int arr1[20] = { 0 };
//	int arr2[] = { 0, 1, 2, 3, 4, 5, 6 };
//	memcpy(arr1, arr2, 20);
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(arr1 + i));
//	}
//	printf("\n");
//	return 0;
//}
//memmove的使用
//memmove的模拟使用
// void my_memmove(void* dest, const void* src, size_t count)
//{
//	//从前往后
//	if (dest < src)
//	{
//		while (count--)
//		{
//			*((char*)dest)= *((char*) src);
//			((char*)dest)++;
//			((char*)src)++;
//		}

//	}
//	else
//	while (count--)
//	{
//		*((char*)dest + count) = *((char*)src + count);
//	}
//		//从后往前
//}
//
//int main()
//{
//	int i = 0;
//	int arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8,9 };
//	/*memmove(arr+2, arr , 16);*/
//	//memmove可以作用于重叠的地方
//	my_memmove(arr + 2, arr, 16);
//	for (i = 0; i < 9; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//int main()
//{
//	char p = 'A';
//	int ret = islower(p);
//	printf("使用前：%c\n", p);
//	//isupper判断大写字母
//	//islower判断小写字母，若为小写，则返回真
//	//tolower将大写字母转化为小写字母
//	//toupper将小写字母转化为大写字母
//	p=tolower(p);
//	printf("使用后：%c\n", p);
//	return 0;
//}
//将一个数组中的大写字母变为小写字母
//int main()
//{
//	char str[] = "I like CZE";
//	int i = 0;
//	char p;
//	while (str[i])
//	{
//		//判断大写字母
//		if (isupper(str[i]))
//		{
//			//将大写字母转变为小写字母
//			str[i] = tolower(str[i]);
//			//tolower作用的是一个字符，不能作用字符串
//		}
//		printf("%c",str[i] );
//		i++;
//	}
//	printf("\n");
//	return 0;
//}
