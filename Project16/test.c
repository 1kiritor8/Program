#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//三角形判断


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c)==3)
//	{
//		//判断
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
//	//short一次访问两个字节
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
//	//char类型一次访问一个字节
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
//	//scanf在遇到空格后不继续向后阅读，若要输入带有空格的字符串请使用gets()	
//	gets(arr);
//	//逆序
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


////求Sn=a+aaa+aa+aaa的前5项之和，其中a是一个数字
////例如：：2 + 22 + 222 + 2222 + 22222
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


//求出0-100000之间的所有“水仙花数"井输出
//“水仙花数"是指一个n位数，其各位数字的n次方之和恰好等于该数本身，如：153=1^3+5^3+3^3。则153是一个“水仙花数”


//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		//判断i是否为“水仙花数”
//		//12345
//		//1.计算i是几位数
//		int n = 1;//任何一个数至少是一位数
//		int tmp = i;
//		int sum = 0;
//		while (tmp/10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		//2.得到i的每一位，计算他的n次方之和
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);//pow求次方的函数pow（a，b） -> a^b
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
//	//判断i是否为“水仙花数”
////12345
////1.计算i是几位数
//	int n = 1;//任何一个数至少是一位数
//	int tmp = i;
//	int sum = 0;
//	while (tmp / 10)
//	{
//		n++;
//		tmp /= 10;
//	}
//	//2.得到i的每一位，计算他的n次方之和
//	tmp = i;
//	while (tmp)
//	{
//		sum += pow(tmp % 10, n);//pow求次方的函数pow（a，b） -> a^b
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
//	//上
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//*号
//		for (j = 0; j < (2 * i + 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//下
//	for (i = 0; i < line-1; i++)
//	{
//		//打印一行
//		//空格
//		int j = 0;
//		for (j = 0;j <= i; j++)
//		{
//			printf(" ");
//		}
//		//*号
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


// 喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）


//int main()
//{
//	int money = 0;
//scanf("%d", &money);
//	int total = money;
//	int empty = money;
//
//
//	//置换
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
//	//计算a和b的最小公倍数
//	int m = (a > b ? a : b);
//	while (1)
//	{
//		if (m % a == 0 && m % b == 0)
//		{
//			break;
//		}
//		m++;
//	}
//	//打印
//	printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//计算a和b的最小公倍数
//	int i = 1;
//	while (a * i % b)
//	{
//		i++;
//	}
//	//打印
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
	//逆序整个字符串
	int len = strlen(arr);
	reverse(arr, arr + len - 1);
	//逆序单个单词
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