#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<Windows.h>


//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n-i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j <= i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n+1; i++)
//		{
//			int j = 0;
//			for (j = 0; j < i; j++)
//			{
//				printf("  ");
//			}
//			for (j = 0; j < n + 1 - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int score = 0;
//	int n = 0;
//	int max = 0;
//	int min = 100;
//	int sum = 0;
//
//	while (scanf("%d", &score) == 1)
//	{
//		n++;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//		sum += score;
//
//		if (n == 7)
//		{
//			printf("%.2lf\n", (sum - max - min) / 5.0);
//			n = 0;
//			max = 0;
//			min = 100;
//			sum = 0;
//		}
//	}
//
//	return 0;
//}


//默认对齐数为4
//struct A
//{
//	int a;//0~3
//	short b;//4~5
//	//6~7
//	int c;//8~11
//	char d;//12
//	//13~15
//};
//
//struct B
//{
//	int a;//0~3
//	short b;//4~5
//	char c;//6
//	//7
//	int d;//8~11
//};
//
//int mainn()
//{
//	printf("%d\n", sizeof(struct A));//16
//	printf("%d\n", sizeof(struct B));//12
//
//	return 0;
//}


//#pragma pack(4)//四字节对齐
//
//int main(int argc, char* argv[])
//{
//	struct tagTest1
//	{
//		short a;//0~1
//		char b;//2
//		//3
//		long c;//4~7
//		long d;//8~11
//	};//12
//
//	struct tagTest2
//	{
//		long a;//0~3
//		short b;//4~5
//		char c;//6
//		//7
//		long d;//8~11
//	};//12
//
//	struct tagTest3
//	{
//		short a;//0~1
//		//2~3
//		long b;//4~7
//		char c;//8
//		//9~11
//		long d;//12~15
//	};//16
//
//	struct tagTest1 stT1;
//	struct tagTest2 stT2;
//	struct tagTest3 stT3;
//
//	printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//
//	return 0;
//}
//#pragma pack()


//#define MAX_SIZE 2+3			//A+B
//
//struct _Record_Struct
//{
//	unsigned char Env_arm_ID : 4;//1~8byte
//	unsigned char Paral : 2;
//	unsigned char state;//1~8byte
//	unsigned char avail : 1;//1~8byte
//}*Env_arm_Reord;//3字节
//
//int main()
//{
//	struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * MAX_SIZE);
//
//	return 0;
//}


//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPiml;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc,0,4);
//
//	pstPimData->ucPiml = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	//%02x
//	//以16进制打印，打印2位，如果不够,拿0填充
//	return 0;
//}


//typedef struct
//{
//	int a;//0~3
//	char b;//4
//	//5
//	short c;//6~7
//	short d;//8~9
//	//11
//}AA_t;//12
//
//int main()
//{
//	printf("%d\n", sizeof(AA_t));//12
//	return 0;
//}


//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s,a;
//
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//
//	return 0;
//}


//一个数组中只有两个数字出现过一次其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字

void find_single_dog(int arr[], int sz, int* pd1, int* pd2)
{
	int i = 0;
	int ret = 0;
	for (i == 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//2.ret的二进制中最右边的第几位是1
	int pos = 0;
	for (pos = 0; pos < 32; pos++)
	{
		if (((ret >> pos) & 1) == 1)
		{
			break;
		}
	}
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			*pd1 ^= arr[i];
		}
		else
		{
			*pd2 ^= arr[i];
		}
	}
}

int main()
{
	//1 2 3 4 5 1 2 3 4 6
	//1 1 3 3 5
	//2 2 4 4 6
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	//1.分组
	//1.所有数字异或
	//2.找出异或的结果数字中哪一位为1 -n
	//3.以第n位为1分一组，以第n位为0分一组

	int sz = sizeof(arr) / sizeof(arr[0]);
	int dog1 = 0;
	int dog2 = 0;
	find_single_dog(arr, sz, &dog1, &dog2);
	printf("%d %d\n", dog1, dog2);

	return 0;
}