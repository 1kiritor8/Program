#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%s\n", p);//把字符串首字符a的地址赋给了p
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";
//	char arr[] = "abcdef";
//	*p = 'w';
//
//
//	printf("%s\n", p);
//	return 0;
//}


//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//
//
//	if (p1 == p2)
//		printf("p1==p2\n");
//	else
//		printf("p1!=p2\n");
//
//
//	if (arr1 == arr2)
//		printf("arr1==arr2\n");
//	else
//		printf("arr1!=arr2\n");
//
//
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//
//	int* parr[3] = { arr1,arr2,arr3 };
//
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//*(p+i) -> p[i]
//			//printf("%d ", *(parr[i] + j));
//			printf("%d ", parr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//再次讨论数组名
//数组名通常表示的都是数组首元素的地址
//但是有2个例外：
//1，sizeof（数组名），这里的数组名表示整个数组，计算的是整个数组的大小
//2.&数组名，这里的数组名表示的依然是整个数组，所以&数组名取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//
//	//int sz = sizeof(arr);
//	//printf("%d\n", sz);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	//整型指针是用来存放整型的地址
//	//字符指针是用来存放字符的地址
//	//数组指针是用来存放数组的地址
//
//
//	int (*p2)[10] = &arr;
//
//	return 0;
//}


//int main()
//{
//	char arr[5] = { 0 };
//	char (*pc)[5] = &arr;
//
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*p)[10] = &arr;
//
//
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(*p + i)); //p是指向数组的,*p其实就相当于数组名,数组名是首元素的地址
//		//所以*p本质上是数组首元素的地址
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//
//	}
//	return 0;
//}


//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//void print2(int (*p)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print2(arr, 3, 5);
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
//	/*int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", *pa);*/
//
//
//	int arr[5] = { 0 };
//	//&数组名，取出的是数组的地址
//	int (*p)[5] = &arr;//数组指针
//
//
//	//&函数名，取出的是函数的地址呢？
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//对于函数来说，&函数名和函数名都是函数的地址
//
//
//	int (*pf)(int, int) = &Add;
//	//int ret = (*pf)(2, 3);
//	//int ret = Add(2, 3);
//	int ret = pf(2, 3);
//	printf("%d\n", ret);
//
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//void calc(int (*pf)(int ,int))
//{
//	int a = 3;
//	int b = 5;
//	int ret = pf(a, b);
//	printf("%d\n", ret);
//}
//
//
//int main()
//{
//	calc(Add);
//	return 0;
//}


//int main()
//{
//	//指针数组
//	int* arr[4];
//	char* ch[5];
//	//数组指针
//	int arr2[5];
//	int (*pa)[5] = &arr2;
//
//	char* arr3[6];
//	char* (*p3)[6] = &arr3;
//
//	return 0;
//}


//int test(const char* str)
//{
//	printf("test()\n");
//	return 0;
//}
//
//
//int main()
//{
//	//函数指针
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//	int (*pf)(const char* ) = test;
//	//(*pf)("abc");
//	test("abc");
//	pf("abc");
//	return 0;
//}


//typedef void(*pf_t)(int) ;//把void（*）（int）类型重命名为pf_t
////pf_t是一个类型名
//int main()
//{
//	//( *( void (*)() )0 )();
//	//void(*signal(int, void(*)(int)))(int);
//	void(*signal(int, void(*)(int)))(int);
//
//	pf_t signal(int, pf_t);
//	return 0;
//}


//函数指针的用途
//写一个计算器
//加法 减法 乘法 除法


//menu()
//{
//	printf("**************************\n");
//	printf("**********1.加法**********\n");
//	printf("**********2.减法**********\n");
//	printf("**********3.乘法**********\n");
//	printf("**********4.除法**********\n");
//	printf("**********0.退出**********\n");
//	printf("**************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
 
 
//menu()
//{
//	printf("**************************\n");
//	printf("**********1.加法**********\n");
//	printf("**********2.减法**********\n");
//	printf("**********3.乘法**********\n");
//	printf("**********4.除法**********\n");
//	printf("**********0.退出**********\n");
//	printf("**************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void calc(int (*pf)(int,int))//回调函数
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("请输入两个操作数:>");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int (*pf)(int, int) = Add;
//	int (*arr[4])(int,int) = {Add, Sub, Mul, Div};//arr就是函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int ret = arr[i](8, 4);
//		printf("%d \n", ret);
//	}
//	return 0;
//}


//x&y
//x^y
//x|y
//x&&y
//x||y
//x<<y
//x>>y


//menu()
//{
//	printf("**************************\n");
//	printf("**********1.加法**********\n");
//	printf("**********2.减法**********\n");
//	printf("**********3.乘法**********\n");
//	printf("**********4.除法**********\n");
//	printf("**********0.退出**********\n");
//	printf("**************************\n");
//
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//
//	//函数的指针数组
//	//转移表
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("退出计算器\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		pfArr[input];
//	} while (input);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	//函数指针数组
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//
//
//	//指向函数指针数组的指针
//	int (*(*ppfArr)[])(int, int) = &pfArr;
//
//
//	return 0;
//}


//回调函数
//回调函数就是—个通过函数指针制函数如绝幽替针（地址）作为参数传递给另一个
//函数，当这个指针被用来调用其所指向的函数时，我们就说这是回调函数。回调函数不是由该函数
//的实现方直接调用，而是在特定的事件或条件发生时由另外的一方调用的。用于对该事件或条件进
//行响应。


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//假设数组是有序的
//		//一趟冒泡排序的过程
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}


//int main()
//{
//	int a = 10;
//	//char* pa = &a;
//	void* pv = &a; //void * 是无具体类型的指针，可以接受任意类型的地址
//	//void * 是无具体类型的指针，所以不能解引用操作,也不能+-整数的操作
//
//	return 0;
//}


//#include<stdlib.h>
//qsort ->这个函数可以排序任意类型的数据


//void qsort(void* base,//你要排序的数据的起始位置
//		   size_t num,//待排序的数据元素有几个
//		   size_t width,//待排序的数据元素的大小（单位是字节）
//		   int(* cmp)(const void* e1,const void* e2)//函数指针，比较函数
//		  );
//cdec1-函数调用约定


//比较2个整型元素
//e指间一个整数
//e2指柯另外一个整数
//升序
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}


////降序
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//把数组排成升序
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//把数组排成降序
//
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//bubble_sort(arr,sz);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//#include<string.h>
//#include<stdlib.h>
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//
//void test1()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//
//int cmp_stu_by_name(const void* e1,const void* e2)
//{
//	//strcmp --> >0 ==0 <0
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	//strcmp --> >0 ==0 <0
//	return (((struct Stu*)e1)->age) - (((struct Stu*)e2)->age);
//}
//
//
//void test2()
//{
//	//测试使用qsort来排序结构体数组
//	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	//qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}
//
//
//int main()
//{
//	//test1();
//	test2();
//	return 0;
//}


int cmp_int(const void* e1, const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}


int cmp_stu_by_name(const void* e1, const void* e2)
{
	//strcmp --> >0 ==0 <0
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}


int cmp_stu_by_age(const void* e1, const void* e2)
{
	return (((struct Stu*)e1)->age - ((struct Stu*)e2)->age);
}


void Swap(char* buf1,char* buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}


void bubble_sort(void* base, int sz,int width,int(*cmp)(const void* e1,const void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 1;
		int j = 0;
		for (j = 0; j < sz-1-i; j++)
		{
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}


struct Stu
{
	char name[20];
	int age;
};


void test3()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}


void test4()
{
	struct Stu s[] = { {"zhangsan",15},{"lisi",30},{"wangwu",25}};
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
}


int main()
{
	//test3();
	test4();
	return 0;
}