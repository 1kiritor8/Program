//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
////  构造函数调用规则
////默认情况下，C++编译器至少给一个类添加3个函数
////1.默认构造函数（无参，函数体为空）
////2.默认析构函数（无参，函数体为空）
////3.默认拷贝构造函数，对属性进行值拷贝
//class Person {
//public:
////    Person() {
////        cout << "Person的默认构造函数调用" << endl;
////    }
//
////    Person(int age)
////    {
////        cout << "Person的有参构造函数调用" << endl;
////        m_Age = age;
////    }
//
//    Person(const Person &p)
//    {
//        cout << "Person的拷贝构造函数调用" << endl;
//        m_Age = p.m_Age;
//    }
//
//    ~Person()
//    {
//        cout << "Person的析构函数调用" << endl;
//    }
//
//
//    int m_Age;
//};
//
////void test01()
////{
////    Person p1;
////    p1.m_Age = 18;
////    Person p2(p1);
////
////
////    cout << "p2的年龄为：" << p2.m_Age << endl;
////
////}
//
//
////  构造函数调用规则如下：
////1·如果用户定义有参构造函数，C++不在提供默认无参构造，但是会提供默认拷贝构造
////void test02()
////{
////    Person p(28);
////
////    Person p2(p);
////    cout << "p2的年龄为：" << p2.m_Age << endl;
////
////}
//
//void test03()
//{
//    Person p;
//
//}
//
////2·如果用户定义拷贝构造函数，C++不会再提供其他构造函数
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    test01();
////    test02();
//    test03();
//
//    return 0;
//}


#include "iostream"
#include "windows.h"

using namespace std;

//  深拷贝与浅拷贝
//深浅拷贝是面试经典问题，也是常见的一个坑

//浅拷贝：简单的赋值拷贝操作
class Person
{
public:
    Person()
    {
        cout << "Person的默认构造函数调用" << endl;
    }

    Person(int age,int height)
    {
        m_Age = age;
        m_Height = new int(height);
        cout << "Person的有参构造函数调用" << endl;
    }

    Person(const Person& p)
    {
        cout << "Person的拷贝构造函数调用" << endl;
        m_Age = p.m_Age;
        //m_Height = p.m_Height;    编译器默认实现使用的代码


//深拷贝：在堆区重新申请空间，进行拷贝操作
        m_Height = new int(*p.m_Height);

    }

    ~Person()
    {
        //析构代码，将堆区开辟数据做释放操作
        if(m_Height != NULL)
        {
            delete m_Height;
            m_Height = NULL;
        }
        cout << "Person的析构函数调用" << endl;

    }

    int m_Age;
    int* m_Height;

};

void test01()
{
    Person p1(18,160);
    cout << "p1的年龄为：" << p1.m_Age << "  身高为：" << *p1.m_Height << endl;

    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << "  身高为：" << *p2.m_Height << endl;

}

//总结：如果属性有在堆区开辟的，一定要自己提供拷贝构造函数，防止浅拷贝带来的问题

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}












