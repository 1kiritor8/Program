#include <iostream>
#include "Windows.h"
#include "deque"

using namespace std;

//deque排序
//功能描述：
//利用算法实现对deque容器进行排序
//算法：
//sort（iterator beg，iterator end）//对beg和end区间内元素进行排序
#include "algorithm"//标准算法头文件
void printDeque(const deque<int>& d)
{
    for(deque<int>::const_iterator it = d.begin();it != d.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int> d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_back(30);
    d1.push_front(100);
    d1.push_front(200);
    d1.push_front(300);
    printDeque(d1);

    //排序    默认排序规则  从小到大  升序
    //对于支持随机访问的迭代器的容器都可以利用sort算法直接对其进行排序
    //vector容器也可以利用sort进行排序
    sort(d1.begin(),d1.end());
    cout << "排序后：" << endl;
    printDeque(d1);

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();
    return 0;
}
