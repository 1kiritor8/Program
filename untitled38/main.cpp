#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//谓词
//  谓词概念
//概念：
//返回boo类型的仿函数称为谓词
//如果operator(）接受一个参数，那么叫做一元谓词
//如果operator（）接受两个参数，那么叫做二元谓词
class GreatFive
{
public:

    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    //查找容器中有没有大于5的数字
    //GreatFive()匿名函数对象
    vector<int>::iterator it = find_if(v.begin(),v.end(),GreatFive());
    if(it == v.end())
    {
        cout << "未找到大于5的元素" << endl;
    }
    else
    {
        cout << "找到大于5的元素为："<< *it << endl;
    }


}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
