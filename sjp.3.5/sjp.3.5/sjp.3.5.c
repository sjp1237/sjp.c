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
//	//函数指针数组后要加（int x，int y）
//	int input = 1;
//	//判断是否进入计算器
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
//			printf("请选择：>");
//			scanf("%d%d", &x, &y);
//			int sum = (*arr[input])(x, y);//函数的解引用*号要在括号内
//			printf("%d\n", sum);
//		}
//		else if (input == 0)
//		{
//			printf("退出计算机\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
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
//	void(* pfun)(int)=test;//函数指针
//	void(*test[5])(int);//函数指针数组
//	return 0;
//}
//qsort函数的使用
//qsort(数组，多少个元素，每个元素的大小，比较函数数组名）
//比较函数的固定模式 int int_cmp(const void* p1,const void *p2)
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
//sizeof(数组名）这里的数组名表示整个数组，计算整个元素的大小
//&数组名，表示的是整个数组，取出的地址是整个数组的地址
//其余的数组名表示首元素的地址
//int main()
//{
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16 整个数组的大小
//	printf("%d\n", sizeof(a + 0));//4\8 数组首元素的大小
//	printf("%d\n", sizeof(*a));//16 第一个元素
//	printf("%d\n", sizeof(a + 1));//4\8 第二个元素的地址
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
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	//printf("%d\n", strlen(*arr));//出错
//	//printf("%d\n", strlen(arr[1]));//出错
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7 注意要计算\0
//	printf("%d\n", sizeof(arr + 0));//4
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4
//	printf("%d\n", sizeof(&arr + 1));//4
//	printf("%d\n", sizeof(&arr[0] + 1));//4
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//出错
//	//printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//随机值
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
//	//printf("%d\n", strlen(p[0]));//出错
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//随机值
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
