#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//enum Day
//{
//	Mon,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};


//enum Day
//{
//	Mon=1,
//	Tues,
//	Wed,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	//enum Day d = Fri;
//	printf("%d\n", Mon);
//	printf("%d\n", Tues);
//	printf("%d\n", Wed);
//	printf("%d\n", Thur);
//	printf("%d\n", Fri);
//	printf("%d\n", Sat);
//	printf("%d\n", Sun);
//
//	return 0;
//}


//union Un
//{
//	int a;
//	char c;
//};
//
//
//int main()
//{
//	union Un u;
//	u.a = 0x11223344;
//	u.c = 0x00;
//
//	/*printf("%d\n", sizeof(u));
//
//
//	printf("%p\n", &u);
//	printf("%p\n", &(u.a));
//	printf("%p\n", &(u.c));*/
//
//	return 0;
//}


//判断当前机器的大小端存储
//int check_sym()
//{
//	int a = 1;
//	return *(char*)&a;
//}


//int check_sym()
//{
//	union Un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//
//int main()
//{
//	int ret = check_sym();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	return 0;
//}


union Un
{
	char arr[5];
	int i;
};


int main()
{
	printf("%d\n", sizeof(union Un));

	return 0;
}