#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//5.4.4 swap
//功能描述：
//互换两个容器的元素
//函数原型：
//swap(container c1,container c2);
//  //互换两个容器的元素
//  //c1容器1
//  //c2容器2
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
    vector<int> v1;
    vector<int> v2;

    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i + 100);
    }

    cout << "交换前：" << endl;
    cout << "v1中的元素为：" << endl;
    for_each(v1.begin(),v1.end(),myPrint());
    cout << endl;
    cout << "v2中的元素为：" << endl;
    for_each(v2.begin(),v2.end(),myPrint());
    cout << endl;

    cout << "----------------------------------------" << endl;
    cout << "交换后：" << endl;

    swap(v1,v2);

    cout << "v1中的元素为：" << endl;
    for_each(v1.begin(),v1.end(),myPrint());
    cout << endl;
    cout << "v2中的元素为：" << endl;
    for_each(v2.begin(),v2.end(),myPrint());
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
