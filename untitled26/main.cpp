#include <iostream>
#include "Windows.h"
#include "set"

using namespace std;

//set查找和统计
//功能描述：
//对set容器进行查找数据以及统计数据
//函数原型：
//find(key);//查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();
//count(key);//统计key的元素个数
void test01()
{
    //查找
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    set<int>::iterator pos = s1.find(30);
    if(pos != s1.end())
    {
        cout  << "找到元素：" << *pos << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }

}

void test02()
{
    //统计
    set<int> s1;
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    //统计30的个数
    int num = s1.count(30);
    //对于set而言统计结果要么是0要么是1
    cout << "num = " << num << endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
