#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define Row 3
#define Col 3


//初始化棋盘
void DisplayBoard(char board[Row][Col], int row, int col);

//打印棋盘
void DisplayBoard(char board[Row][Col],int row,int col);

//玩家下棋
void PlayerMove(char board[Row][Col],int row ,int col);

//电脑下棋
//找没有下棋的位置，随机下
void ComputerMove(char board[Row][Col], int row, int col);

//玩家赢了-‘*’
//电脑赢了-‘#’
//平局-‘Q’
//继续-‘C'

char IsWin(char board[Row][Col], int row, int col);