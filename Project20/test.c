#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d\n", a);
//
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}


//1.�������ڴ󲿷�����±�ʾ��������Ԫ�صĵ�ַ
//������2������
//a)sizeof����������,��ʾ��������
//b)&������,��ʾ��������


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//int main()
//{
//	//printf("%p\n", &Add);
//	int (*pf)(int, int) = &Add;
//
//	int sum = (*pf)(2, 3);
//	printf("%d\n", sum);
//
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
//	//printf("%p\n", &Add);
//	int (*pf)(int, int) = Add;
//
//	//int sum = (*pf)(2, 3);
//	int sum = pf(2, 3);
//	printf("%d\n", sum);
//
//	return 0;
//}


////�����������
////ָ��������ָ�����͵�����
//
//
//int main()
//{
//	int a[] = { 1,2,3,4 };
//
//
//	printf("%d\n", sizeof(a));//16
//	//sizeof��������������������ʾ�������飬���������������Ĵ�С��λ���ֽ�
//	printf("%d\n", sizeof(a+0));//4
//	//a���ǵ�������sizeof�ڲ���Ҳû��ȡ��ַ������a������Ԫ�صĵ�ַ��a+0������Ԫ�صĵ�ַ
//	//�ǵ�ַ����С����4/8���ֽ�
//	printf("%d\n", sizeof(*a));//4
//	//*a�е�a��������Ԫ�صĵ�ַa���Ƕ���Ԫ�صĵ�ַ�����ã��ҵ��ľ�����Ԫ��
//	//��Ԫ�صĴ�С����4���ֽ�
//	printf("%d\n", sizeof(a+1));//4
//	//�����a��������Ԫ�صĵ�ַ
//	//a+1�ǵڶ���Ԫ�صĵ�ַ
//	//sizeof��a+1�����ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(a[1]));//4
//	//�����ֵ�ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a));//4/8
//	//&aȡ��������ĵ�ַ������ĵ�ַ��Ҳ���Ǹ���ַ
//	printf("%d\n", sizeof(*&a));//16
//	//&a-->int(*)[4]
//	//&a�õ������������ĵ�ַ��������int(*)[4]
//	//*&a-->a
//	// 
//	// 
//	//2.*&a������
//	//*&a-->a
//	printf("%d\n", sizeof(&a+1));//4/8
//	//&aȡ����������ĵ�ַ
//	//&a-->int��*��[4]
//	//&a+1�Ǵ�����a�ĵ�ַ���������һ����4������Ԫ�صģ�����Ĵ�С
//	//&a+1�ǵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&a[0]));//4
//	//&a[0]���ǵ�һ��Ԫ�صĵ�ַ��������ǵ�ַ�Ĵ�С
//	printf("%d\n", sizeof(&a[0]+1));//4
//	//&a[0]+1�ǵڶ���Ԫ�صĵ�ַ��������ǵ�ַ�Ĵ�С,��С��4/8���ֽ�
//
//	return 0;
//}


//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//
//	printf("%d\n", sizeof(arr));//6
//	//sizeof(������)
//	printf("%d\n", sizeof(arr+0));//4/8
//	//arr+0 ��������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1
//	//*arr�����������Ԫ�أ���С��1���ֽ�
//	//*arr-->arr[0]
//	//*(arr+0)-->arr[0]
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	//&arr��������ĵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%d\n", sizeof(&arr+1));//4/8
//	//&arr+1�������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0]+1));//4/8
//	//&arr[0]+1�ǵڶ���Ԫ�صĵ�ַ
//	return 0;
//}


#include <string.h>
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//
//
//	printf("%d\n)", strlen(arr));//���ֵ
//	printf("%d\n", strlen(arr + 0));//���ֵ
//
//
//	printf("%d\n", strlen(*arr));//Ұָ��
//	printf("%d\n", strlen(arr[1]));//Ұָ��
//
//
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ-6
//	printf("%d\n",strlen(&arr[0] + 1));//���ֵ-1
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n)", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	//str1en�����ַ������ȵģ���ע�����ַ����е�\0���������\0֮ǰ���ֵ��ַ��ĸ���
//	//strlen�ǿ⺯����ֻ����ַ���
//	//strlenֻ��עռ���ڴ�ռ�Ĵ�С�����ں��ڴ��зŵ���ʲô
//	//sizeof�ǲ�����
//
//	
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n",strlen(&arr[0] + 1));//5
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8
//	printf("%d\n",sizeof(p +1));//4//8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n",sizeof(&p[0] + 1));//4/8
//
//
//	printf("%d\n",strlen(p));//6
//	printf("%d\n",strlen(p + 1));//5
//	//printf("%d\n", strlen(*p));//err
//	//printf("%d\n",strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���ֵ
//	printf("%d\n", strlen(&p + 1));//���ֵ
//	printf("%d\n", strlen(&p[0] + 1));//5
//
//
//	return 0;
//}


int main()
{
	int a[3][4] = { 0 };
	printf("%d\n", sizeof(a));//48
	printf("%d\n",sizeof(a[0][0]));//4
	printf("%d\n", sizeof(a[0]));//16
	//a[0]�ǵ�һ�����һά���������������������sizeof�ڲ���a[0]��ʾ��һ���������һά����
	//sizeof��a[0]������ľ��ǵ�һ�еĴ�С
	printf("%d\n", sizeof(a[0] + 1));//4
	//a[0]��û�е�������sizeof�ڲ���Ҳûȡ��ַ��a[0]�ͱ�ʾ��Ԫ�صĵ�ַ
	//���ǵ�һ�����һά����ĵ�һ��Ԫ�صĵ�ַ��a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
	printf("%d\n", sizeof(*(a[0] + 1)));//4
	//a[0]+1���ǵ�һ�еڶ���Ԫ�صĵ�ַ
	//*��a[0]+1�������ǵ�һ�еڶ���Ԫ��
	printf("%d\n", sizeof(a + 1));//4/8
	//a��Ȼ�Ƕ�ά����ĵ�ַ�����ǲ�û�е�������sizeof�ڲ���Ҳûȡ��ַ
	//a��ʾ��Ԫ�صĵ�ַ����ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ�еĵ�ַ
	//a+1����������һ�У���ʾ�ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(a + 1)));//16
	//*��a+1���ǶԵڶ��е�ַ�Ľ����ã��õ����ǵڶ���
	//*��a+1)-->a[1]
	//sizeof(*(a+1))-->sizeof(a[1])
	printf("%d\n", sizeof(&a[0] + 1));//4/8
	//&a[0] - �Ե�һ�е�������ȡ��ַ���ó����ǵ�һ�еĵ�ַ
	//&a[0]+1-�õ����ǵڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));//16
	printf("%d\n",sizeof(*a));//16
	//a��ʾ��Ԫ�صĵ�ַ�����ǵ�һ�еĵ�ַ
	//*a���ǶԵ�һ�е�ַ�Ľ����ã��õ��ľ��ǵ�һ��
	printf("%d\n", sizeof(a[3]));//16
	return 0;
}






