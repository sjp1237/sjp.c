#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
/*写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 = AABCD和s2 = BCDAA，返回1
给定s1 = abcd和s2 = ACBD，返回0.
AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA
AABCD右旋一个字符得到DAABC*/
//
//int main()
//{
//	
//}judge_()
//{
//
//}
//求最小公倍数*最大公约数=两个数的乘积
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	//求最大公约数
//	//叉乘法
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
//	//最大公约数为x
//	//根据大公约数求出最小公倍数
//	bit = ret / x;
//	printf("%d\n", bit);
//	return 0;
//}
//倒叙单词
//比如 I like beijing.变成beijing. like i
//思路：先把整个句子进行倒叙 然后在倒叙每个单词
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
	//strlen求出来的值包括空格
	swap(str,str+sz-1);
	//将首元素的地址和末地址传进去
	//hij efg abc
	//分别创建单词的首元素地址和末元素地址
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
		//当传到空格时，前面的一个元素为末元素
		start = end +1;
		//空格的下一个元素为下一个单词的首元素地址
	}
	puts(str);
	return 0;
}
