#include <iostream>
#include "windows.h"

using namespace std;

// 函数重载
//满足条件
//1.同一作用域下
//2.同一函数名
//3.函数参数类型不同，或者个数不同，或者顺序不同

//void func()
//{
//    cout << "func的调用" << endl;
//}
//
//void func(int a)
//{
//    cout << "func(int a)的调用" << endl;
//}
//
//void func(double a)
//{
//    cout << "func(double a)的调用" << endl;
//}
//
//void func(int a,double b)
//{
//    cout << "func(int a,double b)的调用" << endl;
//}
//
//void func(double a,int b)
//{
//    cout << "func(double a,int b)的调用" << endl;
//}

//int func(double a,int b)
//{
//    cout << "func(double a,int b)的调用" << endl;
//}error

//函数重载的注意事项
//1.引用作为重载的条件
void func(int& a)
{
    cout << "func(int& a)的调用" << endl;
}

void func(const int& a)
{
    cout << "func(const int& a)的调用" << endl;
}

//2.函数重载碰到默认参数
void func2(int a,int b = 10)
{
    cout << "func2(int a,int b = 10)的调用" << endl;
}

void func2(int a)
{
    cout << "func2(int a)的调用" << endl;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //func();
    //func(10);
    //func(3.14);
    //func(10,3.14);
    //func(3.14,10);

    //注意事项：
    //函数的返回值不可以作为函数重载的条件

    //int a = 10;
    //func(a);
    //func(10);

    //func2(10);//当函数重载碰到默认参数的时候，出现二义性，报错，尽量避免这种情况
    func2(10,20);

    return 0;
}
