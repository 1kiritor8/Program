#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>


//char* GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//int* test()
//{
//	int a = 10;
//	return &a;
//}
//
//
//int main()
//{
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//
//	return 0;
//}


//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//
//
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}


//void Test()
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "world");
//	free(str);
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//
//int main()
//{
//	Test();
//	return 0;
//}


//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//
//};
//
//
//int main()
//{
//	//int sz = sizeof(struct S);
//	//printf("%d\n", sz);
//	//struct S s;//4byte
//
//
//	//柔性数组的使用
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 40);
//	if (ps == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	struct S* ptr = (struct S*)realloc(ps, sizeof(struct S) + 80);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	//……
//
//
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}


struct S
{
	int n;
	int* arr;
};


int main()
{
	struct S* ps = (struct S*)malloc(sizeof(struct S));
	if (ps == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	ps->n = 100;
	ps->arr = (int*)malloc(40);
	if (ps->arr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	int* ptr = (int*)realloc(ps->arr, 80);
	if (ptr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	ps->arr = ptr;

	free(ps->arr);
	free(ps);
	ps = NULL;
	return 0;
}