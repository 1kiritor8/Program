#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		//赋值
//		arr[i] = i;
//	}
//
//
//	//打印
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//void test(int a[])
//{
//
//}
//
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}


//void test(int a[])
//{
//
//}
//
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	return 0;
//}


//void test2()
//{
//	printf("hehe\n");
//}
//
//void test1()
//{
//	test2();
//}
//
//void test()
//{
//	test1();
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}


//求1！+2！+……+n!
//5!=1*2*3*4*5
//n! = 1*2*3*……*n
//


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	int j = 0;
//	int sum = 0;
//
//
//	for (j = 1; j <= n; j++)
//	{
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//				}
//		sum += ret;
//	}
//
//
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//#include<string.h>
//void my_strcpy(char* dest,char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] =   "Hello bit";
//	my_strcpy(arr1,arr2);
//	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
//
//
//	printf("%s\n", arr1);
//
//
//	return 0;
//}


//#include<string.h>
//void my_strcpy(char* dest,char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] =   "Hello bit";
//	my_strcpy(arr1,arr2);
//	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
//
//
//	printf("%s\n", arr1);
//
//
//	return 0;
//}


//#include<string.h>
//#include<assert.h>
//void my_strcpy(char* dest,const char* src)
//{
//	//断言
//	assert(dest != NULL);
//	assert(src!=NULL);
//
////*src++ = *best++//err
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "Hello bit";
//	//char* p = NULL;
//	my_strcpy(arr1, arr2);
//	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
//
//
//	printf("%s\n", arr1);
//
//
//	return 0;
//}


#include<string.h>
#include<assert.h>


//为什么返回char*呢？	是为了实现链式访问
//strcpy的函数返回的是目标空间的起始地址


//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	//断言
//	assert(dest != NULL);
//	assert(src!=NULL);
//
//	//*src++ = *best++//err
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//return dest;//err
//	return ret;
//}
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxx";
//	char arr2[] = "Hello bit";
//	//char* p = NULL;
//	//strcpy在拷贝字符串的时候，会把源字符串中的\0也拷贝过去
//
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//
//	return 0;
//}
 

//int main()
//{
//	/*int num = 10;
//	num = 20;
//	printf("%d\n", num);*/
//
//
//	const int num = 10;
//	//num = 20;
//	//const 修饰指针变量
//	//1.const放在*的左边,意思是p指向的对象不能通过p来改变,但是p变量本身的值是可以改变的
//	//2.const放在*的右边，意思是p指向的对象是可以通过p来改变，但是不能修改p变量本身的值
//
//
//	int* const p = &num;
//	*p = 0;//ok
//	int n = 100;
//	p = &n;//err
//
//
//	//int n = 100;
//	//const int* p = &num;
//	////int const* p = &num;
//	////*p = 20;//err
//	//p = &n;//ok
//
//
//	printf("%d\n", num);
//
//	return 0;
//}


//strlen求字符串长度的一个函数


//#include<assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "hello bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//编程常见错误
//1.编译型错误（语法错误）
//2.链接型错误（出现在链接期间） - 找不到符号（1.不存在 2.写错了）
//3.运行时错误（最难受，调试解决运行时错误）


int Add(int x, int y)
{
	return x + y;
}


int main()
{
	int a = 0;
	int b = 10;
	int c = Add(a, b);


	printf("%d\n", c);

	return 0;
}