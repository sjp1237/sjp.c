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
//strcmp�Ƚ��ַ������Ƚ϶�Ӧ�ַ���ASCLL��ֵ
//ģ��ʵ��strcmp
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
//ģ��ʵ��strlen
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
//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص�����
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
//	//��ӡ�����ÿ��Ԫ��
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	resverse(arr, sz);
//	print(arr, sz);
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}
//��̬�ڴ����
//���ٿռ䣬�����������������飬��Ϊ��̬
//malloc�����ڴ�飬��������Ϊvoid*
//int main()
//{
//	int arr[10] = { 0 };//������40���ֽ�
//	//�ڶ����Ͽ���
//	int* p =(int*) malloc(40);
//	//ϣ��40���ֽڵ���һ��10�����ε�����
//	if (p == NULL)
//	{
//		printf("�ڴ濪��ʧ��\n");
//	}
//	else
//	{
//		//���ٳɹ�
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = 0;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", p[i]);
//		}
//		//����ʹ��pָ��Ķ�̬�ڴ�
//		//�ֶ��ͷŶ�̬���ٵ��ڴ�
//		//malloc��freeҪ�ɶԳ���
//		free(p);
//		//��p�ĵ�ַ��Ϊ��ָ��
//		p = NULL;
//	}
//	return 0;
//}
//calloc���ٵĿռ��ǳ�ʼ��,ÿ���ռ�Ϊ0
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
//		//�ռ䲻����,�����ռ�
//		int*ptr=(int*) realloc(p,80);//�����ռ��С��
//		free(p);
//		p = NULL;
//	}
//	return 0;
//}

