#include <iostream>
#include "windows.h"

using namespace std;

//类模板
//类模板语法
//类模板作用：
//建立一个通用类，类中的成员数据类型可以不具体制定，用一个虚拟的类型来代表。
//template<class NameType,class AgeType>
//class Person
//{
//public:
//
//    Person(NameType name,AgeType age)
//    {
//        m_Name = name;
//        m_Age = age;
//    }
//
//    void showPerson()
//    {
//        cout << "name:" << m_Name << endl;
//        cout << "age:" << m_Age << endl;
//    }
//
//    NameType m_Name;
//    AgeType m_Age;
//};
//
//void test01()
//{
//    Person<string,int>p1("孙悟空",999);
//    p1.showPerson();
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}

//类模板与函数模板区别
//类模板与函数模板区别主要有两点：
template<class NameType,class AgeType = int>
class Person
{
public:

    Person(NameType name,AgeType age)
    {
        m_Name = name;
        m_Age = age;
    }

    void showPerson()
    {
        cout << "name:" << m_Name << " age:" << m_Age << endl;
    }

    NameType m_Name;
    AgeType m_Age;
};

void test01()
{
    Person p("孙悟空",1000);
    p.showPerson();
}

//类模板在模板参数列表中可以有默认参数
void test02()
{
    Person<string> p("猪八戒",999);
    p.showPerson();
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}

















