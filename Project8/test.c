#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>



//�ݹ�ʵ��
//int fac(int n)
//{
//	if (n <= 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return n * fac(n - 1);
//	}
//}


//����ʵ��
//int fac(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fac(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}


//���n��쳲�������
//쳲���������
//1 1 2 3 5 8 13 21 34 55.....


//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(n-1) + Fib(n - 2);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("%d\n", count);
//	return 0;
//}


//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	while (n > 3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	//printf("%d\n", count);
//	return 0;
//}


//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}


//д���뽫�������Ӵ�С���

//
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d %d", &a, &b, &c);
//	int tmp = 0;
//
//	//����
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c)
//	{
//		Swap(&a, &c);
//	}
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	//���
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//
//
//	//for (i = 1; i <= 100; i++)
//	//{
//	//	if (i % 3 == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//
//	for (i = 3; i <= 100; i+=3)
//	{
//		printf("%d ", i);
//
//	}
//
//
//	return 0;
//}


//���������������������������Լ��


//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int min = (a < b) ? a : b;
//	int m = min;
//	while (1)
//	{
//		if (a % m == 0 && b % m == 0)
//		{
//			break;
//		}
//		m--;
//	}
//	printf("%d\n", m);
//	return 0;
//}


//շת�����


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	while (c=a % b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	return 0;
//}


//��д������һ��1��100�����������г��ֶ��ٸ�����9


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		//�жϸ�λ�Ƿ�Ϊ9
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		//�ж�ʮλ�Ƿ�Ϊ9
//		if (i / 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count= %d", count);
//	return 0;
//}


//����1/1-1/2+1/3-1/4+......+1/99-1/100
//��������1
//��ĸ��1~100


//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum = sum + flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��10�������е����ֵ


//int main()
//{
//	//׼��10������
//	int arr[10] = { 3,1,5,2,9,7,8,4,0,6 };
//	//�ҳ����ֵ
//	int max = arr[0];
//
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//int main()
//{
//	//׼��10������
//	int arr[10] = { 0 };
// //���arr[]��δָ�������Ԫ�ظ������ͻ���ݳ�ʼ��������������Ԫ�صĸ���
//	//��������
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//
//	
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}
 
 
 
//����Ļ�����9*9�˷���


//int main()
//{
//	int a = 0;
//	for (a = 1; a < 10; a++)
//	{
//		int b = 1;
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b,a*b);
//		}
//		printf("\n");
//
//	}
//	return 0;
//}


//void print_table(int n)
//{
//	int a = 0;
//	for (a = 1; a <= n; a++)
//	{
//		int b = 0;
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b,a*b);
//		}
//		printf("\n");
//
//	}
//
//}
//
//
//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	print_table(i);
//	return 0;
//}


