//
// Created by dixhuitieme on 2025/2/3.
//

#ifndef WORKMANAGER_BOOS_H
#define WORKMANAGER_BOOS_H

#include <iostream>
#include "worker.h"

using namespace std;

class Boss :public Worker
{
public:

    Boss(int id,string name,int dId);

    virtual void showInfo();

    virtual string getDeptName();
};


#endif //WORKMANAGER_BOOS_H
