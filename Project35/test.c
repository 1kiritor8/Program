#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<Windows.h>


//1.��ָ��
//2.���ַ���
//3.�ո�
//4.+-��
//5��Խ��
//6.�������ַ�

//enum status
//{
//	VALID,//0
//	INVALID//1
//}sta = INVALID;
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	int flag = 1;
//	if (*str == '\0')
//		return 0;
//
//	//�����ո�Ϳհ��ַ�
//	while (isspace(*str))
//	{
//		str ++;
//	}
//	if ((*str) == '+')
//	{
//		flag = 1;
//		str++;
//	}
//	if (*str == '-')
//	{
//		flag = -1;
//		str++;
//	}
//	long long ret = 0;
//	while (*str)
//	{
//		if (isdigit(*str))
//		{
//			//Խ��
//			ret = ret * 10 + flag*(*str - '0');
//			if (ret > INT_MAX || ret < INT_MIN)
//			{
//				return 0;
//			}
//		}
//		else
//			return (int)ret;
//		str++;
//	}
//
//	if (*str == '\0')
//	{
//		sta = VALID;
//	}
//	return (int)ret;
//}
//
//int main()
//{
//	char arr[20] = "-1231111111111ABC456";
//	int ret = my_atoi(arr);
//	if (sta == INVALID)
//	{
//		printf("�Ƿ�����: %d\n",ret);
//	}
//	else if (sta == VALID)
//	{
//		printf("�Ϸ�ת����%d\n", ret);
//	}
//
//	return 0;
//}


//int main()
//{
//	long num = 0;
//	FILE* fp = NULL;
//	if ((fp = fopen("fname.dat", "r")) == NULL)
//	{
//		printf("Can't open the file!");
//		exit(0);
//	}
//	while (fgetc(fp) != EOF)
//	{
//		num++;
//	}
//	printf("num=%d\n", num);
//	fclose(fp);
//	fp = NULL;
//	return 0;
//}


//#define INT_PTR int*
//typedef int* int_ptr;
//
//int* a��b;//a��������int*��b��������int
//int_ptr c��d;//c��d����ָ������


//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ����
#define SWAP_BIT(n) (((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	printf("%d\n", SWAP_BIT(n));

	return 0;
}