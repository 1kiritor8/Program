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
	char mine[Rows][Cols] = { 0 };//存放布置好的雷的信息
	char show[Rows][Cols] = { 0 };//存放排查出的雷的信息
	//初始化数组的内容为指定的内容
	//mine 数组在没有布置雷的时候，都是‘0’
	InitBoard(mine, Rows, Cols, '0');
	//show 数组在没有排查雷的时候，都是‘*’
	InitBoard(show, Rows, Cols, '*');


	//设置雷
	SetMine(mine,Row,Col);
	DisplayBoard(show, Row, Col);
	//DisplayBoard(mine,Row,Col);


	//排查雷
	FindMine(mine, show, Row, Col);
}


int main()
{
	int input = 0;
	//设置随机数的生成起点
	srand((unsigned int )time(NULL));


	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}