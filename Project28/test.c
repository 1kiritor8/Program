#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


#include<string.h>
#include<errno.h>
#include<stdlib.h>


//�䳤����
//c99��׼֧�ֵı䳤����
// int n = 0;
//scanf��"%d",&n);
//int arr2[n];


//int main()
//{
//	int arr[10] = { 0 };
//	//��̬�ڴ����
//	int* p = (int*)malloc(40);
//	//int* p = (int*)malloc(INT_MAX);
//
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//ʹ���ڴ�
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//û��free
//	//������˵�ڴ�ռ�Ͳ�������
//	//�������˳���ʱ��ϵͳ���Զ������ڴ�ռ�
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
//	//����
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
//	//����
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


//1.��NULLָ��Ľ����ò���
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	*p = 20;//���p��ֵ��NULL���ͻ��м���
//	free(p);
//	p = NULL;
//	return 0;
//}


//2.�Զ�̬���ٿռ��Խ�����
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


//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//����
//
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//4.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
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


//5.��ͬһ�鶯̬�ڴ����ͷ�
//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//����
//
//
//	free(p);
//	p = NULL;
//	//����
//
//
//	free(p);
//
//	return 0;
//}


///6.��̬�����ڴ������ͷţ��ڴ�й©��
//void test()
//{
//	int* p = (int*)malloc(100);
//	//����
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
//	//����
//
//
//	return p;
//}
//int main()
//{
//	int* ret = test();
//	//����
//
//
//	//�����ͷ�
//	return 0;
//}


//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);//�ڴ�й¶
//}


//�޸ĺ�
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
////	strcpy(str, "hello world");//strΪNULL�������ò������³������
////	printf(str);
////}
//
//
////�޸ĺ�
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");//strΪNULL�������ò������³������
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