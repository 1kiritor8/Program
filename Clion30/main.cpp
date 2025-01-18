//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
////  C++对象模型和this指针
////      成员变量和成员函数分开存储
////在C++中，类内的成员变量和成员函数分开存储
////只有非静态成员变量才属于类的对象上
//class Person
//{
//public:
//
//    int m_A;        //属于类的对象上
//
//    static int m_B; //不属于类的对象上
//
//    void func(){}   //不属于类的对象上
//
//    static void func2(){}   //不属于类的对象上
//
//};
//
//int Person::m_B = 0;
//
//void test01()
//{
//    Person p;
//    //空对象占用内存空间为：1
//    //C++编译器会给每一个空对象也分配一个字节的空间，是为了区分空对象占内存的位置
//    //每一个空对象也应该有一个独一无二的内存地址
//    cout << "sizeof p = " << sizeof(p) << endl;
//
//}
//
//void test02()
//{
//    Person p;
//    cout << "sizeof p = " << sizeof(p) << endl;
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


#include "iostream"
#include "windows.h"

using namespace std;


//  this指针概念
//我们知道在C++中成员变量和成员函数是分开存储的
//每一个非静态成员函数只会诞生一份函数实例，也就是说多个同类型的对象会共用一块代码
//那么问题是：这一块代码是如何区分那个对象调用自己的呢？
//C++通过提供特殊的对象指针，this指针，解决上述问题。this指针指向被调用的成员函数所属的对象
//this指针是隐含每一个非静态成员函数内的一种指针
//this指针不需要定义，直接使用即可


class Person
{
public:
    Person(int age)
    {
        //this指针指向的是被调用的成员函数所属的对象
        this->age = age;
    }

    Person& PersonAddAge(Person& p)
    {
        this->age += p.age;

        //this指向p2的指针，而*this指向的就是p2这个对象本体
        return *this;
    }


    int age;
};


//this指针的用途：
//1·当形参和成员变是同名时，可用this指针来区分     解决名称冲突
void test01()
{
    Person p1(18);
    cout << "p1的年龄为：" << p1.age << endl;

}

//2·在类的非静态成员函数中返回对象本身，可使用return*this    返回对象本身用*this
void test02()
{
    Person p1(10);

    Person p2(10);
    //链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);

    cout << "p2的年龄为：" << p2.age << endl;

}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}








































