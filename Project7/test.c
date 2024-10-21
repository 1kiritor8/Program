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


//链式访问
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


//函数不写返回值的时候，默认返回类型是int
//Add(int x, int y)//不推荐
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


//int Add(int x, int y)//不推荐
//{
//	printf("hehe\n");
//}
//上面的代码在一些编译器上返回的是函数执行过程中最后一条指令执行的结果

//void test()
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test();
//	test(100);//不推荐
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
//	test(100);//不推荐
//
//	return 0;
//}


//明确的说明main函数不需要参数
//本质上main函数是有参数的


//int main(void)
//{
//
//	return 0;
//}


//main函数有三个参数


//int main(int argc,char* argv[],char *envp[])
//{
//
//	return 0;
//}


//函数的声明和定义
#include "add.h"
//#include"sub.h"


//导入静态库
#pragma comment(lib,"add.lib")


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	//加法
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


//接受一个整形值（无符号），按照顺序打印他的每一位
//例如：
//输入：1234，输出：1 2 3 4


//%d 是打印有符号的整数(会有正负数）
//%u 是打印无符号的整数


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


//递归的实现


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
//	print(num);//接受一个整形值（无符号），按照顺序打印他的每一位
//
//	return 0;
//}

//printf("1234")
//printf("123") 4
//printf("12") 3 4
//printf("1") 2 3 4
//1 2 3  4


//编写函数不允许创建临时变量，求字符串的长度
//模拟实现strlen


//int my_strlen(char str[])//参数部分写成数组的形式
//int my_strlen(char* str)  //参数部分写成指针的形式
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;//找下一个字符
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