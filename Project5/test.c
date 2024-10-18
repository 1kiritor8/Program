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
	//计算n的阶乘
	/*int i = 1;
	int n = 0;
	int ret = 1;

	scanf("%d", &n);
	for(i=1;i<=n;i++)
	{
		ret = ret * i;

	}
	printf("%d\n", ret);*/



	//计算1！+2！+3！+......+10!
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
//	//在一个有序数组中查找具体的某个数字n
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了,下标是；%d\n",i);
//			break;
//		}
//		if (i == sz)
//		{
//			printf("找不到\n");
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
//			//int mid = (left + right) / 2;left+right的和可能会超出范围溢出
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
//				printf("找到了，下标是；%d\n", mid);
//				break;
//			}
//			
//		}
//		if (left > right)
//		{
//			printf("找不到\n");
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
//		//清空屏幕
//		system("cls");//system是一个库函数，可以执行系统命令
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
//	//假设密码是字符串：abcdef
//	//比较两个字符串是否相等不能使用 == ，而应该使用一个库函数:strcmp
//	//如果返回值是0，表示两个字符串相等
#include<string.h>
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);
//		if (strcmp(password,"abcdef")==0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入密码均错误，退出程序\n");
//	}
//	return 0;
//}


//电脑产生一个随机数（1~100)
//猜数字
//猜大了
//猜小了
//直到猜对了，结束


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
//	//1.生成随机数
//	//0~99-->1~100
//	int ret=rand()%100+1;//生成随机数的函数
//	//printf("%d\n", ret);
//	//2.猜数字
//
//	while (1)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
////指针
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch(input)
//		{
//		case 1:
//			game();//猜数字的整个逻辑
//			printf("猜数字\n");
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
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


//关机程序
//1.电脑运行起来后，一分钟内关机
//2.如果输入：我是猪，就取消关机
//3.


//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑将在60秒内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}