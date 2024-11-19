#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
#include<Windows.h>


//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//读文件
//	//定位文件指针
//	fseek(pf, 2, SEEK_SET);
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf));
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -1, SEEK_END);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	printf("%d\n", ftell(pf));
//
//
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("pf");
//		return 1;
//	}
//	fwrite(&a, 4, 1, pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件,发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将缓冲区的数据写到文件（磁盘）
//	printf("再睡眠10秒-此时，再次打开test.txt文件,文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 17;
//	int b = 18;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	FILE* pf = fopen("log.txt", "w");
//	if (pf == NULL)
//	{
//		/*perror("pf");
//		return 1;*/
//		perror("fopen");
//		return EXIT_FAILURE;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		fprintf(pf,"file:%s line:%d date:%s time:%s i=%d\n", __FILE__,__LINE__,__DATE__,__TIME__,i);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main()
//{
//    printf("%d\n", __STDC__);
//    return 0;
//}


//#define MAX 1000
//#define STR "hello bit"
//#define DEBUG_PRINT printf(pf, "file:%s\
//								line:%d\
//								date:%s\
//								time:%s\
//								i=%d\n", __FILE__, __LINE__, __DATE__, __TIME__, i)
//转义字符\后面不能有任何东西（包括空格）否则将转义字符后的内容进行转义而不会对要转义的内容进行转义
//
//int main()
//{
//	printf("%d\n", MAX);
//	printf("%s\n", STR);
//
//	return 0;
//}


//#define SQUARE(x) ((x)*(x))
//
//int main()
//{
//	int r = SQUARE(5+1);
//	//int r = ((5+1) * (5+1));
//	//int r = 5 + 1 * 5 + 1;
//	printf("%d\n", r);
//
//	return 0;
//}


//#define DOUBLE(x) ((x)+(x))
//
//int main()
//{
//	int r = 10 * DOUBLE(17 * 2);
//	//int r = 10 * (34) + (34);
//	//int r = (17 * 2) + (17 * 2);
//	printf("%d\n", r);
//
//	return 0;
//}


//#define M 100
//#define DOUBLE(x) ((x)+(x))
//
//int main()
//{
//	DOUBLE(M + 2);
//	//DOUBLE(100+2)
//	//((100+2)+(100+2))
//	return 0;
//}


//void print(int n)
//{
//	printf("the value of a is %d\n", n);
//}
//#define PRINT(N) printf("the value of " #N" is %d\n",N)
//#define PRINT(N,FORMAT) printf("the value of "#N" is "FORMAT"\n",N)
//
//int main()
//{
//	/*printf("hello world\n");
//	printf("hello ""world\n");*/
//
//	int a = 10;
//	PRINT(a, "%d");
//	//PRINT(a);
//	//print(a);
//	//printf("the value of a is %d\n", a);
//
//	//int b = 20;
//	//PRINT(b);
//	//print(b);
//	//printf("the value of b is %d\n", b);
//
//	float f = 3.14f;
//	PRINT(f, "%lf");
//
//	return 0;
//}


//#define CAT(Class,Num) Class##Num
//
//int main()
//{
//	int Class106 = 100;
//	printf("%d\n", CAT(Class, 106));
//	//printf("%d\n", Class106);
//
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int b = a + 1;
//
//
//	int b = ++a;
//
//	return 0;
//}


//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int main()
//{
//	//int m = MAX(2, 3);
//	int a = 17;//18
//	int b = 18;//19 20
//	int m = MAX(a++, b++);
//	//int m = ((a++) > (b++) ? (a++) : (b++));
//	//  19     17  !>    18            19
//	printf("%d\n", m);//19
//	printf("a=%d b=%d\n", a, b);//18 20
//
//	return 0;
//}


//#define MAX(x,y) ((x)>(y)?(x):(y))
//
//int Max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int m = MAX(2, 3);
//
//	int m = Max(2, 3);
//
//	return 0;
//}


#define MALLOC(num,type) (type*)malloc((num)*sizeof(type))

int main()
{
	//malloc(40);
	//malloc(10,int);
	int* p = MALLOC(10, int);

	int* p = (int*)malloc((10) * sizeof(int));

}