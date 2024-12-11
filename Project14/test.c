#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


//人
//声明的结构体类型struct Peo
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// 男 女 保密
//	int high;
//};
//
//
////struct Peo
////{
////	char name[20];
////	char tele[12];
////	char sex[5];// 男 女 保密
////	int high;
////}p1,p2;//p1和p2是两个全局的结构体变量
//
//
//int main()
//{
//	struct Peo p1 = { 0 };//结构体变量的创建
//
//	return 0;
//}


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// 男 女 保密
//	int high;
//};
//
//
//struct st
//{
//	struct Peo p;
//	int num;
//	float f;
//
//};


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// 男 女 保密
//	int high;
//}p3,p4;
//
//struct Peo p5, p6;//p3,p4,p5,p6是结构体全局变量
//
//
//int main()
//{
//	struct Peo p1 = { "张三","15596668862","男", 181 };//p1是结构体局部变量
//
//	return 0;
//}


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// 男 女 保密
//	int high;
//}p3, p4;
//
//struct Peo p5, p6;//p3,p4,p5,p6是结构体全局变量
//
//
//struct st
//{
//	struct Peo p;
//	int num;
//	float f;
//
//};
//
//int main()
//{
//	struct Peo p1 = { "张三","15596668862","男", 181 };//p1是结构体局部变量
//	struct st s = { {"李四","15596668888","女",166 }, 100, 3.14f};
//
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//	return 0;
//}


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// 男 女 保密
//	int high;
//}p3, p4;
//
//struct Peo p5, p6;//p3,p4,p5,p6是结构体全局变量
//
//
//struct st
//{
//	struct Peo p;
//	int num;
//	float f;
//
//};
//
//
//void print1(struct Peo p)
//{
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//结构体变量.成员变量
//}
//
//
//void print2(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//结构体指针->成员变量
//}
//
//
//int main()
//{
//	struct Peo p1 = { "张三","15596668862","男", 181 };//p1是结构体局部变量
//	struct st s = { {"李四","15596668888","女",166 }, 100, 3.14f };
//
//
//	printf("%s %s %s %d\n", p1.name, p1.tele, p1.sex, p1.high);
//	printf("%s %s %s %d %d %f\n", s.p.name, s.p.tele, s.p.sex, s.p.high, s.num, s.f);
//
//
//	print1(p1);
//	print2(&p1);
//	return 0;
//}


//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;//a=6	c=6
//	b = ++c, c++, ++a, a++;//a=8	b=7		c=8
//	b += a++ + c;//a=9	b=23	c=8
//	printf("a=%d b=%d c=%d\n", a, b, c);//
//	return 0;
//}


//写一个函数返回参数二进制位中1的个数
//int count_numof_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//负数无法使用
//		{
//			count++;
//		}
//		//n = n / 2;
//		n /= 2;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_numof_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//int count_numof_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		//n = n / 2;
//		n /= 2;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_numof_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//int count_numof_1(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_numof_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//int count_numof_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int n = count_numof_1(num);
//	printf("%d\n", n);
//	return 0;
//}


//写一个函数求两个int类型的变量二进制位不同的个数
//int count_diff_bit(int m,int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((m >> i) & 1) != ((n >> i) & 1))
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//}


//int count_diff_bit(int m, int n)
//{
//	int count = 0;
//	//^异或操作符，相同为0，相异为1
//	int ret = m ^ n;
//	//统计一下ret中二进制位有几个1
//	while (ret)
//	{
//		ret = ret & (ret - 1);
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &m, &n);
//	int ret = count_diff_bit(m, n);
//	printf("%d\n", ret);
//}


//获取一个整数二进制序列中所有的奇数位和偶数位，分别打印出二进制序列
//int main()
//{
//	//获取奇数位的数字
//	int i = 0;
//	int num= 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


//int main()
//{
//	//获取奇数位的数字
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//获取偶数位的数字
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


//全局变量，静态变量都是放在静态区
//全局变量，静态变量不初始化的时候，默认会被初始化为0；
//局部变量，是放在栈区，不初始化，默认值是随机值


//int i;//0
//int main()
//{
//	i--;
//	//sizeof这个操作符计算返回的结果是size_t类型的，是无符号整形
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	while ((scanf("%d", &n) == 1))
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


int is_leap_year(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0));
}
//逻辑操作符&& || ！的结果如果是真就是1，如果是假就是0


int main()
{
	int year = 0, month = 0, day = 0;
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	while (scanf("%d %d", &year, &month) == 2)
	{
		day = days[month];
		if ((is_leap_year(year) == 1 )&& month == 2)
		{
			day++;
		}
		printf("%d\n", day);
	}
	return 0;
}