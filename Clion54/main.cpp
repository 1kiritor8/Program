#include <iostream>
#include "windows.h"

using namespace std;

//类模板中成员函数创建时机
//类模板中成员函数和普通类中成员函数创建时机是有区别的：
//普通类中的成员函数一开始就可以创建
//类模板中的成员函数在调用时才创建
//class Person1
//{
//public:
//
//    void showPerson1()
//    {
//        cout << "Person1 show" << endl;
//    }
//};
//
//class Person2
//{
//public:
//
//    void showPerson2()
//    {
//        cout << "Person2 show" << endl;
//    }
//};
//
//template<class T>
//class MyClass
//{
//public:
//
//    T obj;
//
//    void func1()
//    {
//        obj.showPerson1();
//    }
//
//    void func2()
//    {
//        obj.showPerson2();
//    }
//};
//
//void test01()
//{
//    MyClass<Person1> m;
//    m.func1();
////    m.func2();
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}

//类模板对象做函数参数
//学习目标：
//类模板实例化出的对象，向函数传参的方式
template<class T1,class T2>
class Person
{
public:

    Person(T1 name,T2 age)
    {
        m_Name = name;
        m_Age = age;
    }

    void showPerson()
    {
        cout << "name = " << m_Name << " age = " << m_Age << endl;
    }

    T1 m_Name;
    T2 m_Age;
};

//一共有三种传入方式：
//1.指定传入的类型--直接显示对象的数据类型
void PrintPerson1(Person<string,int>& p)
{
    p.showPerson();
}

void test01()
{
    Person<string,int> p("孙悟空",100);
    PrintPerson1(p);
}
//2.参数模板化---将对象中的参数变为模板进行传递
template<class T1,class T2>
void PrintPerson2(Person<T1,T2>& p)
{
    p.showPerson();
    cout << "T1 的类型为：" << typeid(T1).name() << endl;
    cout << "T2 的类型为：" << typeid(T2).name() << endl;
}

void test02()
{
    Person<string,int> p("猪八戒",90);
    PrintPerson2(p);
}
//3.整个类模板化--将这个对象类型模板化进行传递
template<class T>
void PrintPerson3(T& p)
{
    p.showPerson();
    cout << "T 的数据类型为：" << typeid(T).name() << endl;
}
void test03()
{
    Person<string,int> p("唐僧",30);
    PrintPerson3(p);
}

//总结：
//通过类模板创建的对象，可以有三种方式南函数中进行传参
//使用比较广泛是第一种：指定传入的类型

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
//    test02();
    test03();

    return 0;
}










