#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int fib(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);
//	//计算
//	int m = fib(n);
//	//输出
//	printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	//接收n个数字
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//接收要删除的值
//	scanf("%d", &del);
//	int j = 0;//j作为下标所在的位置就是用来存放不删除的数据的位置
//	for (i = 0; i < 50; i++)
//	{
//		if (arr[i] != del)
//		{
//			arr[j++] = arr[i];
//		}
//	}
//	for (i = 0; i < j; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	//输入
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//找出最小值
//	int min = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	//输入
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	//找出最小值
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10];
//	int i = 0;
//	int max = 0;
//	int min = 100;
//	//输入
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		//找出最大值
//		//找出最小值
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] < min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else
//		{
//			printf("%c\n", ch + 32);
//		}
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	while (scanf("%c", &ch) == 1)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if(ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}


//#include<ctype.h>
//int main()
//{
//	char ch = 0;
//	//scanf读取成功的时候，返回的是读取的数据的个数
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch))//islower判断是否为小写字母
//		{
//			printf("%c\n", toupper(ch));//topper将小写字母转换成大写字母
//		}
//		else if (isupper(ch))//isupper判断是否为daxiezimu
//		{
//			printf("%c\n", tolower(ch));//tolower将大写字母转换成小写字母
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	while (scanf("%c", &ch) == 1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n",ch);
//		}
//		getchar();
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	//在%c前面加空格的意思是，跳过下一个字符之前的所有空白字符
//	while (scanf(" %c", &ch) == 1)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 0;
//	//在%c前面加空格的意思是，跳过下一个字符之前的所有空白字符
//	while (scanf(" %c", &ch) == 1)
//	{
//		//if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		//判断一个字符是否为字母用isalpha
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n", ch);
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n", ch);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int max = 0;
//	int score = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &score);
//		if (score > max)
//			max = score;
//	}
//	printf("%d\n", max);
//	return 0;
//}


#include<math.h>
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		//判断i是否为lily number
		int sum = 0;
		int j = 0;
		for (j = 1; j <= 4; j++)
		{
			int k = (int)pow(10, j);
			sum += (i % k) * (i / k);
		}
		if (sum == i)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}