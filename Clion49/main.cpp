#include <iostream>
#include "windows.h"

using namespace std;

//模板
//模板的概念
//模板就是建立通用的模具，大大提高复用性
//  函数模板
//C++另一种编程思想称为泛型编程呈，主要利用的技术就是模板
//C++提供两种模板机制：函数模板和类模板
//      函数模板语法
//函数模板作用：
//建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个虚拟的类型来代表。
//语法：
//template<typename T>
//函数声明或定义
//解释：
//template---声明创建模板
//typename---表面其后面的符号是一种数据类型，可以用class代替
//通用的数据类型，名称可以替换，通常为大写字母


//交换两个整形的函数
void SwapInt(int& x,int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

//交换两个浮点型的函数
void SwapDouble(double& x,double& y)
{
    double temp = x;
    x = y;
    y = temp;
}

//函数模板
template<typename T>//声明一个模板，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T& x,T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

void test01()
{
    int a = 10;
    int b = 20;

//    SwapInt(a,b);
    //利用函数模板来交换
    //两种方式使用函数模板
    //1.自动类型推导
//    mySwap(a,b);
    //2.显示指定类型
    mySwap<int>(a,b);
    cout << "a= " << a << " b= " << b << endl;

//    double c = 1.1;
//    double d = 2.2;
//    SwapDouble(c,d);
//    cout << "c= " << c << " d= " << d << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
