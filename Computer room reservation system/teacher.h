//
// Created by dixhuitieme on 2025/4/27.
//

#ifndef COMPUTER_ROOM_RESERVATION_SYSTEM_TEACHER_H
#define COMPUTER_ROOM_RESERVATION_SYSTEM_TEACHER_H

#include "iostream"
#include "Identity.h"
#include "string"
#include "orderFile.h"
#include "vector"

using namespace std;

//教师类
class Teacher : public Identity
{
public:

    //构造函数
    Teacher();

    //有参构造
    Teacher(int empId,string name,string pwd);

    //菜单界面
    virtual void operMenu();

    //查看所有预约
    void showAllOrder();

    //审核预约
    void validOrder();

    //职工号
    int m_EmpId;
};

#endif //COMPUTER_ROOM_RESERVATION_SYSTEM_TEACHER_H
