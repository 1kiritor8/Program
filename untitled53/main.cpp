#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//5.3.3 merge
//功能描述：
//·两个容器元素合并，并存储到另一容器中
//函数原型：
//merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);
//  //容器元素合并，并存储到另一容器中
//  //注意：两个容器必须是有序的
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
        v1.push_back(i + 1);
    }

    //目标容器
    vector<int> vTarget;
    //提前给容器分配空间
    vTarget.resize(v1.size() + v2.size());

    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());

    for_each(vTarget.begin(),vTarget.end(),myPrint);
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
