#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//#include<math.h>
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	scanf("%d", &input);
//	int i = 0;
//	while (input)
//	{
//		int bit = input % 10;
//		if (bit % 2 == 1)
//		{
//			bit = 1;
//		}
//		else
//		{
//			bit = 0;
//		}
//		sum += bit * pow(10, i++);
//		input /= 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i + j < n - 1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	double price = 0.0;
//	int m = 0;
//	int d = 0;
//	int flag = 0;
//	scanf("%lf %d %d %d", &price, &m, &d, &flag);
//	if (m == 11 && d == 11)
//	{
//		price = price * 0.7 - flag * 50;
//	}
//	else if (m == 12 && d == 12)
//	{
//		price = price * 0.8 - flag * 50;
//	}
//	if (price < 0.0)
//		printf("%.2lf\n", 0);
//	else
//		printf("%.2lf\n", price);
//	return 0;
//}


//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1)
//							&& ((b==2) + (e==4) == 1)
//							&& ((c==1) + (d==2) == 1)
//							&& ((c==5) + (d==3) == 1)
//							&& ((e==4) + (a==1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if(i==j)
//				arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


#include<string.h>
//void left_rotate(char arr[], int k)
//{
//	int i = 0;
//	int len = strlen(arr);
//	k %= len;
//	for (i = 0; i < k; i++)
//	{
//		char tmp = arr[0];
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		arr[len - 1] = tmp;
//	}
//}


//#include<assert.h>
//#include<string.h>
//void reverse(char* left, char* right)
//{
//	while (left < right)
//	{
//		assert(left && right);
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//
//void left_rotate(char arr[], int k)
//{
//	int len = strlen(arr);
//	k %= len;
//	reverse(arr, arr + k - 1);
//	reverse(arr + k, arr + len - 1);
//	reverse(arr, arr + len - 1);
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//	int k = 0;
//	scanf("%d", &k);
//	left_rotate(arr,k);
//	printf("%s\n", arr);
//
//	return 0;
//}


//struct Point
//{
//	int x;
//	int y;
//};
//struct Point find_num(int arr[3][3], int row, int col, int k)
//{
//	int x = 0;
//	int y = col - 1;
//	struct Point p = { -1,-1 };
//	while (x <= row - 1 && y >= 0)
//	{
//		if (k < arr[x][y])
//		{
//			y--;
//		}
//		else if (k > arr[x][y])
//		{
//			x++;
//		}
//		else
//		{
//			p.x = x;
//			p.y = y;
//			return p;
//		}
//	}
//	return p;
//}


int find_num(int arr[3][3], int* a, int* b, int k)
{
	int x = 0;
	int y = *b - 1;
	while (x <= *a - 1 && y >= 0)
	{
		if (k < arr[x][y])
		{
			y--;
		}
		else if (k > arr[x][y])
		{
			x++;
		}
		else
		{
			*a = x;
			*b = y;
			return 1;
		}
	}
	*a = -1;
	*b = -1;
	return 0;
}
int main()
{
	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
	int k = 0;
	scanf("%d", &k);
	int a = 3;
	int b = 3;
	int ret = find_num(arr, &a, &b, k);
	if (ret == 1)
		printf("%d %d\n", a, b);
	else
		printf("ÕÒ²»µ½\n");
	return 0;
}