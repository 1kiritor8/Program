#include <iostream>
#include "Windows.h"
#include "string"
#include "vector"
#include "algorithm"

using namespace std;

//5.2.2find_if
//功能描述：
//·按条件查找元素
//函数原型：
//find_if(iterator beg, iterator end,_Pred);
//  //按值查找元素，找到返回指定位置迭代器，找不到返回结束迭代器位置
//  //beg开始迭代器
//  //end结束迭代器
//  //_Pred函数或者谓词（返回bool类型的仿函数）
class GreateFive
{
public:

    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    //内置数据类型
    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int>::iterator it = find_if(v.begin(),v.end(),GreateFive());
    if(it == v.end())
    {
        cout << "未找到大于5的元素" << endl;
    }
    else
    {
        cout << "找到大于5的数字为：" << *it << endl;
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

    string m_Name;
    int m_Age;
};

class Greater20
{
public:

    bool operator()(Person &p)
    {
        return p.m_Age > 20;
    }
};

void test02()
{
    //自定义数据类型
    vector<Person> v;

    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);

    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    vector<Person>::iterator it = find_if(v.begin(),v.end(),Greater20());
    if(it == v.end())
    {
        cout << "未找到年龄大于20的元素" << endl;
    }
    else
    {
        cout << "找到年龄大于20的元素，姓名为：" << it->m_Name << " 年龄：" << it->m_Age << endl;
    }

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
