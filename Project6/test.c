#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//int main()
//{
//	/*char arr1[20] = { 0 };
//	char arr2[] = { "hello bit" };
//
//	strcpy(arr1, arr2);
//
//	printf("%s", arr1);*/
//
//
//	char arr[20]="hello world";
//	memset(arr,'x',5);
//	printf("%s", arr);
//	return 0;
//}


//�����Ķ���
//int get_max(int x,int y)
//{
//	return(x > y ? x : y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//��ϴ�ֵ
//	//�����ĵ���
//	int m= get_max(a, b);
//
//	printf("%d\n", m);
//
//	return 0;
//}

//дһ���������Խ����������α���������
//x��y��ʽ����
//void Swap(int* px,int* py)
//{
//	int z = *px;//z = x
//	*px = *py;//x = y
//	*py = z;//y = z
//}
//
////��ʵ�δ��ݸ��βε�ʱ���β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���Ӱ��ʵ��
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����
//	//a��bʵ�ʲ���
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//Swap(a,b);
//	Swap(&a, &b);
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}



//	void Swap1(int x,int y)
//{
//		int z = 0;
//		z = x;
//		x = y;
//		y = z;
//}
//	void Swap2(int* px, int* py)
//	{
//		int z = *px;//z = x
//		*px = *py;//x = y
//		*py = z;//y = z
//	}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����
//	//a��bʵ�ʲ���
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	//��ֵ����
//	Swap1(a,b);
//	//��ַ����
//	Swap2(&a, &b);
//
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�������ʹ�ӡ
//		//��2~i-1֮�������ȥ�Գ�i
//		int flag = 1;//flag��1����ʾ������
//		int j = 0;
//		for (j = 2; j <= i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//		/*if (flag == 1)
//		{
//			printf("%d ", i);
//		}*/
//	}
//	printf("\ncount= %d\n", count);
//	return 0;
//}

#include<math.h>

//sqrt����ѧ�⺯��
//��ƽ��

//int main()
//{
//	int i = 0;
//		int count = 0;
//		for (i = 101; i <= 200; i+=2)
//		{
//			//�ж�i�Ƿ�Ϊ����
//			//�������ʹ�ӡ
//			//��2~i-1֮�������ȥ�Գ�i
//			int flag = 1;//flag��1����ʾ������
//			int j = 0;
//			for (j = 2; j <= sqrt(i); j++)
//			{
//				if (i % j == 0)
//				{
//					flag = 0;
//					break;
//				}
//			}
//			if (flag == 1)
//			{
//				count++;
//				printf("%d ", i);
//			}
//		}
//		printf("\ncount= %d\n", count);
//	return 0;
//}


//дһ�������ж�һ�����ǲ�������
//����������1
//������������0

//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//
//}
//int main()
//{
//
//		int i = 0;
//		int count = 0;
//		for (i = 101; i <= 200; i += 2)
//		{
//			if (is_prime(i))
//			{	
//				printf("%d ", i);
//				count++;
//			}
//		}
//		printf("\ncount= %d\n", count);
//
//	return 0;
//}



//дһ�������ж�һ���ǲ�������
//��ӡ1000~2000��֮�������
//�����жϵĹ���
//1.�ܱ�4���������ܱ�100������������
//2.�ܱ�400����������


//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (year % 4 == 0)
//		{
//			if (year % 100 != 0)
//			{
//				printf("%d ", year);
//			}
//		}
//		if (year % 400 == 0)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//дһ�������ж�һ���ǲ�������


//�����귵��1
//�����귵��0


//is_leap_year(int y)
//{
//	if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�ǲ�������
//		if (is_leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//дһ��������ʵ��һ��������������Ķ��ֲ���


int binary_search(int arr[],int k,int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;//�ҵ��˷����±�
		}
	}
	return -1;//�Ҳ���

}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//			  0 1 2 3 4 5 6 7 8 9
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//
//
//	int ret=binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//
//	return 0;
//}


//��������
#include<stdbool.h>


//bool is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	return 0;
//}


//дһ��������ÿ����һ������������ͻὫnum��ֵ����1


//void Add(int* p)
//{
//	(*p)++;
//}
//
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


int  Add(int n)
{
	return n + 1;
}


int main()
{
	int num = 0;
	num = Add(num);
	printf("%d\n", num);
	num = Add(num);
	printf("%d\n", num);
	return 0;
}