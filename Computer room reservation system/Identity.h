//
// Created by dixhuitieme on 2025/4/27.
//

#ifndef COMPUTER_ROOM_RESERVATION_SYSTEM_IDENTITY_H
#define COMPUTER_ROOM_RESERVATION_SYSTEM_IDENTITY_H

#include "iostream"
#include "string"

using namespace std;

class Identity
{
public:

    //操作菜单  纯虚函数
    virtual void operMenu() = 0;

    //用户名
    string m_Name;
    //密码
    string m_Pwd;
};

#endif //COMPUTER_ROOM_RESERVATION_SYSTEM_IDENTITY_H
