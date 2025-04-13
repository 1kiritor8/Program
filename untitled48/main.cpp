#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//5.2.4binary_search
//功能描述：
//·查找指定元素是否存在
//函数原型：
//bool bihary_search(iterator beg,iterator end,value);
//  //查找指定的元素，查到返回true否则false
//  //注意：在无序序列中不可用
//  //beg开始迭代器
//  //end结束迭代器
//  //value查找的元素
void test01()
{
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }
//    v.push_back(2);//如果是一个无序序列结果未知
    //注意：容器必须是一个有序的序列
    bool ret = binary_search(v.begin(),v.end(),9);

    if(ret)
    {
        cout << "找到该元素" << endl;
    }
    else
    {
        cout << "未找到该元素" << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
