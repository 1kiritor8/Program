#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"
#include "string"

using namespace std;

//5.2.5count
//功能描述：
//·统计元素个数
//函数原型：
//count(iterator beg, iterator end,value);
//  //统计元素出现次数
//  //beg开始迭代器
//  //end结束迭代器
//  //value统计的元素
void test01()
{
    //统计内置数据类型
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(40);

    int num = count(v.begin(),v.end(),40);

    cout << "40的元素个数为：" << num << endl;
}

class Person
{
public:

    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }

    bool operator==(const Person &p)
    {
        if(this->m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string m_Name;
    int m_Age;
};

void test02()
{
    //统计自定义数据类型
    vector<Person> v;
    Person p1("刘备",35);
    Person p2("关羽",35);
    Person p3("张飞",35);
    Person p4("赵云",30);
    Person p5("曹操",40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    Person p("诸葛亮",35);
    int num = count(v.begin(),v.end(),p);

    cout << "跟诸葛亮年龄相同的元素有：" << num << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
