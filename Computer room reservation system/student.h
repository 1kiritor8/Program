//
// Created by dixhuitieme on 2025/4/27.
//

#ifndef COMPUTER_ROOM_RESERVATION_SYSTEM_STUDENT_H
#define COMPUTER_ROOM_RESERVATION_SYSTEM_STUDENT_H

#include "iostream"
#include "Identity.h"
#include "string"
#include "vector"
#include "computerRoom.h"
#include "fstream"
#include "globalFile.h"
#include "orderFile.h"

using namespace std;

//学生类
class Student : public Identity
{
public:

    //默认构造
    Student();

    //有参构造
    Student(int id,string name,string pwd);//参数：学号，姓名，密码

    //菜单界面
    virtual void operMenu();

    //申请预约
    void applyOrder();

    //查看自身预约
    void showMyOrder();

    //查看所有预约
    void showAllOrder();

    //取消预约
    void cancalOrder();

    //学生学号
    int m_Id;

    //机房容器
    vector<ComputerRoom> vCom;
};

#endif //COMPUTER_ROOM_RESERVATION_SYSTEM_STUDENT_H
