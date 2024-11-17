#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int n = 0;
//	int m = 0;
//	while (scanf("%d %d", &n, &m) == 2)
//	{
//		int min = n < m ? n : m;
//		int max = n > m ? n : m;
//		int i = min;
//		int j = max;
//		while (i)
//		{
//			if (n % i == 0 && m % i == 0)
//			{
//				break;
//			}
//			i--;
//		}
//		//i就是最大公约数
//		while (i)
//		{
//			if (j % n == 0 && j % m == 0)
//			{
//				break;
//			}
//			j++;
//		}
//		//j就是最小公倍数
//		printf("%d\n", i + j);
//	}
//	return 0;
//}


//辗转相除法
//int main()
//{
//	long n = 0;
//	long m = 0;
//	while (scanf("%ld %ld", &n, &m) == 2)
//	{
//		long i = n;
//		long j = m;
//		long r = 0;
//
//		while (r = i % j)
//		{
//			i = j;
//			j = r;
//
//		}
//		//j就是最大公约数
//		//m*n/j就是最小公倍数
//
//		printf("%ld\n", m * n / j + j);
//	}
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
//				if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//					printf("* ");
//				else
//					printf("  ");
//			}
//			printf("\n");
//
//		}
//	}
//	return 0;
//}


int main()
{

	return 0;
}