//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
////  多继承语法
////C++允许一个类继承多个类
////语法：class子类：继承方式父类1，继承方式父类2...
////多继承可能会引发父类中有同名成员出现，需要加作用域区分
////C++实际开发中不建议用多继承
//class Base1
//{
//public:
//    Base1()
//    {
//        m_A = 100;
//    }
//
//    int m_A;
//
//};
//
//class Base2
//{
//public:
//    Base2()
//    {
//        m_A = 200;
//    }
//
//    int m_A;
//
//};
//
////子类需要继承Base1和Base2
//class Son :public Base1,public Base2
//{
//public:
//    Son()
//    {
//        m_C = 300;
//        m_D = 400;
//    }
//
//    int m_C;
//    int m_D;
//
//};
//
//void test01()
//{
//    Son s;
//    cout << "sizeof(Son)= " << sizeof(Son) << endl;
//
//    cout << "Base1::m_A= " << s.Base1::m_A << endl;
//    cout << "Base2::m_A= " << s.Base2::m_A << endl;
//
//
//}
//
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//
//    return 0;
//}


#include "iostream"
#include "windows.h"

using namespace std;

//  菱形继承
//菱形继承概念：
//两个派生类继承同一个基类
//又有某个类同时继承者两个派生类
//这种继承被称为菱形继承，或者钻石继承
class Animal
{
public:

    int m_Age;

};

//利用虚继承解决菱形继承的问题SY
//继承之前加上关键字virtual变为虚继承
//Animal类称为虚基类
class Sheep :virtual public Animal{};

class Tuo :virtual public Animal{};

class SheepTuo :public Sheep,public Tuo{};

void test01()
{
    SheepTuo st;
    st.Sheep::m_Age = 18;
    st.Tuo::m_Age = 28;

    cout << "st.Sheep::m_Age = " << st.Sheep::m_Age << endl;
    cout << "sr.Tuo::m_Age = " << st.Tuo::m_Age << endl;
    cout << "st.m_Age = " << st.m_Age << endl;

    //这份数据我们知道只有有一份就可以，菱形继承导致数据有两份，资源浪费

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();


    return 0;
}




