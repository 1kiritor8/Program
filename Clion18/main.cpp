#include <iostream>
#include "windows.h"

using namespace std;

int& test1()
{
    int a = 10;
    return a;
}

int& test2()
{
    static int a = 10;
    return a;
}

void showValue(const int& ref)
{
    cout << ref << endl;
}

//函数的默认参数
int func(int x,int y = 20,int z =30)
{
    return x + y + z;
}

//占位参数
void func2(int x,int)
{
    cout << "this is a func" << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    int& ref = test1();
//    cout << ref << endl;

//    int& ref2 = test2();
//    cout << ref2 << endl;
//    cout << ref2 << endl;
//
//    test2() = 1000;
//    cout << ref2 << endl;
//    cout << ref2 << endl;

//    int a = 10;
//    showValue(a);
//    cout << a << endl;

//    cout << func(1,2,3) << endl;
//    cout << func(10) << endl;

    func2(10,20);

    return 0;
}
