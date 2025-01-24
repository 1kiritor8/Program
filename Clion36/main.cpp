//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
////  赋值运算符重载
////c++编译器至少给一个类添加4个函数
////1.默认构造函数（无参，函数体为空）
////2.默认析构函数（无参，函数体为空）
////3.默认拷贝构造函数，对属性进行值拷贝
////4.赋值运算符operator=，对属性进行值拷贝
////如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题
//class Person
//{
//public:
//
//    Person(int age)
//    {
//        m_Age = new int(age);
//
//    }
//
//    ~Person()
//    {
//        if(m_Age != NULL)
//        {
//            delete m_Age;
//            m_Age = nullptr;
//
//        }
//
//    }
//
//    Person& operator=(Person& p)
//    {
//        //编译器提供的浅拷贝
////        this->m_Age = p.m_Age;
//
//        //应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝
//        if(m_Age != NULL)
//        {
//            delete m_Age;
//            m_Age = nullptr;
//
//        }
//
//        //深拷贝
//        m_Age = new int(*p.m_Age);
//
//        return *this;
//    }
//
//    int* m_Age;
//
//};
//
//void test01()
//{
//    Person p1(18);
//
//    Person p2(20);
//
//    Person p3(30);
//
//    p3 = p2 = p1;//赋值操作
//
//    cout << "p1的年龄为：" << *p1.m_Age << endl;
//
//    cout << "p2的年龄为：" << *p2.m_Age << endl;
//
//    cout << "p3的年龄为：" << *p3.m_Age << endl;
//
//}
//
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}


#include "iostream"
#include "windows.h"
#include "string"

using namespace std;

//  关系运算符重载
//作用：重载关系运算符，可以让两个自定义类型对象进行对比操作
class Person
{

public:

    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;

    }

    bool operator==(Person& p)
    {
        if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        return false;
    }

    bool operator!=(Person& p)
    {
        if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return false;
        }
        return true;
    }

    string m_Name;
    int m_Age;

};

void test01()
{
    Person p1("Tom",18);

    Person p2("Tom",18);

    if(p1 == p2)
    {
        cout << "p1和p2是相等的！！" << endl;
    }
    else
    {
        cout << "p1和p2不相等" << endl;
    }

    if(p1 != p2)
    {
        cout << "p1和p2不相等" << endl;

    }
    else
    {
        cout << "p1和p2是相等的！！" << endl;

    }
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}












