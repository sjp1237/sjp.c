#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "bcdg";
//	char* ret=strstr(arr1, arr2);
//	//strstr的作用找出arr2数组是否存在arr1中，如果有则，则返回在arr1中的地址
//	//如果没有，则返回NULL
//	if (ret == NULL)
//	{
//		printf("对不起，找不到\n");
//	}
//	else
//	printf("%s\n", ret);
//	return 0;
//}
//模拟实现strstr
//char* my_strstr(const char *str1,const char*str2)
//{
//	assert(str1&&str2);
//	//断言 防止str1和str2出现空指针
//	char* pc = str1;
//	char* p2 = str2;
//	char* p1 = pc;
//	while (*p1 &&*p2)
//	{
//
//		p1 = pc;
//		p2 = str2;
//		while (*p1&&*p2&&*p1 == *p2)
//			//*p1和*p2不能\0，若两个都为\0，则会继续++
//		{
//			p1++;
//			p2++;
//		}
		/*if (*p2 != '\0')
		{
			pc++;

		}
	}
	if (*p2 == '\0')
	{
		return pc;
	}
	else
		return NULL;
}
int main()
{
	char str1[] = "abcbcdef";
	char str2[] = "bcdef";
	char* ret=my_strstr(str1, str2);
	printf("%s\n", ret);
	return 0;
}*/
//模拟strlen
//int my_strlen(char* str1)
//{
//	int count = 0;
//	while(*str1 != '\0')
//	{
//		str1++;
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
//int main()
//{
//	char str1[100] = "abc";
//	char str2[] = "abcdef";
//	strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}
//模拟实现strcpy
//void my_strcpy(char* str1, const char* str2)
//{
//	assert(str1&&str2);
//	/*char *p1 = str1;
//	char* p2 = str2;
//	while (*p2 != '\0')
//	{
//		*p1 = *p2;
//		p1++;
//		p2++;
//	}*/
//	while (*str1++ = *str2++)
//		//将上述内容简化
//	{
//
//	}
//}
//int main()
//{
//	char str1[100] = { '\0' };
//	char str2[] = "abcd";
//	my_strcpy(str1, str2);
//	printf("%s\n", str1);
//	return 0;
////}
//int main()
//{
//	char str1[10] = "abc";
//	char str2[] = "efg";
//	strcat(str1, str2);
//	printf("%s\n", str1);
//	return 0;
//}
//模拟实现strcat
//strcat的功能是连接字符串
void my_strcat(char* str1, const char* str2)
{
	char* p1 = str1;
	while (*p1)
	{
		p1++;
	}
	while (*p1++ = *str2++)
	{

	}
}
int main()
{
	char str1[20] = "i like";
	char str2[] = " cze";
	my_strcat(str1, str2);
	printf("%s\n", str1);
	return 0;
}