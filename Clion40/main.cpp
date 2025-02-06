//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
////  继承同名成员处理方式
////问题：当子类与父类出现同名的成员，如何通过子类对象，访问到子类或父类中同名的数据呢？
////1·访问子类同名成员直接访问即可
//class Base
//{
//public:
//    Base()
//    {
//        m_A = 100;
//    }
//
//    void func()
//    {
//        cout << "Base-func()调用" << endl;
//    }
//
//    void func(int a)
//    {
//        cout << "Base-func(int a)调用" << endl;
//    }
//
//    int m_A;
//
//};
//
//class Son :public Base
//{
//public:
//    Son()
//    {
//        m_A = 200;
//    }
//
//    void func()
//    {
//        cout << "Son-func()调用" << endl;
//    }
//
//    int m_A;
//
//};
//
////同名成员属性
//void test01()
//{
//    Son s;
//    cout << "Son中m_A = " << s.m_A << endl;
//    //如果通过子类对象象访问到父类中同名成员，需要加作用域
//    cout << "Base中m_A = " << s.Base::m_A << endl;
//
//}
//
////同名成员函数
//void test02()
//{
//    Son s;
//
//    s.func();//直接调用调用是子类中的同名成员
//
//    s.Base::func();
//    //如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数
//    //如果想访问到父类中被隐藏的同名成员函数，需要加作用域
//    s.Base::func(100);
//
//}
//
////2·访问父类同名成员需要加作用域
//
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

//  继承同名静态成员处理方式
//问题：继承中同名的静态成员在子类对象上如何进行访问？
//静态成员和非静态成员出现同名，处理方式一致
//访问子类同名成员直接访问即可
//·访问父类同名成员员需要加作用域

class Base
{
public:
    static void func()
    {
        cout << "Base下static void func()" << endl;
    }

    static void func(int a)
    {
        cout << "Base下static void func(int a)" << endl;
    }

    static int m_A;

};
int Base::m_A = 100;

class Son :public Base
{
public:
    static void func()
    {
        cout << "Son下static void func()" << endl;
    }

    static int m_A;

};
int Son::m_A = 200;

void test01()
{
    //通过对象访问
    cout << "通过对象访问：" << endl;
    Son s;
    cout << "Son中m_A = " << s.m_A << endl;
    cout << "Base中m_A = " << s.Base::m_A << endl;
    //通过类名访问
    cout << "通过类名访问：" << endl;
    cout << "Son中m_A = " << Son::m_A << endl;
    cout << "Base中m_A = " << Son::Base::m_A << endl;

}

void test02()
{
    //通过对象访问
    cout << "通过对象访问" << endl;
    Son s;
    s.func();
    s.Base::func();
    //通过类名访问
    cout << "通过类名访问" << endl;
    Son::func();
    Son::Base::func();

    //子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
    //如果想访问父类中被隐藏同名成员，需要加作用域
    Son::Base::func(100);

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}



























