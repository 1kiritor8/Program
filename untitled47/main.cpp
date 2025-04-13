#include <iostream>
#include "Windows.h"
#include "string"
#include "vector"
#include "algorithm"

using namespace std;

//45.2.3 adjacent_find,
//功能描述：
//查找相邻重复元素1
//函数原型：
//adjacent_find(iterator beg, iterator end);
//  //查找相邻重复元素，返回相邻元素的第一个位置的迭代器
//  //beg开始迭代器
//  //end结束迭代器
void test01()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);

    vector<int>::iterator pos = adjacent_find(v.begin(),v.end());

    if(pos == v.end())
    {
        cout << "未找到邻近的相同元素" << endl;
    }
    else
    {
        cout << "找到邻近的相同元素为：" << *pos << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
