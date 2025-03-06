#include <iostream>
#include "Windows.h"
#include "deque"

using namespace std;

//deque数据存取
//功能描述：
//对deque中的数据的存取操作
//函数原型：
//at（int idx);//返回索引lidx所指的数据
//operator[];//返回索引lidx所指的数据
//front();//返回容器中第一个数据元素
//back();//返回容器中最后一个数据元素
void test01()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);

    //通过[]方式访问元素
    for(int i = 0;i < d1.size();i++)
    {
        cout << d1[i] << " ";
    }
    cout << endl;

    //通过at方式访问元素
    for(int i = 0;i < d1.size();i++)
    {
        cout << d1.at(i) << " ";
    }
    cout << endl;

    cout << "第一个元素为：" << d1.front() << endl;
    cout << "最后一个元素为：" << d1.back() << endl;

}

//总结：
//除了用迭代器获取deque容器中元素，[]和at也可以
//front返回容器第一个元素
//back返回容器最后一个元素

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();
    return 0;
}
