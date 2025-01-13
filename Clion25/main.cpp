//#include <iostream>
//#include "windows.h"
//
//using namespace std;
//
////对象的初始化和清理
////构造函数语法：类名（）{}     构造函数进行初始化操作
////1.构造函数，没有返回值也不写void
////2.函数名称与类名相同
////3.构造函数可以有参数，因此可以发生重载
////4.程序在调用对象时候会自动调用构造，无须手动调用，而且只会调用一次
//class Person
//{
//public:
//    //1.构造函数
//    //没有返回值,也不写void
//    //函数名称与类名相同
//    //构造函数可以有参数，因此可以发生重载
//    //创建对象的时候，构造函数会自动调用，而且只调用一次
//    Person()
//    {
//        cout << "Person构造函数的调用" << endl;
//    }
//    //2.析构函数语法：~类名（）{}    析构函数进行清理操作
//    //1.析钩函数，没有返回值也不写void
//    //2.函数名称与类名相同，在名称前加上符号～
//    //3.析构函数不可以有参数，因此不可以发生重载
//    //4.程序在对象销毁前会自动调用析构，无须手动调用，而且只会调用一次
//
//    ~Person()
//    {
//        cout << "Person析构函数的调用" << endl;
//    }
//
//};
//
////构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
//void test01()
//{
//    Person p;
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//    //Person p;
//
//    system("pause");
//    return 0;
//}


#include "iostream"
#include "windows.h"

using namespace std;

//构造函数的分类及调用
//  两种分类方式：
//1.按参数分为：有参构造和无参构造
//2.按类型分为：普通构造和拷贝构造
class Person
{
public:
    Person()
    {
        cout << "Person的无参构造函数调用" << endl;
    }
    Person(int a)
    {
        age = a;
        cout << "Person的有参构造函数调用" << endl;
    }
    //拷贝构造函数
    Person(const Person &p)
    {
        //将传入的人身上的所有属性，拷贝到我身上
        cout << "Person的拷贝构造函数调用" << endl;
        age = p.age;
    }
    ~Person()
    {
        cout << "Person的析构函数调用" << endl;
    }

    int age;
};

//  三种调用方式：
void test01()
{
    //1.括号法
    //Person p1;
    //Person p2(10);
    //Person p3(p2);


    //注意事项
    //调用默认构造函数时候，不要加()
    //因为下面这行代码，编译器会认为是一个函数的声明,不会认为在创建对象
    //Person p1();

    //cout << "p2的年龄：" << p2.age << endl;
    //cout << "p3的年龄：" << p3.age << endl;


    //2.显示法
//    Person p1;
//    Person p2 = Person(10);
//    Person p3 = Person(p2);
    //注意事项1：
//    Person(10);    //匿名对象    特点：当前行执行结束后，系统会立即回收掉匿名对象
//    cout << "aaaaaa" << endl;

    //注意事项2：
    //不要利用拷贝构造函数，初始化对象    编译器会认为Person（p3）=== Person p3;    对象声明
    //Person(p3);


    //3.隐式转换法
    Person p4 = 10;    //相当于写了Person p4 = Person(10);    有参构造
    Person p5 = p4;    //拷贝构造

}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();


    system("pause");
    return 0;
}



















