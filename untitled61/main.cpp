#include <iostream>
#include "Windows.h"
#include "vector"
#include "numeric"
#include "algorithm"

using namespace std;

//5.6常用集合算法
//学习目标：
//掌握常用的集合算法
//算法简介：
//set_intersection//求两个容器的交集
//set_union//求两个容器的并集
//set_difference//求两个容器的差集
//5.6.1set_intersection
//功能描述：
//·求两个容器的交集
//函数原型：
//I
//set_intersection(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//  //求两个集合的交集
//  //注意：两个集合必须是有序序列
//  //beg1容器1开始迭代器
//  //end1容器1结束选代器
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
    //目标容器需要提前开辟空间
    vTarget.resize(min(v1.size(),v2.size()));

    //获取交集
    vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd, myPrint);
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
