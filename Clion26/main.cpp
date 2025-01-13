#include <iostream>
#include "windows.h"

using namespace std;

//  拷贝构造函数调用时机

class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int age)
    {
        cout << "Person的有参构造函数调用" << endl;
        m_Age = age;
    }

    Person(const Person& p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
    }

    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

    int m_Age;

};

//C++中拷贝构造函数调用时机通常有三种情况
//1·使用一个已经创建完毕的对象来初始化一个新对象
void test01()
{
    Person p1(20);
    Person p2(p1);

    cout << "p2的年龄为：" << p2.m_Age << endl;

}

//2·值传递的方式给函数参数传值
void doWork(Person p)
{

}

void test02()
{
    Person p;
    doWork(p);

}

////3·以值方式返回局部对象      Clion使用地址进行传递，VS也使用地址传递
//Person doWork2()
//{
//    Person p1;
//    cout << (int*)&p1 << endl;
//    return p1;
//}
//
//void test03()
//{
//    Person p = doWork2();
//    cout << (int*)&p << endl;
//
//}     //error 不使用拷贝函数进行传递

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();
//    test03();     //error未使用拷贝函数

    return 0;
}
