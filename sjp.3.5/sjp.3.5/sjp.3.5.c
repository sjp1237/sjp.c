#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*arr[5])(int x,int y) = {0,add,sub,mul,div};
//	//����ָ�������Ҫ�ӣ�int x��int y��
//	int input = 1;
//	//�ж��Ƿ���������
//	while (input)
//	{
//		scanf("%d", &input);
//		if (input > 0 && input < 5)
//		{
//			int x, y;
//			printf("********1.sum*************\n");
//			printf("********2.sub*************\n");
//			printf("********3.mul*************\n");
//			printf("********4.div*************\n");
//			printf("**************************\n");
//			printf("��ѡ��>");
//			scanf("%d%d", &x, &y);
//			int sum = (*arr[input])(x, y);//�����Ľ�����*��Ҫ��������
//			printf("%d\n", sum);
//		}
//		else if (input == 0)
//		{
//			printf("�˳������\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//
//	}
//	return 0;
//}
//void test(int y)
//{
//
//}
//int main()
//{
//	void(* pfun)(int)=test;//����ָ��
//	void(*test[5])(int);//����ָ������
//	return 0;
//}
//qsort������ʹ��
//qsort(���飬���ٸ�Ԫ�أ�ÿ��Ԫ�صĴ�С���ȽϺ�����������
//�ȽϺ����Ĺ̶�ģʽ int int_cmp(const void* p1,const void *p2)
//int cmp(const void* p1, const void* p2)
//{
//	return *((int*)p2) - *((int*)p1);
//}
//int main()
//{
//	int arr[] = { 0, 2, 3, 4, 5, 8, 7, 24, 3 };
//	qsort(arr, sizeof(arr) / sizeof(arr[0]),sizeof(arr[0]),cmp);
//	for (int i = 0;i< sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//int cmp_char(const void* p1, const void* p2)
//{
//	return*((char*)p1) - *((char*)p2);
//}
//int main()
//{
//	char str[10] = "baced";
//	qsort(str, strlen(str), sizeof(str[0]), cmp_char);
//	printf("%s\n", str);
//	return 0;
//}
//sizeof(���������������������ʾ�������飬��������Ԫ�صĴ�С
//&����������ʾ�����������飬ȡ���ĵ�ַ����������ĵ�ַ
//�������������ʾ��Ԫ�صĵ�ַ
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16 ��������Ĵ�С
//	printf("%d\n", sizeof(a + 0));//4\8 ������Ԫ�صĴ�С
//	printf("%d\n", sizeof(*a));//16 ��һ��Ԫ��
//	printf("%d\n", sizeof(a + 1));//4\8 �ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4
//	printf("%d\n", sizeof(&a));//4\8
//	printf("%d\n", sizeof(*&a));//16
//	printf("%d\n", sizeof(&a + 1));//4\8
//	printf("%d\n", sizeof(&a[0]));//4\8
//	printf("%d\n", sizeof(&a[0] + 1));//4\8
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//
//	printf("%d\n", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//	//printf("%d\n", strlen(*arr));//����
//	//printf("%d\n", strlen(arr[1]));//����
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ-1
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 ע��Ҫ����\0
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//����
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5
//	return 0;
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));//4
//	printf("%d\n", sizeof(p + 1));//4
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4
//	printf("%d\n", sizeof(&p + 1));//4
//	printf("%d\n", sizeof(&p[0] + 1));//4
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//����
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//���ֵ
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//4
//	printf("%d\n", sizeof(a[0] + 1));//4
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4
//	printf("%d\n", sizeof(*(a + 1)));//16
//	printf("%d\n", sizeof(&a[0] + 1));//4
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//16
//	return 0;
//}
