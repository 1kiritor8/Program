#include <iostream>
#include "Windows.h"
#include "vector"
#include "numeric"
#include "algorithm"

using namespace std;

//b45.5.2fil
//功能描述：
//·向容器中填充指定的元素
//函数原型：
//fill(iterator beg,iterator end,value);
//  //向容器中填充元素
//  //beg开始迭代器
//  //end结束迭代器
//  //value填充的值
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
    v.resize(10);

    //后期重新填充
    fill(v.begin(),v.end(),100);
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
