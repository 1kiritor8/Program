#include <iostream>
#include "Windows.h"
#include "map"

using namespace std;

//map容器排序
//学习目标：
//map容器默认排序规则为按照key值进行从小到大排序，掌握如何改变排序规则
//主要技术点：
//利用仿函数，可以改变排序规则
class MyComepare
{
public:

    bool operator()(int v1,int v2) const
    {
        //降序
        return v1 > v2;
    }
};

void test01()
{
    map<int,int,MyComepare> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(4,40));
    m.insert(make_pair(5,50));

    for(map<int,int,MyComepare>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
