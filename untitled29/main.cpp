#include <iostream>
#include "Windows.h"
#include "set"

using namespace std;

//set容器排序
//学习目标：
//set容器默认排序规则为从小到大，掌握如何改变排序规则
//主要技术点：
//利用仿函数，可以改变排序规则

//set存放内置数据类型
class myCompare
{
public:

    bool operator()(int v1,int v2) const
    {
        return v1 > v2;
    }
};

void test01()
{
    set<int> s1;
    s1.insert(10);
    s1.insert(40);
    s1.insert(20);
    s1.insert(50);
    s1.insert(30);

    for(set<int>::iterator it = s1.begin();it != s1.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //指定排序规则为从大到小
    set<int,myCompare> s2;
    s2.insert(10);
    s2.insert(40);
    s2.insert(20);
    s2.insert(50);
    s2.insert(30);

    for(set<int,myCompare>::iterator it = s2.begin();it != s2.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
