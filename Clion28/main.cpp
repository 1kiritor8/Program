//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
////  初始化列表
////作用：
////C++提供了初始化列表语法，用来初始化属性
////语法：构造函数（）：属性1（值1），属性2（值2）..{}
//class Person
//{
//public:
//    //传统初始化操作
////    Person(int a,int b,int c)
////    {
////        m_A = a;
////        m_B = b;
////        m_C = c;
////
////    }
//
//    //初始化列表初始化属性
//    Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
//    {
//
//    }
//    int m_A;
//    int m_B;
//    int m_C;
//
//};
//
//void test01()
//{
////    Person p(10,20,30);
//    Person p(30,20,10);
//
//    cout << "m_A=" << p.m_A << " m_B=" << p.m_B << " m_C=" << p.m_C << endl;
//
//}
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}


#include "iostream"
#include "windows.h"
#include <string>

using namespace std;

//  类对象作为类成员
//C++类中的成员可以是另一个类的对象，我们称该成员为    对象成员

class Phone
{
public:

    Phone(string pName)
    {
        cout << "Phone的构造函数调用" << endl;
        m_PName = pName;

    }

    ~Phone()
    {
        cout << "Phone的析构函数调用" << endl;

    }

    string m_PName;

};

class Person
{
public:
    //Phone m_Phone = pName;    隐式转换法
    Person(string name,string pName):m_Name(name),m_Phone(pName)
    {
        cout << "Person的构造函数调用" << endl;

    }

    ~Person()
    {
        cout << "Person的析构函数调用" << endl;

    }

    string m_Name;
    Phone m_Phone;

};

//当其他类对象作为本类成员，构造时候先构造类对象，再构造自身，析构的顺序与构造相反
void test01()
{
    Person p("张三","苹果MAX");

    cout << p.m_Name << "拿着：" << p.m_Phone.m_PName <<endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}





















