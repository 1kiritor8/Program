#include <iostream>
#include "windows.h"

using namespace std;

//类模板与友元
//学习目标：
//·掌握类模板配合友元函数的类内和类外实现
//全局函数类内实现-直接在类内声明友元即可
//全局函数类外实现·需要提前让编译器知道全局函数的存在
template<class T1,class T2>
class Person;

template<class T1,class T2>
void printPerson2(Person<T1,T2> p)
{
    cout << "name= " << p.m_Name << " age= " << p.m_Age << endl;
}

template<class T1,class T2>
class Person
{
    friend void printPerson(Person<T1,T2> p)
    {
        cout << "name= " << p.m_Name << " age= " << p.m_Age << endl;
    }

    friend void printPerson2<>(Person<T1,T2> p);

public:

    Person(T1 name,T2 age)
    {
        m_Name = name;
        m_Age = age;
    }
private:
    T1 m_Name;
    T2 m_Age;
};

void test01()
{
    Person<string,int> p("Tom",20);

    printPerson(p);
}

void test02()
{
    Person<string,int> p("Jerry",20);

    printPerson2(p);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
