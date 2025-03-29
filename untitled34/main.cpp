#include <iostream>
#include "Windows.h"
#include "map"

using namespace std;

//map查找和统计
//功能描述：
//对map容器进行查找数据以及统计数据
//函数原型：
//find(key);//查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key);//统计key的元素个数
void test01()
{
    map<int,int> m;
    m.insert(make_pair(1,10));
    m.insert(make_pair(2,20));
    m.insert(make_pair(3,30));
    m.insert(make_pair(3,40));

    //查找
    map<int,int>::iterator pos = m.find(3);
    if(pos != m.end())
    {
        cout << "找到该元素,key = " << pos->first << " value = " << pos->second << endl;
    }
    else
    {
        cout << "未找到该元素！！！" << endl;
    }

    //统计
    //map不允许插入重复的key元素，count统计而言要么是0要么是1
    //multimap的count可能大于1
    int num = m.count(3);
    cout << "num = " << num << endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
