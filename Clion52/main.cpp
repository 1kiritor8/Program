#include <iostream>
#include "windows.h"

using namespace std;

//模板的局限性
//局限性：
//模板的通用性并不是万能的

//对比两个数据是否相等的函数
class Person
{
public:

    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }

    string m_Name;
    int m_Age;
};

template<typename T>
bool myCompare(T& x,T& y)
{
    if(x == y)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//利用具体化Person的版本实现代码，具体化优先调用
template<> bool myCompare(Person& x,Person& y)
{
    if(x.m_Name == y.m_Name && x.m_Age == y.m_Age)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void test01()
{
    int a = 10;
    int b = 20;

    bool ret = myCompare(a,b);

    if(ret)
    {
        cout << "a和b相等" << endl;
    }
    else
    {
        cout << "a和b不相等" << endl;
    }
}

void test02()
{
    Person p1("Tom",10);
    Person p2("Tom",10);

    bool ret = myCompare(p1,p2);
    if(ret)
    {
        cout << "p1 == p2" << endl;
    }
    else
    {
        cout << "p1 != p2" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
