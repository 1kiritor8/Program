#define _CRT_SECURE_NO_WARNINGS
#include"game.h"

void menu()
{
	printf("******************************************\n");
	printf("********** 1.Play   0.Exit  **************\n");
	printf("******************************************\n");
}


void game()
{
	int ret = 0;
	char board[Row][Col] = { 0 };
	//初始化棋盘的函数
	InitBoard(board, Row, Col);
	DisplayBoard(board,Row,Col);
	//下棋
	while (1)
	{
		PlayerMove(board,Row,Col);
		//判断输赢
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);


		ComputerMove(board, Row, Col);
		//判断输赢
		ret = IsWin(board, Row, Col);
		if (ret != 'C')
		{
			break;
		}
		DisplayBoard(board, Row, Col);

	}
	if (ret == '*')
	{
		printf("玩家赢了:>\n");
	}
	else if(ret=='#')
	{
		printf("电脑赢了:>\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, Row, Col);

}


int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	int input = 0;
	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			game();
			printf("三子棋\n");
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