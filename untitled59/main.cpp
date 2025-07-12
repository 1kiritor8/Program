#include <iostream>
#include "Windows.h"
#include "vector"
#include "numeric"

using namespace std;

//5.5常用算术生成算法
//学习目标：
//掌握常用的算术生成算法
//注意：
//）算术生成算法属于小型算法，使用时包含的头文件为#include<numeric>
//算法简介：
//accumulate//计算容器元素累计总和
//fill//向容器中添加元素
//5.5.1 accumulate
//功能描述：
//计算区间内容器元素累计总和
//函数原型：
//accumulate(iterator beg, iterator end, value);
//  //计算容器元素累计总和
//  //beg开始迭代器
//  //end结束迭代器
//  //value起始值
void test01()
{
    vector<int> v;
    for(int i = 0;i <= 100;i++)
    {
        v.push_back(i);
    }

    //参数3是起始累加值
    int total = accumulate(v.begin(),v.end(),0);
    cout << "1到100的和为：" << total << endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
