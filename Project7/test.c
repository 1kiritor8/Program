#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//
//int main()
//{
//
//	return 0;
//}


//��ʽ����
#include<string.h>

//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//
//	printf("%d", strlen("abcdef"));
//	return 0;
//}


//void test()
//{
//	printf("hehe\n");
//}
//
//
//int main()
//{
//	//printf("%d", printf("%d", printf("%d", 43)));
//	int n = test();
//	return 0;
//}


//������д����ֵ��ʱ��Ĭ�Ϸ���������int
//Add(int x, int y)//���Ƽ�
//{
//	return x + y;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d", c);
//
//	return 0;
//}


//int Add(int x, int y)//���Ƽ�
//{
//	printf("hehe\n");
//}
//����Ĵ�����һЩ�������Ϸ��ص��Ǻ���ִ�й��������һ��ָ��ִ�еĽ��

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	test(100);//���Ƽ�
//
//	return 0;
//}


//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	test(100);//���Ƽ�
//
//	return 0;
//}


//��ȷ��˵��main��������Ҫ����
//������main�������в�����


//int main(void)
//{
//
//	return 0;
//}


//main��������������


//int main(int argc,char* argv[],char *envp[])
//{
//
//	return 0;
//}


//�����������Ͷ���
#include "add.h"
//#include"sub.h"


//���뾲̬��
#pragma comment(lib,"add.lib")


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//�ӷ�
//	int sum = Add(a, b);//17 18
//	printf("%d\n", sum);//35
//
//
//
//	//int ret = Sub(a, b);
//	//printf("%d\n", ret);//-1
//
//	return 0;
//}


//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//���磺
//���룺1234�������1 2 3 4


//%d �Ǵ�ӡ�з��ŵ�����(������������
//%u �Ǵ�ӡ�޷��ŵ�����


//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	while (num)
//	{
//		printf("%d ", num % 10);
//		num = num / 10;
//	}
//	//1 2 3 4
//	//printf("%u\n", num);
//
//	return 0;
//}


//�ݹ��ʵ��


//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);//123
//	}
//	printf("%d ", n % 10);//4
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//����һ������ֵ���޷��ţ�������˳���ӡ����ÿһλ
//
//	return 0;
//}

//printf("1234")
//printf("123") 4
//printf("12") 3 4
//printf("1") 2 3 4
//1 2 3  4


//��д��������������ʱ���������ַ����ĳ���
//ģ��ʵ��strlen


//int my_strlen(char str[])//��������д���������ʽ
//int my_strlen(char* str)  //��������д��ָ�����ʽ
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//����һ���ַ�
//	}
//	return count;
//}


//my_strlen("abc");
//1+my_strlen("bc");
//1+1+my_strlen("c");
//1+1+1+my_strlen("");
//1+1+1+0
int my_strlen(char* str)
{
	if (*str != '\0')
	{
		return 1 + my_strlen(str+1);
	}
	else
	{
		return 0;
	}
}


int main()
{
	char arr[] = "abc";
	int len=my_strlen(arr);
	printf("%d\n", len);

	return 0;
}