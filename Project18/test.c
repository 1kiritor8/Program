#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


////����һ���������飬ʵ��һ��������
////�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿��
////����ż��λ������ĺ�벿��
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		//����������һ��ż��
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//����������һ������
//		while ((left < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//����
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	//����
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", arr + i);
//	}
//	//����
//	move_odd_even(arr, sz);
//
//	//���
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int arr1[m];//c99��׼���䳤����
//	int arr2[n];
//	//����m������
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//����n������
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//�ϲ���ӡ
//	int j = 0;
//	int k = 0;
//	while (j < m && k < n)
//	{
//		if (arr1[j] < arr2[k])
//		{
//			printf("%d ", arr1[j]);
//			j++;
//		}
//		else
//		{
//			printf("%d ", arr2[k]);
//			k++;
//		}	
//	}
//	if (j < n)
//	{
//		for (; j < m; j++)
//		{
//			printf("%d ", arr1[j]);
//		}
//	}
//	else
//	{
//		for (; k < n; k++)
//		{
//			printf("%d ", arr2[k]);
//		}
//	}
//	return 0;
//}


int main()
{
	int m = 0;
	int n = 0;
	scanf("%d %d", &m, &n);
	int arr1[m];//c99��׼���䳤����
	int arr2[n];
	int arr3[m + n];
	//����m������
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	//����n������
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//�ϲ���ӡ
	int j = 0;
	int k = 0;
	int r = 0;
	while (j < m && k < n)
	{
		if (arr1[j] < arr2[k])
		{
			arr3[r++] = arr1[j];
			j++;
		}
		else
		{
			arr3[r++] = arr2[k];
			k++;
		}	
	}
	if (j < n)
	{
		for (; j < m; j++)
		{
			arr3[r++] = arr1[j];
		}
	}
	else
	{
		for (; k < n; k++)
		{
			arr3[r++] = arr2[k];
		}
	}
	for (i = 0;i < m + n; i++)
	{
		printf("%d ", arr3[i]);
	}
	return 0;
}