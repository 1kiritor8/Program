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
//	printf("%s\n", p);//���ַ������ַ�a�ĵ�ַ������p
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


//�ٴ�����������
//������ͨ����ʾ�Ķ���������Ԫ�صĵ�ַ
//������2�����⣺
//1��sizeof�������������������������ʾ�������飬���������������Ĵ�С
//2.&���������������������ʾ����Ȼ���������飬����&������ȡ��������������ĵ�ַ
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
//	//����ָ��������������͵ĵ�ַ
//	//�ַ�ָ������������ַ��ĵ�ַ
//	//����ָ���������������ĵ�ַ
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
//		printf("%d ", *(*p + i)); //p��ָ�������,*p��ʵ���൱��������,����������Ԫ�صĵ�ַ
//		//����*p��������������Ԫ�صĵ�ַ
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
//	//&��������ȡ����������ĵ�ַ
//	int (*p)[5] = &arr;//����ָ��
//
//
//	//&��������ȡ�����Ǻ����ĵ�ַ�أ�
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//	//���ں�����˵��&�������ͺ��������Ǻ����ĵ�ַ
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
//	//ָ������
//	int* arr[4];
//	char* ch[5];
//	//����ָ��
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
//	//����ָ��
//	//printf("%p\n", test);
//	//printf("%p\n", &test);
//	int (*pf)(const char* ) = test;
//	//(*pf)("abc");
//	test("abc");
//	pf("abc");
//	return 0;
//}


//typedef void(*pf_t)(int) ;//��void��*����int������������Ϊpf_t
////pf_t��һ��������
//int main()
//{
//	//( *( void (*)() )0 )();
//	//void(*signal(int, void(*)(int)))(int);
//	void(*signal(int, void(*)(int)))(int);
//
//	pf_t signal(int, pf_t);
//	return 0;
//}


//����ָ�����;
//дһ��������
//�ӷ� ���� �˷� ����


//menu()
//{
//	printf("**************************\n");
//	printf("**********1.�ӷ�**********\n");
//	printf("**********2.����**********\n");
//	printf("**********3.�˷�**********\n");
//	printf("**********4.����**********\n");
//	printf("**********0.�˳�**********\n");
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
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
 
 
//menu()
//{
//	printf("**************************\n");
//	printf("**********1.�ӷ�**********\n");
//	printf("**********2.����**********\n");
//	printf("**********3.�˷�**********\n");
//	printf("**********4.����**********\n");
//	printf("**********0.�˳�**********\n");
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
//void calc(int (*pf)(int,int))//�ص�����
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//
//	printf("����������������:>");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	int (*arr[4])(int,int) = {Add, Sub, Mul, Div};//arr���Ǻ���ָ�������
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
//	printf("**********1.�ӷ�**********\n");
//	printf("**********2.����**********\n");
//	printf("**********3.�˷�**********\n");
//	printf("**********4.����**********\n");
//	printf("**********0.�˳�**********\n");
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
//	//������ָ������
//	//ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input == 0)
//		{
//			printf("�˳�������\n");
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>");
//			scanf("%d %d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//	//����ָ������
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div };
//
//
//	//ָ����ָ�������ָ��
//	int (*(*ppfArr)[])(int, int) = &pfArr;
//
//
//	return 0;
//}


//�ص�����
//�ص��������ǡ���ͨ������ָ���ƺ�����������루��ַ����Ϊ�������ݸ���һ��
//�����������ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص��������ص����������ɸú���
//��ʵ�ַ�ֱ�ӵ��ã��������ض����¼�����������ʱ�������һ�����õġ����ڶԸ��¼���������
//����Ӧ��


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;//���������������
//		//һ��ð������Ĺ���
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
//	void* pv = &a; //void * ���޾������͵�ָ�룬���Խ����������͵ĵ�ַ
//	//void * ���޾������͵�ָ�룬���Բ��ܽ����ò���,Ҳ����+-�����Ĳ���
//
//	return 0;
//}


//#include<stdlib.h>
//qsort ->����������������������͵�����


//void qsort(void* base,//��Ҫ��������ݵ���ʼλ��
//		   size_t num,//�����������Ԫ���м���
//		   size_t width,//�����������Ԫ�صĴ�С����λ���ֽڣ�
//		   int(* cmp)(const void* e1,const void* e2)//����ָ�룬�ȽϺ���
//		  );
//cdec1-��������Լ��


//�Ƚ�2������Ԫ��
//eָ��һ������
//e2ָ������һ������
//����
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e1 - *(int*)e2);
//}


////����
//int cmp_int(const void* e1, const void* e2)
//{
//	return (*(int*)e2 - *(int*)e1);
//}
//int main()
//{
//	//int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	//�������ų�����
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	//�������ųɽ���
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
//	//����ʹ��qsort������ṹ������
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
				//����
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