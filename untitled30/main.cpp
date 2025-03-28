#include <iostream>
#include "Windows.h"
#include "set"

using namespace std;

//set存放自定义数据类型
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

class comparePerson
{
public:

    bool operator()(const Person& p1,const Person& p2) const
    {
        //按照年龄降序
        return p1.m_Age > p2.m_Age;
    }
};

void test01()
{
    //自定义数据类型都会指定排序规则
    set<Person,comparePerson> s;

    //创建Person对象
    Person p1("刘备",24);
    Person p2("关羽",28);
    Person p3("张飞", 25);
    Person p4("赵云",21);

    s.insert(p1);
    s.insert(p2);
    s.insert(p3);
    s.insert(p4);

    for(set<Person,comparePerson>::iterator it = s.begin();it != s.end();it++)
    {
        cout << "姓名：" << it->m_Name << " 年龄：" << it->m_Age << endl;
    }

}

//总结：
//对于自定义数据类型，set必须指定排序规则才可以插入数据

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
