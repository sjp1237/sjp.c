#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//ģ��ʵ��memcpy
void my_memcpy(void*dest,const void* src,size_t count)
{
	assert(dest&&src);
	while (count--)
	{
		*((char*)dest) = *((char*)src);
		((char*) dest)++;
		((char*)src)++;
		//++�����ȼ�����char*
	}

}
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5, 6 };
	int arr2[20] = { 0 };
	//memcpy(arr2, arr1, 16);//�ڴ濽��
	//memcpy�����ǿ���������ڴ���
	my_memcpy(arr2, arr1, 16);
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		printf("%d ", *(arr2 + i));
	}

	return 0;
}
//memcpy��ʹ��
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
//memmove��ʹ��
//memmove��ģ��ʹ��
// void my_memmove(void* dest, const void* src, size_t count)
//{
//	//��ǰ����
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
//		//�Ӻ���ǰ
//}
//
//int main()
//{
//	int i = 0;
//	int arr[20] = { 1, 2, 3, 4, 5, 6, 7, 8,9 };
//	/*memmove(arr+2, arr , 16);*/
//	//memmove�����������ص��ĵط�
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
//	printf("ʹ��ǰ��%c\n", p);
//	//isupper�жϴ�д��ĸ
//	//islower�ж�Сд��ĸ����ΪСд���򷵻���
//	//tolower����д��ĸת��ΪСд��ĸ
//	//toupper��Сд��ĸת��Ϊ��д��ĸ
//	p=tolower(p);
//	printf("ʹ�ú�%c\n", p);
//	return 0;
//}
//��һ�������еĴ�д��ĸ��ΪСд��ĸ
//int main()
//{
//	char str[] = "I like CZE";
//	int i = 0;
//	char p;
//	while (str[i])
//	{
//		//�жϴ�д��ĸ
//		if (isupper(str[i]))
//		{
//			//����д��ĸת��ΪСд��ĸ
//			str[i] = tolower(str[i]);
//			//tolower���õ���һ���ַ������������ַ���
//		}
//		printf("%c",str[i] );
//		i++;
//	}
//	printf("\n");
//	return 0;
//}
