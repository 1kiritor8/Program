#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<Windows.h>


//#define M 100
//int main()
//{
//	printf("%d\n", M);
////#undef M
//	printf("%d\n", M);
//
//	return 0;
//}


//#define __DEBUG__

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//#ifdef __DEBUG__
//		printf("%d ", arr[i]);
//#endif //__DEBUG__
//	}
//
//	return 0;
//}


//int main()
//{
//#if 0		//#if 常量表达式
//	printf("hehe\n");
//#endif
//
//	return 0;
//}


//#define M 3
//
//int main()
//{
//#if M<5
//	printf("hehe\n");
//#elif M==5
//	printf("haha\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}


//#define MAX 100

//int main()
//{
//#if !defined(MAX)
//	printf("max\n");
//#endif
//
//	return 0;
//}

//int main()
//{
//#ifndef MAX
//	printf("max\n");
//#endif
//
//	return 0;
//}


#include <stddef.h>
#define OFFSETOF(type,m_name)    (size_t)&(((type*)0)->m_name))

struct S
{
	char c1;
	int i;
	char c2;
};

int main()
{
	struct S s = { 0 };
	/*printf("%d\n", offsetof(struct S, c1));
	printf("%d\n", offsetof(struct S, i));
	printf("%d\n", offsetof(struct S, c2));*/
	printf("%d\n", OFFSETOF(struct S, c1);
	printf("%d\n", OFFSETOF(struct S, i);
	printf("%d\n", OFFSETOF(struct S, c2);

	return 0;
}