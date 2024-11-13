#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//结构体类型的定义
//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//
//};


//struct Stu
//{
//	//学生的相关属性
//	char name[20];
//	int age;
//
//}s1,s2;//全局变量
//
//
//int main()
//{
//	struct Stu s3;//局部变量
//
//	return 0;
//}


//匿名结构体类型
//struct
//{
//	char name[20];
//	int age;
//}s1;
//
//
//int main()
//{
//
//	return 0;
//}//只能使用一次


//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}a[20],*p;
//
//
//int main()
//{
//	p = &x;
//	return 0;
//}


//err
//struct Node
//{
//	int data;
//	struct Node next;
//};
//
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}


//struct Node
//{
//	int data;
//	struct Node* next;
//};


////1.
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}* linklist;
//
//
////2.
//struct Node
//{
//	int data;
//	struct Node* next;
//};
//typedef struct Node* linklist;


//struct Point
//{
//	int x;
//	int y;
//}p1 = { 2,3 };
//
//
//struct Score
//{
//	int n;
//	char ch;
//};
//
//
//struct Stu
//{
//	char name[20];
//	int age;
//	struct Score s;
//};
//
//
//int main()
//{
//	struct Point p2 = { 3,4 };
//	struct Stu s1 = { "zhangsan",20 ,{100,'q'} };
//	printf("%s %d %d %c\n", s1.name, s1.age, s1.s.n, s1.s.ch);
//	return 0;
//}


//#include<stddef.h>
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//
//struct S2
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//
//int main()
//{
//	/*struct S1 s1;
//	struct S2 s2;
//	printf("%d\n", sizeof(struct S1));
//	printf("%d\n", sizeof(struct S2));*/
//
//
//	/*printf("%d\n", offsetof(struct S1, c1));
//	printf("%d\n", offsetof(struct S1, i));
//	printf("%d\n", offsetof(struct S1, c2));*/
//
//
//	/*printf("%d\n", offsetof(struct S2, c1));
//	printf("%d\n", offsetof(struct S2, c2));
//	printf("%d\n", offsetof(struct S2, i));*/
//
//
//	/*printf("%d\n", offsetof(struct S3, d));
//	printf("%d\n", offsetof(struct S3, c));
//	printf("%d\n", offsetof(struct S3, i));*/
//
//
//	printf("%d\n", offsetof(struct S4, c1));
//	printf("%d\n", offsetof(struct S4, s3));
//	printf("%d\n", offsetof(struct S4, d));
//	return 0;
//}


//#pragma once
////头文件中使用，功能是：防止头文件被多次引用
//
//
//#pragma pack(4)
//struct S
//{
//	int i;
//	double d;
//};
//#pragma pack()
//
//
//#pragma pack(1)
//struct S1
//{
//	char c1;
//	int i;
//	char c2;
//};
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S));
//	printf("%d\n", sizeof(struct S1));
//
//	return 0;
//}


//struct S
//{
//	int data[1000];
//	int num;
//};
//
//
//void print1(struct S ss)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ss.data[i]);
//	}
//	printf("%d\n", ss.num);
//}
//
//
//void print2(const struct S* ps)
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", ps->data[i]);
//	}
//	printf("%d\n", ps->num);
//}
//int main()
//{
//	struct S s = { {1,2,3},100 };
//	print1(s);
//	print2(&s);
//
//	return 0;
//}


//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}


struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};


int main()
{
	struct S s = { 0 };
	printf("%d\n", sizeof(struct S));
	s.a = 10;
	s.b = 12;
	s.c = 3;
	s.d = 4;

	return 0;
}