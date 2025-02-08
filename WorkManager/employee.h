//
// Created by dixhuitieme on 2025/2/2.
//

#ifndef WORKMANAGER_EMPLOYEE_H
#define WORKMANAGER_EMPLOYEE_H

#include <iostream>
#include "string"
#include "worker.h"

using namespace std;

class Employee :public Worker
{
public:

    Employee(int id,string name,int dId);

    virtual void showInfo();

    virtual string getDeptName();
};

#endif //WORKMANAGER_EMPLOYEE_H
