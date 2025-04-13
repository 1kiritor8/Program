#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//二元谓词
class MyCompare
{
public:

    bool operator()(int v1,int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);

    sort(v.begin(),v.end());
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    //使用函数对象改变算法策略，变为排序规则为从大到小
    sort(v.begin(),v.end(),MyCompare());
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
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
