//
// Created by dixhuitieme on 2025/2/3.
//

#ifndef WORKMANAGER_MANAGER_H
#define WORKMANAGER_MANAGER_H

#include <iostream>
#include "worker.h"

using namespace std;

class Manager :public Worker
{
public:

    Manager(int id,string name,int dId);

    virtual void showInfo();

    virtual string getDeptName();
};




























#endif //WORKMANAGER_MANAGER_H
