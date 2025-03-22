//
// Created by dixhuitieme on 2025/2/1.
//

#ifndef workerManager_WORKERMANAGER_H
#define workerManager_WORKERMANAGER_H

#define FILENAME "empFile.txt"

#include <iostream>
#include "windows.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boos.h"
#include "fstream"

using namespace std;

enum choice
{
    退出系统 = 0,
    添加职工,
    显示职工,
    删除职工,
    修改职工,
    查找职工,
    排序职工,
    清空所有文档
};

enum role
{
    普通职工 = 1,
    项目经理,
    老板
};

class WorkerManager
{
public:

    WorkerManager();

    void Show_Menu();

    void exitSystem();

    int m_EmpNum;

    Worker** m_EmpArray;

    void Add_Emp();

    void save();

    bool m_FileIsEmpty;

    int get_EmpNum();

    void init_Emp();

    void show_Emp();

    void Del_Emp();

    int IsExist(int id);

    void Mod_Emp();

    void Find_Emp();

    void Sort_Emp();

    void Clean_File();

    ~WorkerManager();
};





















#endif //workerManager_WORKERMANAGER_H
