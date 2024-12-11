#pragma once


#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2


//类型的声明
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>


//人的信息
typedef struct PeoInfo
{
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PeoInfo;


//通讯录


////静态版本
//typedef struct Contact
//{
//	PeoInfo data[MAX];//存放人的信息
//	int count;//记录当前通讯录中实际人的个数
//}Contact;


//动态版本
typedef struct Contact
{
	PeoInfo* data;//存放人的信息
	int count;//记录当前通讯录中实际人的个数
	int capacity;//当前通讯录的容量
}Contact;


//初始化通讯录
int InitContact(Contact* pc);


//销毁通讯录
void DestroyContact(Contact* pc);


//增加联系人
void AddContact(Contact* pc);


//打印通讯录中的信息
void ShowContact(const Contact* pc);


//删除指定联系人
void DelContact(Contact* pc);


//查找指定联系人
void SearchContact(Contact* pc);


//修改指定联系人信息
void ModifyContact(Contact* pc);


//排列联系人信息
void SortContact(Contact* pc);


//保存联系人信息到文件中
void SaveContact(const Contact* pc);


//加载文件中的信息到通讯录中
void LoadContact(Contact* pc);

