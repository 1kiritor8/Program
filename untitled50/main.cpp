#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"

using namespace std;

//5.2.6count_if
//功能描述：
//·按条件统计元素个数
//函数原型：
//count_if(iterator beg,iterator end,_Pred);
//  //按条件统计元素出现次数
//  //beg开始迭代器
//  //end结束迭代器
//  //_Pred谓词
class Greater20
{
public:

    bool operator()(int val)
    {
        return val > 20;
    }
};

void test01()
{
    //统计内置数据类型
    vector<int> v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(20);

    int num = count_if(v.begin(),v.end(),Greater20());

    cout << "大于20的元素有：" << num << endl;
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

class AgeGreater20
{
public:

    bool operator()(const Person &p)
    {
        return p.m_Age > 20;
    }
};

void test02()
{
    //统计自定义数据类型
    vector<Person> v;
    Person p1("刘备",35);
    Person p2("关羽",35);
    Person p3("张飞",35);
    Person p4("赵云",40);
    Person p5("曹操",20);
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    int num = count_if(v.begin(),v.end(),AgeGreater20());
    cout << "年龄大于20的有：" << num << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
