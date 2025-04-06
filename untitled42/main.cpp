#include <iostream>
#include "Windows.h"
#include "vector"
#include "functional"
#include "algorithm"

using namespace std;

//4.3.4逻辑仿函数
//功能描述：
//·实现逻辑运算
//函数原型：
//template<class T> bool logical_and<T>//逻辑与
//template<class T> bool logical_or<T>//逻辑或
//template<class T> bool logical_not<T>//逻辑非


void test01()
{
    vector<bool> v;
    v.push_back(true);
    v.push_back(false);
    v.push_back(true);
    v.push_back(false);

    for(vector<bool>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //利用逻辑非将容器v搬运到容器v2中，并执行取反操作
    vector<bool> v2;
    v2.resize(v.size());
    transform(v.begin(),v.end(),v2.begin(),logical_not<bool>());
    for(vector<bool>::iterator it = v2.begin();it != v2.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
