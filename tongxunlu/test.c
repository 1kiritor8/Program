#define _CRT_SECURE_NO_WARNINGS
#include "contact.h"


enum Point
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};


void menu()
{
	printf("************************************\n");
	printf("************************************\n");
	printf("********1.Add       2.Del***********\n");
	printf("********3.Search    4.Modify********\n");
	printf("********5.Show      6.Sort**********\n");
	printf("********      0.Exit        ********\n");
	printf("************************************\n");
	printf("************************************\n");
}


int main()
{
	int input = 0;


	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);


	do 
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			SaveContact(&con);
			DestroyContact(&con);
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
	return 0;
}

