#pragma once


#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define Row 3
#define Col 3


//��ʼ������
void DisplayBoard(char board[Row][Col], int row, int col);

//��ӡ����
void DisplayBoard(char board[Row][Col],int row,int col);

//�������
void PlayerMove(char board[Row][Col],int row ,int col);

//��������
//��û�������λ�ã������
void ComputerMove(char board[Row][Col], int row, int col);

//���Ӯ��-��*��
//����Ӯ��-��#��
//ƽ��-��Q��
//����-��C'

char IsWin(char board[Row][Col], int row, int col);