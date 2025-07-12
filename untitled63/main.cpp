#include <iostream>
#include "Windows.h"
#include "vector"
#include "numeric"
#include "algorithm"

using namespace std;

//5.6.3set_difference
//功能描述：
//·求两个集合的差集
//T
//函数原型：
//set_difference(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//  //求两个集合的差集
//  //注意：两个集合必须是有序序列
//  //beg1容器1开始迭代器
//  //end1容器1结束迭代器
//  //beg2容器2开始迭代器
//  //end2容器2结束迭代器
//  //dest目标容器开始迭代器
class myPrint
{
public:

    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0;i <10;i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }

    vector<int> vTarget;
    vTarget.resize(max(v1.size(),v2.size()));

    cout << "v1和v2的差集为：" << endl;
    vector<int>::iterator itEnd = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint());
    cout << endl;

    cout << "v2和v1的差集为：" << endl;
    itEnd = set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint());
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
