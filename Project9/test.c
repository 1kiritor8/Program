#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//��ӡ�����ÿ��Ԫ�صĵ�ַ
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}*/
//	//printf("%d\n", arr[4]);
//	/*for ( i = sz-1;i >= 0; i-- )
//	{
//		printf("%d ", arr[i]);
//	}*/
//
//	return 0;
//}

//
//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	//printf("%d\n", arr[2][0]);
//	/*for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}*/
//	return 0;
//}



//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//
//
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { 1,2,3,4,2,3,4,5,3,4,5,6 };
//		int i = 0;
//		for (i = 0; i < 3; i++)
//		{
//			int j = 0;
//			for (j = 0; j < 4; j++)
//			{
//				printf("&arr[%d][%d]= %p\n", i, j, &arr[i][j]);
//			}
//		}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//	}
//	return 0;
//}


//ð������
//���鴫�ε�ʱ���β�������д��
//1.����
//2.ָ��


//������ʽ
//void bubble_sort(int arr[],int sz)
// ָ����ʽ
//void bubble_sort(int* arr,int sz)
//{
//	//����
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð������
//		int j = 0;
//		for (j = 0; j< sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				//����
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	//����
//	//������������ų�����
//	int arr[] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ð��������㷨���������������
//	bubble_sort(arr,sz);
//	int i=0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//������ȷʵ�ܱ�ʾ��Ԫ�صĵ�ַ
//�������������⣺
//1.sizeof�������������������������ʾ�������飬���������������Ĵ�С����λ���ֽ�
//2.&���������������������ʾ�����������飬ȡ��������������ĵ�ַ


//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//arr������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//	printf("------------------\n");
//	printf("%p\n", &arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//	printf("------------------\n");
//
//	printf("%p\n", &arr);//����ĵ�ַ
//	printf("%p\n", &arr+1);
//
//
//
//
//	/*int n = sizeof(arr);
//	printf("%d\n", n);*/
//	return 0;
//}


//��ά�����������������


int main()
{
	int arr[3][4];

	printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	//int sz = sizeof(arr);
	//printf("%d\n", sz);


	//printf("%p\n",arr);//��ά�����������Ҳ��ʾ��Ԫ�صĵ�ַ
	//printf("%p\n", arr + 1);
	return 0;
}