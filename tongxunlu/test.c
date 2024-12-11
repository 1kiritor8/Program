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


	Contact con;//ͨѶ¼
	//��ʼ��ͨѶ¼
	InitContact(&con);


	do 
	{
		menu();
		printf("��ѡ��:>\n");
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
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	return 0;
}

