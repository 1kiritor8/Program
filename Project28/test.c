#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#include<string.h>
#include<errno.h>
#include<stdlib.h>


//变长数组
//c99标准支持的变长数组
// int n = 0;
//scanf（"%d",&n);
//int arr2[n];


//int main()
//{
//	int arr[10] = { 0 };
//	//动态内存管理
//	int* p = (int*)malloc(40);
//	//int* p = (int*)malloc(INT_MAX);
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//使用内存
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//没有free
//	//并不是说内存空间就不回收了
//	//当程序退出的时候，系统会自动回收内存空间
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = (int*)malloc(40);
//	
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	while (1)
//	{
//		malloc(1);
//	}
//
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//……
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//	}
//	//扩容
//	int* ptr = (int*)realloc(p, 8000);
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//int main()
//{
//	realloc(NULL, 40);//malloc(40);
//	return 0;
//}


//1.对NULL指针的解引用操作
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;//如果p的值是NULL，就会有间题
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.对动态开辟空间的越界访问
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		p[i] = i;
//	}
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//3.对非动态开辟内存使用free释放
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//……
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//4.使用free释放一块动态开辟内存的一部分
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//5.对同一块动态内存多次释放
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//……
//
//
//	free(p);
//	p = NULL;
//	//……
//
//
//	free(p);
//
//	return 0;
//}


///6.动态开辟内存忘记释放（内存泄漏）
//void test()
//{
//	int* p = (int*)malloc(100);
//	//……
//
//	int flag = 0;
//	scanf("%d", &flag);
//	if (flag == 5)
//		return;
//
//
//	free(p);
//	p = NULL;
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}


//int* test()
//{
//	int* p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		return p;
//	}
//	//……
//
//
//	return p;
//}
//int main()
//{
//	int* ret = test();
//	//……
//
//
//	//忘记释放
//	return 0;
//}


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//内存泄露
//}


//修改后
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//
////void Test(void)
////{
////	char* str = NULL;
////	GetMemory(str);
////	strcpy(str, "hello world");//str为NULL，解引用操作导致程序崩溃
////	printf(str);
////}
//
//
////修改后
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//str为NULL，解引用操作导致程序崩溃
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


int main()
{
	printf("hello world\n");
	char* p= ("hello world\n");
	printf(p);
	printf("%s", p);

	return 0;
}