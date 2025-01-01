//
// Created by 27292 on 2024/12/28.
//
#include "Contacts management system.h"

void showMenu()
{
    cout << "**********************************************************" << endl;
    cout << "******************** 1.添加联系人 ************************" << endl;
    cout << "******************** 2.显示联系人 ************************" << endl;
    cout << "******************** 3.删除联系人 ************************" << endl;
    cout << "******************** 4.查找联系人 ************************" << endl;
    cout << "******************** 5.修改联系人 ************************" << endl;
    cout << "******************** 6.删除通讯录 ************************" << endl;
    cout << "******************** 0.退出通讯录 ************************" << endl;
    cout << "**********************************************************" << endl;
}

void addPerson(Addressbooks* abs)
{
    assert(abs != NULL);
    if(abs == NULL)
    {
        cout << ("abs:%s",strerror(errno)) << endl;
        return;
    }
    if(abs->size == PersonNum)
    {
        cout << "通讯录已满，无法添加！！！" << endl;
        return;
    }
    else
    {
        cout << "请输入姓名：" << endl;
        cin >> abs->personArray[abs->size].name;
        cout << "请输入性别：" << endl;
        cin >> abs->personArray[abs->size].sex;
        cout << "请输入年龄：" << endl;
        cin >> abs->personArray[abs->size].age;
        cout << "请输入电话：" << endl;
        cin >> abs->personArray[abs->size].tele;
        cout << "请输入地址：" << endl;
        cin >> abs->personArray[abs->size].addr;
        cout << "添加成功！！！" << endl;
        abs->size++;
        system("pause");
        system("cls");
    }
}

void showPerson(Addressbooks* abs)
{
    assert(abs != NULL);
    if(abs == NULL)
    {
        cout << ("abs:%s",strerror(errno)) << endl;
        return;
    }
    if(abs->size == 0)
    {
        cout << "通讯录为空！！！" << endl;
        return;
    }
    else
    {
        for(int i = 0; i < abs->size; i++)
        {
            cout << "姓名：" << abs->personArray[i].name << "\t";
            cout << "性别：" << abs->personArray[i].sex << "\t";
            cout << "年龄：" << abs->personArray[i].age << "\t";
            cout << "电话：" << abs->personArray[i].tele << "\t";
            cout << "地址：" << abs->personArray[i].addr << endl;

        }

    }

    system("pause");
    system("cls");
}

int isExist(Addressbooks* abs, string name)
{
    assert(abs != NULL);
    if(abs == NULL)
    {
        cout << ("abs:%s",strerror(errno)) << endl;
        return -1;
    }
    for(int i = 0;i <abs->size;i++)
    {
        if(abs->personArray[i].name == name)
        {
            return i;
        }
    }

    return -1;
}

void deletePerson(Addressbooks* abs)
{
    string name;
    assert(abs != NULL);
    if(abs == NULL)
    {
        cout << ("abs:%s",strerror(errno)) << endl;
        return;
    }
    cout << "请输入要删除的联系人的名字" << endl;
    cin >> name;
    int ret = isExist(abs,name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;

    }
    else
    {
        for (int i = ret; i < abs->size - 1; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->size--;
        cout << "删除成功" << endl;
    }

    system("pause");
    system("cls");
}

void findPerson(Addressbooks* abs)
{
    string name;
    cout << "请输入要查找的联系人的名字" << endl;
    cin >> name;
    assert(abs != NULL);
    if(abs == NULL)
    {
        cout << ("abs:%s",strerror(errno)) << endl;
        return;
    }
    int ret = isExist(abs,name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;

    }
    else
    {
        cout << "姓名：" << abs->personArray[ret].name << "\t";
        cout << "性别：" << abs->personArray[ret].sex << "\t";
        cout << "年龄：" << abs->personArray[ret].age << "\t";
        cout << "电话：" << abs->personArray[ret].tele << "\t";
        cout << "地址：" << abs->personArray[ret].addr << endl;
        cout << "修改成功" << endl;
    }

    system("pause");
    system("cls");
}

void modifyPerson(Addressbooks* abs)
{
    string name;
    cout << "请输入要修改的联系人的名字" << endl;
    cin >> name;
    assert(abs != NULL);
    if(abs == NULL)
    {
        cout << ("abs:%s",strerror(errno)) << endl;
        return;
    }
    int ret = isExist(abs,name);
    if (ret == -1)
    {
        cout << "查无此人" << endl;

    }
    else
    {
        cout << "请输入修改后的名字：" << endl;
        cin >> abs->personArray[ret].name;
        cout << "请输入修改后的性别：" << endl;
        cin >> abs->personArray[ret].sex;
        cout << "请输入修改后的年龄：" << endl;
        cin >> abs->personArray[ret].age;
        cout << "请输入修改后的电话：" << endl;
        cin >> abs->personArray[ret].tele;
        cout << "请输入修改后的住址：" << endl;
        cin >> abs->personArray[ret].addr;
    }

    system("pause");
    system("cls");
}

void cleanPerson(Addressbooks* abs)
{
    assert(abs != NULL);
    if(abs == NULL)
    {
        cout << ("abs:%s",strerror(errno)) << endl;
        return;
    }
    abs->size = 0;
    cout << "通讯录已清空！！！" << endl;
    system("pause");
    system("cls");
}






























































