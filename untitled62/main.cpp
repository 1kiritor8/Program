#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

// 5.6.2 set_union
//功能描述：
//·求两个集合的并集
//函数原型：
//set_union(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//  //求两个集合的并集
//  //注意：两个集合必须是有序序列
//  //beg1容器1开始迭代器
//  //end1容器1结束迭代器
//  //beg2容器2开始迭代器
//  //end2容器2结束迭代器
//  //dest目标容器开始迭代器
void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v1;
    vector<int> v2;

    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }

    vector<int> vTarget;
    //目标容器提前开辟空间
    vTarget.resize(v1.size() + v2.size());
    vector<int>::iterator itEnd = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
