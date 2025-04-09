#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"
#include "string"

using namespace std;

//5.2常用查找算法
//学习目标：
//掌握常用的查找算法
//算法简介：
//find//查找元素
//find_if//按条件查找元素
//adjacent_find//查找相邻重复元素
//binary_search//二分查找法
//count//统计元素个数
//count_if//按条件统计元素个数
//5.2.1 find
//功能描述：
//·查找指定元素，找到返回指定元素的迭代器，找不到返回结束迭代器end()
//函数原型：
//find(iterator beg, iterator end, value);
//  //按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//  //beg开始迭代器
//  //end结束迭代器
//  //value查找的元素
void test01()
{
    //查找内置数据类型
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find(v.begin(),v.end(),5);
    if(it == v.end())
    {
        cout << "未找到该元素！" << endl;
    }
    else
    {
        cout << "找到该元素：" << *it << endl;
    }
}

class Person
{
public:

    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }

    //重载==让find知道如何对比自定义数据类型
    bool operator==(const Person &p)
    {
        if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
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
    //查找自定义数据类型
    vector<Person> v;
    //创建数据
    Person p1("aaa", 10);
    Person p2("bbb", 20);
    Person p3("ccc", 30);
    Person p4("ddd", 40);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person pp("bbb",20);

    vector<Person>::iterator it = find(v.begin(),v.end(),pp);
    if(it == v.end())
    {
        cout << "未找到该元素！" << endl;
    }
    else
    {
        cout << "找到该元素，姓名为：" << it->m_Name << " 年龄为：" << it->m_Age << endl;
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
