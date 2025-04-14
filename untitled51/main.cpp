#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"
#include "functional"

using namespace std;

//5.3常用排序算法
//学习目标：
//掌握常用的排序算法
//算法简介：
//sort//对容器内元素进行排序
//random_shuffle//洗牌指定范围内的元素随机调整次序
//merge//容器无素合并，并存储到另一容器中
//reverse//反转指定范围的元素
//5.3.1 sort
//功能描述：
//·对容器内元素进行排序
//5.3.1 sort
//功能描述：
//·对容器内元素进行排序
//函数原型：
//sort(iterator beg, iterator end,_Pred);
//  //按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//  //beg开始迭代器
//  //end结束迭代器
//  //_Pred谓词
void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);

    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;

    //改变为降序
    sort(v.begin(),v.end(),greater<int>());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
