#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("*************************************\n");
	printf("************** 1.Play ***************\n");
	printf("************** 0.Exit ***************\n");
	printf("*************************************\n");

}


void game()
{
	char mine[Rows][Cols] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[Rows][Cols] = { 0 };//����Ų�����׵���Ϣ
	//��ʼ�����������Ϊָ��������
	//mine ������û�в����׵�ʱ�򣬶��ǡ�0��
	InitBoard(mine, Rows, Cols, '0');
	//show ������û���Ų��׵�ʱ�򣬶��ǡ�*��
	InitBoard(show, Rows, Cols, '*');


	//������
	SetMine(mine,Row,Col);
	DisplayBoard(show, Row, Col);
	//DisplayBoard(mine,Row,Col);


	//�Ų���
	FindMine(mine, show, Row, Col);
}


int main()
{
	int input = 0;
	//������������������
	srand((unsigned int )time(NULL));


	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}