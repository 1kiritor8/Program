#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//5.1.2transform
//功能描述：
//搬运容器到另一个容器中
//函数原型：
//transform(iterator beg1, iterator end1, iterator beg2,_func);
//  //beg1源容器开始迭代器
//  //end1源容器结束迭代器
//  //beg2目标容器开始迭代器
//  //_func函数或者函数对象
class Transform
{
public:

    int operator()(int v)
    {
        return v + 100;
    }
};

class MyPrint
{
public:

    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int> vTarget;
    vTarget.resize(v.size());//目标容器需要提前开辟空间
    transform(v.begin(),v.end(),vTarget.begin(),Transform());

    for_each(vTarget.begin(),vTarget.end(),MyPrint());
    cout << endl;
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
