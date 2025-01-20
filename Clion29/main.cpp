//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
////  静态成员
////静态成员就是在成员变量和成员函数前加上关键字static，称为静态成员
////静态成员分为：
////1·静态成员变量I
////所有对象共享同一份数据
////在编译阶段分配内存
////类内声明，类外初始化
//class Person
//{
//public:
//
//    static int m_A;
//
//    //静态成员变量也是有访问权限的
//private:
//    static int m_B;
//
//};
//
//int Person::m_A = 100;
//int Person::m_B = 200;
//
//void test01()
//{
//    Person p;
//    cout << p.m_A << endl;
//
//    Person p2;
//    p2.m_A = 200;
//
//    cout << p.m_A << endl;
//
//}
//
//void test02()
//{
//    //静态成员变量不属于某个对象上，所有对象都共享同一份数据
//    //因此静态成员变量有两种访问方式
//    //1.通过对象进行访问
////    Person p;
////    cout << p.m_A << endl;
//
//    //2.通过类名进行访问
//    cout << Person::m_A << endl;
//
////    cout << Person::m_B << endl;  类外访问不到私有静态成员变量
//
//}
//
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    test01();
//    test02();
//
//    return 0;
//}


#include "iostream"
#include "windows.h"

using namespace std;

//2·静态成员函数
//所有对象共享同一个函数
//静态成员函数只能访问静态成员变量
class Person
{
public:

    //静态成员函数
    static void func()
    {
        m_A = 100;    //静态成员函数可以访问静态成员变量
//        m_B = 200;    //静态成员函数不可以访问非静态成员变量,无法区分到底是哪个对象的m_B属性
        cout << "static void func的调用" << endl;

    }

    static int m_A;
    int m_B;

    //静态成员函数也是有访问权限的
private:
    static void func2()
    {
        cout << "static void func2的调用" << endl;

    }

};

int Person::m_A = 0;

void test01()
{
    //1、通过对象访问
//    Person p;
//    p.func();

    //2、通过类名访问
    Person::func();

//    Person::func2();  类外访问不到私有静态成员函数

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();


    return 0;
}









