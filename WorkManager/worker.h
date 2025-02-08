//
// Created by dixhuitieme on 2025/2/2.
//

#ifndef WORKMANAGER_WORKER_H
#define WORKMANAGER_WORKER_H

#include <iostream>
#include "string"

using namespace std;

class Worker
{
public:

    virtual void showInfo() = 0;

    virtual string getDeptName() = 0;

    int m_Id;
    string m_Name;
    int m_DeptId;

};

#endif //WORKMANAGER_WORKER_H
