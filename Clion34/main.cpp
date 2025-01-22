#include "iostream"
#include "windows.h"

using namespace std;


//  运算符重载
//运算符重载概念：对已有的运算符重新进行定义，赋予其另一种功能，以适应不同的数据类型
//  加号运算符重载
//作用：实现两个自定义数据类型相加的运算
class Person
{
//public:
//
//    //1.成员函数重载
//    Person operator+(Person& p)
//    {
//        Person tmp;
//        tmp.m_A = this->m_A + p.m_A;
//        tmp.m_B = this->m_B + p.m_B;
//        return tmp;
//
//    }

public:

    int m_A;
    int m_B;

};

//2.全局函数重载
Person operator+(Person& p1,Person& p2)
{
    Person tmp;
    tmp.m_A = p1.m_A + p2.m_A;
    tmp.m_B = p1.m_B + p2.m_B;
    return tmp;

}

//函数重载的版本
Person operator+(Person& p,int x)
{
    Person tmp;
    tmp.m_A = p.m_A + x;
    tmp.m_B = p.m_B + x;
    return tmp;

}


void test01()
{
    Person p1;
    p1.m_A = 10;
    p1.m_B = 10;
    Person p2;
    p2.m_A = 10;
    p2.m_B = 10;

    //成员函数重载本质调用
//    Person p3 = p1.operator+(p2);

    //全局函数重载的本质
//    Person p3 = operator+(p1,p2);

    Person p3 = p1 + p2;
    //运算符重载也可以发生函数重载

    Person p4 = p1 + 100;


    cout << "p3.m_A =" << p3.m_A << endl;
    cout << "p3.m_B =" << p3.m_B << endl;


    cout << "p4.m_A =" << p4.m_A << endl;
    cout << "p4.m_B =" << p4.m_B << endl;
}






int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}












