#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//	return 0;
//}


//��һ��void ��ʾ�������᷵��ֵ
//�ڶ���void ��ʾ��������Ҫ���κβ���


//void test(void)
//{
//	printf("hehe\n");
//}
//int main()
//{
//	test(1);
//	return 0;
//}


//������2���Ʊ�ʾҲ�����ֱ�ʾ��ʽ��
//1. ����������ԭ�롢���롢������ͬ
//2. ����������ԭ�롢���롢��������Ҫ�����
//ԭ�룺ֱ��ͨ����������ʽд���Ķ��������о���ԭ��
//���룺ԭ��ķ���λ���䣬����λ��λȡ���õ��ľ��Ƿ���
// ���룺���� + 1���ǲ���
//�������ڴ��д�ŵ��ǲ���Ķ���������


//int main()
//{
//	int a = 20;
//	//20
//	//00000000000000000000000000010100
//	//0x00 00 00 14
//	//00000000000000000000000000010100
//	//00000000000000000000000000010100
//	int b = -10;
//	//10000000000000000000000000001010
//	//0x80 00 00 0a
//	//11111111111111111111111111110101
//	//0x ff ff ff f5
//	//11111111111111111111111111110110
//	//0x ff ff ff f6
//
//	return 0;
//}


//int main()
//{
//	int a = 1;
//		if (*(char*) &a == 1)
//		{
//			printf("С��\n");
//		}
//		else
//		{
//			printf("���\n");
//		}
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}



//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//
//
//	printf("a=%d,b=%d,c=%d", a, b, c);
//
//	return 0;
//}


//int main()
//{
//	char a = -128;
//
//
//	printf("%u\n", a);
//	//%u ��ӡ�޷�������
//
//	return 0;
//}


//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//
//	return 0;
//}


//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%d\n", i + j);
//	return 0;
//}


//#include<Windows.h>
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//		Sleep(1000);//����1000����
//	}
//	return 0;
//}


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d ", strlen(a));
//	//strlen �����ַ����ĳ��ȣ���ע�����ַ�����'\0'(����0��֮ǰ���ֶ����ַ�
//	return 0;
//}


//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("Hello World\n");
//	}
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//
//	return 0;
//}


//#include<string.h>
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") >= 0)
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");
//	return 0;
//}


//#include<string.h>
//#include<assert.h>
//int my_strlen(const char* str)
//{	assert(str);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	if (my_strlen("abc") - my_strlen("abcdef") >= 0)
//	{
//		printf(">\n");
//	}
//	else
//		printf("<\n");
//	return 0;
//}


//int main()
//{
//	int n = 9;
//	float* pFloat = (float*)&n;
//
//
//	printf("n��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//	*pFloat = 9.0;
//	printf("num��ֵΪ:%d\n", n);
//	printf("*pFloat��ֵΪ:%f\n", *pFloat);
//	return 0;
//}


int main()
{
	float f = 5.5f;
	//5.5
	//101.1
	//1.011*2^2
	//(-1)^0*1.011*2^2
	//S=0 M=1.011 E=2
	//0100 0000 1011 0000 0000 0000 0000 0000
	//0x40 b0 00 00
	//
	//2+127=129
	return 0;
}