#include <iostream>
#include "Windows.h"
#include "map"

using namespace std;

//map插入和删除
//功能描述：
//map容器进行插入数据和删除数据
//函数原型：
//insert(elem);//在容器中插入元素。
//clear();//清除所有元素
//erase(pos);//删除pos选代器所指的元素，返回下一个元素的选代器。
//erase(beg, end);//删除区间[beg,end)的所有元素，返回下一个元素的迭代器。
//erase(key);//删除容器中值为key的元素。
void printMap(map<int,int>& m)
{
    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key = " << it->first << " value =" << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int,int> m;
    //第一种插入方法
    m.insert(pair<int,int>(1,10));
    //第二种
    m.insert(make_pair(2,20));
    //第三种
    m.insert(map<int,int>::value_type (3,30));
    //第四种
    m[4] = 40;

    //[]不建议插入，用途可以利用key访问到value
//    cout << m[4]<< endl;
    printMap(m);

    //删除
    m.erase(m.begin());
    printMap(m);

    m.erase(3);//按照key值进行删除
    printMap(m);

    //清空
//    m.erase(m.begin(),m.end());
    m.clear();
    printMap(m);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
