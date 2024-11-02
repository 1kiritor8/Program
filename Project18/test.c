#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分
////所有偶数位于数组的后半部分
//void move_odd_even(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		//从左向右找一个偶数
//		while ((left < right)&&(arr[left] % 2 == 1))
//		{
//			left++;
//		}
//		//从右往左找一个奇数
//		while ((left < right)&&(arr[right] % 2 == 0))
//		{
//			right--;
//		}
//		//交换
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
//	//输入
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", arr + i);
//	}
//	//调整
//	move_odd_even(arr, sz);
//
//	//输出
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
//	int arr1[m];//c99标准，变长数组
//	int arr2[n];
//	//输入m个整数
//	int i = 0;
//	for (i = 0; i < m; i++)
//	{
//		scanf("%d", &arr1[i]);
//	}
//	//输入n个整数
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr2[i]);
//	}
//	//合并打印
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
	int arr1[m];//c99标准，变长数组
	int arr2[n];
	int arr3[m + n];
	//输入m个整数
	int i = 0;
	for (i = 0; i < m; i++)
	{
		scanf("%d", &arr1[i]);
	}
	//输入n个整数
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr2[i]);
	}
	//合并打印
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