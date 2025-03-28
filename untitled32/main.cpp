#include <iostream>
#include "Windows.h"
#include "map"

using namespace std;

//3.9.3map大小和交换
//功能描述：
//统计map容器大小以及交换map容器
//函数原型：
//size();//返回容器中元素的数目
//empty();//判断容器是否为空
//swap(st);//交换两个集合容器
void printMap(map<int,int>& m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    //大小
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    if(m.empty())
    {
        cout << "map容器为空！！！" << endl;
    }
    else
    {
        cout << "map容器不为空" << endl;
        cout << "map的大小为：" << m.size() << endl;
    }

}

void test02()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int> m2;
    m2.insert(pair<int,int>(4,100));
    m2.insert(pair<int,int>(5,200));
    m2.insert(pair<int,int>(6,300));

    cout << "交换前：" << endl;
    printMap(m);
    printMap(m2);

    m.swap(m2);
    cout << "交换后：" << endl;
    printMap(m);
    printMap(m2);

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
