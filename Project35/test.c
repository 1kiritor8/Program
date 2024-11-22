#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<Windows.h>


//1.空指针
//2.空字符串
//3.空格
//4.+-号
//5。越界
//6.非数字字符

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
//	//跳过空格和空白字符
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
//			//越界
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
//		printf("非法返回: %d\n",ret);
//	}
//	else if (sta == VALID)
//	{
//		printf("合法转换：%d\n", ret);
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
//int* a，b;//a的类型是int*，b的类型是int
//int_ptr c，d;//c和d都是指针类型


//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换
#define SWAP_BIT(n) (((n&0x55555555)<<1)+((n&0xaaaaaaaa)>>1))

int main()
{
	int n = 0;
	scanf("%d", &n);
	
	printf("%d\n", SWAP_BIT(n));

	return 0;
}