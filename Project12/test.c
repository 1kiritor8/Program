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
//	//����
//	scanf("%d", &n);
//	//����
//	int m = fib(n);
//	//���
//	printf("%d\n", m);
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[50];
//	//����n������
//	int i = 0;
//	for (i = 0; i < 50; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int del = 0;
//	//����Ҫɾ����ֵ
//	scanf("%d", &del);
//	int j = 0;//j��Ϊ�±����ڵ�λ�þ���������Ų�ɾ�������ݵ�λ��
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
//	//����
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	int max = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	//�ҳ���Сֵ
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
//	//����
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	//�ҳ���Сֵ
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
//	//����
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//		//�ҳ����ֵ
//		//�ҳ���Сֵ
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
//	//scanf��ȡ�ɹ���ʱ�򣬷��ص��Ƕ�ȡ�����ݵĸ���
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
//	//scanf��ȡ�ɹ���ʱ�򣬷��ص��Ƕ�ȡ�����ݵĸ���
//	while (scanf("%c", &ch) == 1)
//	{
//		if (islower(ch))//islower�ж��Ƿ�ΪСд��ĸ
//		{
//			printf("%c\n", toupper(ch));//topper��Сд��ĸת���ɴ�д��ĸ
//		}
//		else if (isupper(ch))//isupper�ж��Ƿ�Ϊdaxiezimu
//		{
//			printf("%c\n", tolower(ch));//tolower����д��ĸת����Сд��ĸ
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
//	//��%cǰ��ӿո����˼�ǣ�������һ���ַ�֮ǰ�����пհ��ַ�
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
//	//��%cǰ��ӿո����˼�ǣ�������һ���ַ�֮ǰ�����пհ��ַ�
//	while (scanf(" %c", &ch) == 1)
//	{
//		//if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		//�ж�һ���ַ��Ƿ�Ϊ��ĸ��isalpha
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
		//�ж�i�Ƿ�Ϊlily number
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