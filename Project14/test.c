#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>


//��
//�����Ľṹ������struct Peo
//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// �� Ů ����
//	int high;
//};
//
//
////struct Peo
////{
////	char name[20];
////	char tele[12];
////	char sex[5];// �� Ů ����
////	int high;
////}p1,p2;//p1��p2������ȫ�ֵĽṹ�����
//
//
//int main()
//{
//	struct Peo p1 = { 0 };//�ṹ������Ĵ���
//
//	return 0;
//}


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// �� Ů ����
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
//	char sex[5];// �� Ů ����
//	int high;
//}p3,p4;
//
//struct Peo p5, p6;//p3,p4,p5,p6�ǽṹ��ȫ�ֱ���
//
//
//int main()
//{
//	struct Peo p1 = { "����","15596668862","��", 181 };//p1�ǽṹ��ֲ�����
//
//	return 0;
//}


//struct Peo
//{
//	char name[20];
//	char tele[12];
//	char sex[5];// �� Ů ����
//	int high;
//}p3, p4;
//
//struct Peo p5, p6;//p3,p4,p5,p6�ǽṹ��ȫ�ֱ���
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
//	struct Peo p1 = { "����","15596668862","��", 181 };//p1�ǽṹ��ֲ�����
//	struct st s = { {"����","15596668888","Ů",166 }, 100, 3.14f};
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
//	char sex[5];// �� Ů ����
//	int high;
//}p3, p4;
//
//struct Peo p5, p6;//p3,p4,p5,p6�ǽṹ��ȫ�ֱ���
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
//	printf("%s %s %s %d\n", p.name, p.tele, p.sex, p.high);//�ṹ�����.��Ա����
//}
//
//
//void print2(struct Peo* sp)
//{
//	printf("%s %s %s %d\n", sp->name, sp->tele, sp->sex, sp->high);//�ṹ��ָ��->��Ա����
//}
//
//
//int main()
//{
//	struct Peo p1 = { "����","15596668862","��", 181 };//p1�ǽṹ��ֲ�����
//	struct st s = { {"����","15596668888","Ů",166 }, 100, 3.14f };
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


//дһ���������ز���������λ��1�ĸ���
//int count_numof_1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)//�����޷�ʹ��
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


//дһ������������int���͵ı���������λ��ͬ�ĸ���
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
//	//^������������ͬΪ0������Ϊ1
//	int ret = m ^ n;
//	//ͳ��һ��ret�ж�����λ�м���1
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


//��ȡһ���������������������е�����λ��ż��λ���ֱ��ӡ������������
//int main()
//{
//	//��ȡ����λ������
//	int i = 0;
//	int num= 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ������
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


//int main()
//{
//	//��ȡ����λ������
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	//��ȡż��λ������
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	return 0;
//}


//ȫ�ֱ�������̬�������Ƿ��ھ�̬��
//ȫ�ֱ�������̬��������ʼ����ʱ��Ĭ�ϻᱻ��ʼ��Ϊ0��
//�ֲ��������Ƿ���ջ��������ʼ����Ĭ��ֵ�����ֵ


//int i;//0
//int main()
//{
//	i--;
//	//sizeof������������㷵�صĽ����size_t���͵ģ����޷�������
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
//�߼�������&& || ���Ľ������������1������Ǽپ���0


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