#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//�������ж�


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c)==3)
//	{
//		//�ж�
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && a == c)
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b&&b!=c) || (a == c&&c!=b) || (b == c&&a!=b))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	//shortһ�η��������ֽ�
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for(i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d %d\n", *pulPtr, *(pulPtr + 3));
//	return 0;
//}


//int main()
//{
//	int a = 0x11223344;
//	//char����һ�η���һ���ֽ�
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}

//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//int main()
//{
//	char arr[10001] = { 0 };
//	//scanf�������ո�󲻼�������Ķ�����Ҫ������пո���ַ�����ʹ��gets()	
//	gets(arr);
//	//����
//	int left = 0;
//	int right = strlen(arr) - 1;
//
//
//	printf("%s\n", arr);
//	while (left < right)
//	{
//		char* tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//	return 0;
//}


////��Sn=a+aaa+aa+aaa��ǰ5��֮�ͣ�����a��һ������
////���磺��2 + 22 + 222 + 2222 + 22222
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);//2 5
//	int i = 0;
//	int sum = 0;
//	int k = 0;
//
//
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d\n", sum);
//
//		return 0;
//}


//���0-100000֮������С�ˮ�ɻ���"�����
//��ˮ�ɻ���"��ָһ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��ڸ��������磺153=1^3+5^3+3^3����153��һ����ˮ�ɻ�����


//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//�ж�i�Ƿ�Ϊ��ˮ�ɻ�����
//		//12345
//		//1.����i�Ǽ�λ��
//		int n = 1;//�κ�һ����������һλ��
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.�õ�i��ÿһλ����������n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow��η��ĺ���pow��a��b�� -> a^b
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include<math.h>
//int is_narcissistic_number(int i)
//{
//	//�ж�i�Ƿ�Ϊ��ˮ�ɻ�����
////12345
////1.����i�Ǽ�λ��
//	int n = 1;//�κ�һ����������һλ��
//	int tmp = i;
//	int sum = 0;
//	while (tmp / 10)
//	{
//		n++;
//		tmp /= 10;
//	}
//	//2.�õ�i��ÿһλ����������n�η�֮��
//	tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, n);//pow��η��ĺ���pow��a��b�� -> a^b
//		tmp /= 10;
//	}
//	return sum == i;
//	/*if (sum == i)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}*/
//}
//
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		
//		if (is_narcissistic_number(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*��
//		for (j = 0; j < (2 * i + 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��
//	for (i = 0; i < line-1; i++)
//	{
//		//��ӡһ��
//		//�ո�
//		int j = 0;
//		for (j = 0;j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*��
//		for (j = 0; j <2*(line-1-i)-1 ; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//}
//int main()
//{
//	struct stu students[3] = { (9801,"zhang",20 ),(9802,"wang",19),(9803,"zhao",18)};
//	fun(students + 1);
//
//	return 0;
//}


// ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�


//int main()
//{
//	int money = 0;
//scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//
//	//�û�
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//
//	return 0;
//}


//int main()
//{
//	int monty = 0;
//	scanf("%d", &monty);
//	if (monty > 0)
//		printf("%d\n", 2 * monty - 1);
//	else
//	{
//		printf("%d\n", 0);
//	}
//	return 0;
//}


//int cnt = 0;
//int fib(int n)
//{
//	cnt++;
//	if (n == 0)
//		return 1;
//	else if (n == 1)
//		return 2;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//void main()
//{
//	fib(8);
//	printf("%d\n", cnt);
//	return 0;
//}


//int main()
//{
//	int x = 1;
//	do {
//		printf("%2d\n", x++);
//	} while (x--);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����a��b����С������
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	//��ӡ
//	printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//����a��b����С������
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	//��ӡ
//	printf("%d\n", i * a);
//	return 0;
//}


#include<assert.h>


void reverse(char* left,char* right)
{
	assert(left);
	assert(right);
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}


int main()
{
	char arr[101] = { 0 };
	gets(arr);
	//���������ַ���
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//���򵥸�����
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		if (*end != '\0')
			end++;
		start = end;
	}
	printf("%s\n", arr);
	return 0;
}