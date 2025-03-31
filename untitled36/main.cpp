#include <iostream>
#include "Windows.h"
#include "map"

using namespace std;

//map自定义函数排序
class Person
{
public:

    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }

    string m_Name;
    int m_Age;
};

class MyCompare
{
public:

    bool operator()(const Person& p1,const Person& p2) const
    {
        //按照年龄降序
        return p1.m_Age < p2.m_Age;
    }

//    bool operator()(int v1,int v2) const
//    {
//        return v1 > v2;
//    }
};

void test01()
{
//    //按key值排序
//    map<int,Person,MyCompare> m;
//    Person p1("曹操",35);
//    Person p2("刘备",32);
//    Person p3("周瑜",25);
//    Person p4("孙权",30);
//    Person p5("小乔",15);
//
//    m.insert(make_pair(1,p1));
//    m.insert(make_pair(2,p2));
//    m.insert(make_pair(3,p3));
//    m.insert(make_pair(4,p4));
//    m.insert(make_pair(5,p5));
//
//    for(map<int,Person,MyCompare>::iterator it = m.begin();it != m.end();it++)
//    {
//        cout << "key = " << it->first << " 姓名为：" << it->second.m_Name <<
//             " 年龄为：" << it->second.m_Age << endl;
//    }

    //按自定义类型排序
    map<Person,int,MyCompare> m;
    Person p1("曹操",35);
    Person p2("刘备",32);
    Person p3("周瑜",25);
    Person p4("孙权",30);
    Person p5("小乔",15);

    m.insert(make_pair(p1,1));
    m.insert(make_pair(p2,2));
    m.insert(make_pair(p3,3));
    m.insert(make_pair(p4,4));
    m.insert(make_pair(p5,5));

    for(map<Person,int,MyCompare>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key = " << it->second << " 姓名为：" << it->first.m_Name <<
        " 年龄为：" << it->first.m_Age << endl;
    }

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
