#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<errno.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<limits.h>
#include<Windows.h>


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int b = 1;
//	int c = a + b;
//
//	while (1)
//	{
//		if (n == b)
//		{
//			printf("0\n");
//			break;
//		}
//		else if (n < b)
//		{
//			if (abs(a - n) > abs(b - n))
//			{
//				printf("%d\n", abs(b - n));
//			}
//			else
//			{
//				printf("%d\n", abs(a - n));
//			}
//			break;
//		}
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return 0;
//}


void Replacespeace(char* str, int length)
{
	char* cut = str;
	int space_count = 0;
	while (*cut)
	{
		if (*cut == ' ')
			space_count++;
		cut++;
	}
	int end1 = length - 1;
	int end2 = length + space_count * 2 - 1;

	while (end1 != end2)
	{
		if (str[end1] != ' ')
		{
			str[end2] = str[end1];
			end1--;
			end2--;
		}
		else
		{
			str[end2--] = '0';
			str[end2--] = '2';
			str[end2--] = '%';
			end1--;
		}
	}
}

int main()
{
	char arr[1000] = "We Are Happy.";
	Replacespeace(arr,20);
	printf("%s\n", arr);

	return 0;
}