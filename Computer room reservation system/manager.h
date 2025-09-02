//
// Created by dixhuitieme on 2025/4/28.
//

#ifndef COMPUTER_ROOM_RESERVATION_SYSTEM_MANAGER_H
#define COMPUTER_ROOM_RESERVATION_SYSTEM_MANAGER_H

#include "iostream"
#include "string"
#include "fstream"
#include "Identity.h"
#include "globalFile.h"
#include "vector"
#include "student.h"
#include "teacher.h"
#include "algorithm"
#include "computerRoom.h"

using namespace std;

class Manager : public Identity
{
public:

    //默认构造
    Manager();

    //有参构造
    Manager(string name,string pwd);

    //菜单界面
    virtual void operMenu();

    //添加账号
    void addPerson();

    //查看账号
    void showPerson();

    //查看机房信息
    void showComputer();

    //清空预约记录
    void clearFile();

    //初始化容器
    void initVector();

    //学生容器
    vector<Student>vStu;

    //教师容器
    vector<Teacher>vTea;

    //机房信息容器
    vector<ComputerRoom>vCom;

    //检测重复          学号、职工号  类型
    bool checkRepeat(int id,int type);

};

#endif //COMPUTER_ROOM_RESERVATION_SYSTEM_MANAGER_H
