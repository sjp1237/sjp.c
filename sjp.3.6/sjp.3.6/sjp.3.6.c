#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 = AABCD��s2 = BCDAA������1
����s1 = abcd��s2 = ACBD������0.
AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA
AABCD����һ���ַ��õ�DAABC*/
//
//int main()
//{
//	
//}judge_()
//{
//
//}
//����С������*���Լ��=�������ĳ˻�
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	//�����Լ��
//	//��˷�
//	int bit = 0;
//	int ret = 0;
//	ret = x*y;
//	int z = 0;
//	while (y)
//	{
//		z = x%y;
//		x = y;
//		y = z;
//	}
//	//���Լ��Ϊx
//	//���ݴ�Լ�������С������
//	bit = ret / x;
//	printf("%d\n", bit);
//	return 0;
//}
//���𵥴�
//���� I like beijing.���beijing. like i
//˼·���Ȱ��������ӽ��е��� Ȼ���ڵ���ÿ������
//.gnijieb ekil i
//beijing. like i
void swap(char str[],char* sz)
{
	char* left = str;
	char* right = sz;
	while (left < right)
	{
		char mid = *left;
		*left = *right;
		*right = mid;
		left++;
		right--;
	}
}
int main()
{
	char str[100] = { 0 };
	gets(str);
	int sz=strlen(str);
	//strlen�������ֵ�����ո�
	swap(str,str+sz-1);
	//����Ԫ�صĵ�ַ��ĩ��ַ����ȥ
	//hij efg abc
	//�ֱ𴴽����ʵ���Ԫ�ص�ַ��ĩԪ�ص�ַ
	char* start = str;
	char* end = str;
	while (*start != '\0')
	{
		end = start;
		while ((*end) != ' '&&(*end)!='\0')
		{
			end++;
		}
		swap(start, end - 1);
		//�������ո�ʱ��ǰ���һ��Ԫ��ΪĩԪ��
		start = end +1;
		//�ո����һ��Ԫ��Ϊ��һ�����ʵ���Ԫ�ص�ַ
	}
	puts(str);
	return 0;
}
