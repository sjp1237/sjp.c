#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//	//memset只能作用一个字节
//	int arr1[10] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 1, 2, 5, 6, 7 };
//	int ret=memcmp(arr1, arr2, 9);
//	//memcmp是以字节为单位来进行比较
//	printf("%d\n", ret);
//	return 0;
//}
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
//void move_digit(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		1 3 5 7 9 
//		while (left<right&&arr[left] % 2 == 1)
//		{
//			left++;
//		}
//		while (left<right&&arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		if (right>left)
//		{
//			int rent = arr[left];
//			arr[left] = arr[right];
//			arr[right] = rent;
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8,9 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	move_digit(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//	return 0;
//}
//模拟实现strlen
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "abcdef";
//	int ret=my_strlen(str);
//	printf("%d\n", ret);
//	return 0;
//}
//模拟实现strcpy
//拷贝一个字符串
void my_strcpy(char* pa,const char *pc)
{
	assert(pa&&pc);
	/*while (*pc != '\0')
	{
		*pa = *pc;
		pa++;
		pc++;
	}
	*pa = '\0';*/
	while (*pa++ = *pc++)
	{

	}
}
int main()
{
	char str[80];
	my_strcpy(str, "i like cze");
	printf("%s\n", str);
	return 0;
}