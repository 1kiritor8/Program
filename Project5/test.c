#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//
//	} 
//	while (i <= 10);
//	return 0;
//}


//int main()
//{
	//����n�Ľ׳�
	/*int i = 1;
	int n = 0;
	int ret = 1;

	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		ret = ret * i;

	}
	printf("%d\n", ret);*/



	//����1��+2��+3��+......+10!
//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//
//	//��һ�����������в��Ҿ����ĳ������n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ���,�±��ǣ�%d\n",i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("�Ҳ���\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		int k = 7;
//
//
//		int i = 0;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//
//		int left = 0;
//		int right = sz - 1;
//		while (left <= right)
//		{
//			//int mid = (left + right) / 2;left+right�ĺͿ��ܻᳬ����Χ���
//			int mid = left + (right-left) / 2;
//			if (arr[mid] < k)
//			{
//				left = mid + 1;
//			}
//			else if (arr[mid] > k)
//			{
//				right = mid - 1;
//			}
//			else
//			{
//				printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//				break;
//			}
//			
//		}
//		if (left > right)
//		{
//			printf("�Ҳ���\n");
//		}
//	return 0;
//}

#include<Windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!";
//	char arr2[] = "##################";
//
//
//	int left = 0;
//	int right = strlen(arr2) - 1;//int right=sizeof(arr1)/sizeof(arr1[0])-2;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		//�����Ļ
//		system("cls");//system��һ���⺯��������ִ��ϵͳ����
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//�����������ַ�����abcdef
//	//�Ƚ������ַ����Ƿ���Ȳ���ʹ�� == ����Ӧ��ʹ��һ���⺯��:strcmp
//	//�������ֵ��0����ʾ�����ַ������
#include<string.h>
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", password);
//		if (strcmp(password,"abcdef")==0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("������������������˳�����\n");
//	}
//	return 0;
//}


//���Բ���һ���������1~100)
//������
//�´���
//��С��
//ֱ���¶��ˣ�����


#include<time.h>
//void menu()
//{
//	printf("****************************************\n");
//	printf("*************1.play*********************\n");
//	printf("*************0.exit*********************\n");
//	printf("****************************************\n");
//
//}
//
////0~RAND_MAX(32767)
//void game()
//{
//	int guess = 0;
//	//1.���������
//	//0~99-->1~100
//	int ret=rand()%100+1;//����������ĺ���
//	//printf("%d\n", ret);
//	//2.������
//
//	while (1)
//	{
//		printf("�������:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//
////ָ��
////int* p = NULL;
////int a = 0;
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//RAND_MAX;
//
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();//�����ֵ������߼�
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			}
//	} while (input);
//	return 0;
//}


//int main()
//{
//	again:
//	printf("hehe\n");
//	printf("haha\n");
//	goto again;
//	return 0;
//}


//�ػ�����
//1.��������������һ�����ڹػ�
//2.������룺��������ȡ���ػ�
//3.


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ��Խ���60���ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}