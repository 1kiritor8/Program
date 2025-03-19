#include <iostream>
#include "Windows.h"
#include "set"

using namespace std;

//set大小和交换
//功能描述：
//统计set容器大小以及交换set容器
//函数原型：
//size();//返回容器中元素的数目
//empty();//判断容器是否为空
//swap(st);//交换两个集合容器
void printSet(const set<int>& S)
{
    for(set<int>::const_iterator it = S.begin();it != S.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    printSet(s1);

    //判断是否为空
    if(s1.empty())
    {
       cout << "s1为空！" << endl;
    }
    else
    {
        cout << "s1不为空" << endl;
        cout << "s1中有" <<s1.size() << "个元素" << endl;
    }

}

void test02()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);
    printSet(s1);

    set<int> s2;
    s2.insert(100);
    s2.insert(300);
    s2.insert(200);
    s2.insert(400);
    cout << "交换前：" << endl;
    printSet(s1);
    printSet(s2);

    s2.swap(s1);
    cout << "交换后：" << endl;
    printSet(s1);
    printSet(s2);

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();
    return 0;
}
