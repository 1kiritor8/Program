//
// Created by kiritor on 2025/8/11.
//

#ifndef COMPUTER_ROOM_RESERVATION_SYSTEM_ORDERFILE_H
#define COMPUTER_ROOM_RESERVATION_SYSTEM_ORDERFILE_H

#include "iostream"
#include "string"
#include "globalFile.h"
#include "fstream"
#include "map"

using namespace std;

class OrderFile
{
public:

    //构造函数
    OrderFile();

    //更新预约记录
    void updateOrder();

    //记录预约条数
    int m_Size;

    //记录所有预约信息的容器   key记录条数 value具体记录键值对信息
    map<int,map<string,string>> m_orderData;

};

#endif //COMPUTER_ROOM_RESERVATION_SYSTEM_ORDERFILE_H
