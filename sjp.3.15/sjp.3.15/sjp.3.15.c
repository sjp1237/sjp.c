#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//1
//1 1
//1 2 1
//1 3 3 1
//int main()
//{
//	int arr[30][30] = { 1 };
//	int i, j;
//	int n = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		arr[i][0] = 1;
//		for (j = 1; j <= i; j++)
//		{
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0; 
//}
//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵�������ҡ�
//B˵����C��
//C˵����D��
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ���
//�����������Щ��Ϣ��дһ��������ȷ������˭������
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') +
//			(killer == 'c') +
//			(killer == 'd') +
//			(killer != 'd') ==3)
//		{
//			printf("killer is %c\n", killer);
//			break;
//		}
//	}
//	return 0;
//}
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C= 0;
//	int D = 0;
//	int E = 0;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E= 1; E <= 5; E++)
//					{
//						if (((B == 2) + (A == 3) == 1) &&
//							((B == 2) + (E == 4) == 1) &&
//							((C == 1) + (D == 2) == 1) &&
//							((C == 5) + (D == 3) == 1) &&
//							((E == 4) + (A == 1) == 1)&&A*B*C*D*E==120
//							)
//							printf("A=%d,B=%d,C=%d,D=%d,E=%d\n", A, B, C, D, E);
//					}
//				}
//			}
//		}
//	}
//
//}