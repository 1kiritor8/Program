#include <iostream>
#include "windows.h"

using namespace std;

//普通函数与函数模板的区别
//  普通函数与函数模板区别：
//1.普通函数调用时可以发生自动类型转换（隐式类型转换）
//2·函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//3·如果利用显示指定类型的方式，可以发生隐式类型转换

//普通函数
//int myAdd01(int x,int y)
//{
//    return x + y;
//}
//
////函数模板
//template<typename T>
//T myAdd02(T x,T y)
//{
//    return x + y;
//}
//
//void test01()
//{
//    int a = 10;
//    int b = 20;
//    char c = 'c';
//    cout << myAdd01(a,c) << endl;
//
//    //自动类型推导，不会发生隐式类型转换
//    cout << myAdd02(a,b) << endl;
////    cout << myAdd02(a,c) << endl;//error
//
//    //显示指定类型，会发生隐式类型转换
//    cout << myAdd02<int>(a,b) << endl;
//    cout << myAdd02<int>(a,c) << endl;
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}

//普通函数与函数模板的调用规则
//调用规则如下：
//1.如果函数模板和普通函数都可以实现，优先调用普通函数
//2.可以通过空模板参数列表来强制调用函数模板
//3.函数模板也可以发生重载
//4.如果函数模板可以产生更好的匹配，优先调用函数模板
void myPrint(int a, int b)
{
    cout << "调用普通函数" << endl;
}

template<typename T>
void myPrint(T a,T b)
{
    cout << "调用函数模板" << endl;
}

template<typename T>
void myPrint(T a,T b,T c)
{
    cout << "调用重载的函数模板" << endl;
}

void test01()
{
    int a = 10;
    int b = 20;

//    myPrint(a,b);

    //通过空模板参数列表，强制调用函数模板
//    myPrint<>(a,b);

//    myPrint(a,b,100);

    //如果函数模板可以产生更好的匹配，优先调用函数模板
    char c1 = 'a';
    char c2 = 'b';

    myPrint(c1,c2);

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}











