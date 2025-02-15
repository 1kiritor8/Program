#include <iostream>
#include "windows.h"

using namespace std;

//类模板与继承
//当类模板碰到继承时，需要注意一下几点：
//·当子类继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//·如果不指定，编译器无法给子类分配内存
//·如果想灵活指定出父类中T的类型，子类也需变为类模板
//template<class T>
//class Base
//{
//public:
//
//    T m;
//};
//
////class Son :public Base//错误，必须要知道父类中的T类型，才能继承给子类
//class Son :public Base<int>
//{
//public:
//
//
//};
//
////如果想灵活指定父类中T类型，子类也需要变类模板
//template<class T1,class T2>
//class Son2 :public Base<T2>
//{
//public:
//
//    Son2()
//    {
//        cout << "T1 的类型为：" << typeid(T1).name() << endl;
//        cout << "T2 的类型为：" << typeid(T2).name() << endl;
//    }
//
//    T1 obj;
//
//};
//
//void test01()
//{
//    Son s1;
//}
//
//void test02()
//{
//    Son2<int,char> s2;
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    test01();
//    test02();
//
//    return 0;
//}


//1.3.6类模板成员函数类外实现
//学习目标：能够掌握类模板中的成员函数类外实现
template<class T1,class T2>
class Person
{
public:

    Person(T1 name,T2 age);
//    {
//        m_Name = name;
//        m_Age = age;
//    }

    void showPerson();
//    {
//        cout << "name = " << m_Name << " age = " << m_Age << endl;
//    }

    T1 m_Name;
    T2 m_Age;
};

//构造函数的类外实现
template<class T1,class T2>
Person<T1,T2>::Person(T1 name,T2 age)
{
    m_Name = name;
    m_Age = age;
}

//成员函数的类外实现
template<class T1,class T2>
void Person<T1,T2>::showPerson()
{
    cout << "name = " << m_Name << " age = " << m_Age << endl;
}

void test01()
{
    Person<string,int> p("Tom",20);
    p.showPerson();
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
















