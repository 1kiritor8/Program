//
// Created by 27292 on 2024/12/28.
//

#ifndef CONTACTS_MANAGEMENT_SYSTEM_CONTACTS_MANAGEMENT_SYSTEM_H
#define CONTACTS_MANAGEMENT_SYSTEM_CONTACTS_MANAGEMENT_SYSTEM_H

#define PersonNum 1000

#include <iostream>
#include "windows.h"
#include "cassert"
#include "error.h"

using namespace std;

struct Person
{
    string name;
    string sex;
    int age;
    string tele;
    string addr;
};

struct Addressbooks
{
    Person personArray[PersonNum];
    int size;
};

void showMenu();

void addPerson(Addressbooks* abs);

void showPerson(Addressbooks* abs);

int isExist(Addressbooks* abs, string name);

void deletePerson(Addressbooks* abs);

void findPerson(Addressbooks* abs);

void modifyPerson(Addressbooks* abs);

void cleanPerson(Addressbooks* abs);


















































































#endif //CONTACTS_MANAGEMENT_SYSTEM_CONTACTS_MANAGEMENT_SYSTEM_H
