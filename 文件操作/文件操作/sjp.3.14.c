#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int main()
//{
//	//fopen�����������д����ʽ��
//	//����ļ������ڣ��ᴴ������ļ�
//	//fopen
//}
//int mian()
//{
	//const  int i = 10;
	//i = 12;
	/*const ���κ�ʹi���ܱ��޸�
	return 0;*/
//}
//����������
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
////static ���ξֲ��������ı�������������ڣ�ʹ�������ڱ䳤��ֱ���������
//int main()
//{
//	int i = 0;
//	for (i = 0; i<10;i++ )
//	{
//		test();
//	}
//}
//static����ȫ�ֱ����ͺ�����ʹ��ȫ�ֱ����ͺ���ֻ���ڸ�Դ�ļ�ʹ��
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
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
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
//����
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
//	�Ƚ�ab���е���
//	resverse(p,p+k-1);
//	�ڽ�cdef����
//	resverse(p + k , p + sz );
//	//�ڽ��������鵹��
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
//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
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
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);��˼�ǲ��ҵĴ���ҪС�ھ����Ԫ�صĸ���
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
//����Ļ�ϴ�ӡ������ǡ�
//1
//1 1
//1 2 1
//1 3 3 1
int main()
{

	return 0;
}