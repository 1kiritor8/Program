#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//5.4.3 replace_if
//功能描述：
//·将区间内满足条件的元素，替换成指定元素
//函数原型：
//replace_if（iterator beg,iterator end,_pred,newvalue);
//  //按条件替换元素，满足条件的替换成指定元素
//  //beg开始迭代器
//  //end结束迭代器
//  //_pred谓词
//  //newvalue替换的新元素
class myPrint
{
public:

    void operator()(int val)
    {
        cout << val << " ";
    }
};

class Greater
{
public:

    bool operator()(int val)
    {
        return val >= 30;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(30);

    //将大于等于30的替换为3000
    cout << "替换前：" << endl;
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;

    cout << "替换后：" << endl;
    replace_if(v.begin(),v.end(),Greater(),3000);
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
