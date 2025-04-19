#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//5.4.2 replace
//功能描述：
//将容器内指定范围的旧元素修改为新元素
//函数原型：
//replace(iterator beg,iterator end,oldvalue,newvalue);
//  //将区间内旧无素替换成新元素
//  //beg开始迭代器
//  //end结束迭代器
//  //oldvaluel旧元素
//  //newvalue新元素
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
    vector<int> v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(10);
    v.push_back(20);

    cout << "替换前：" << endl;
    for_each(v.begin(),v.end(), myPrint());
    cout << endl;

    cout << "替换后：" << endl;
    //将20替换为2000
    replace(v.begin(),v.end(),20,2000);
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
