//
// Created by dixhuitieme on 2025/2/15.
//

#ifndef CLION56_PERSON_HPP
#define CLION56_PERSON_HPP

#include "iostream"

using namespace std;

template<class T1,class T2>
class Person
{
public:

    Person(T1 name,T2 age);

    void showPerson();

    T1 m_Name;
    T2 m_Age;
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    m_Name = name;
    m_Age = age;
}

template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
    cout << "name= " << m_Name << " age= " << m_Age << endl;
}

#endif //CLION56_PERSON_HPP
