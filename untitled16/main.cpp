#include <iostream>
#include "Windows.h"
#include "queue"
#include "string"

using namespace std;

//queue容器
//  queue基本概念
//概念：Queue是一种先进先出(First InFirstOut,FIFO)的数据结构，它有两个出口
//队列容器允许从一端新增元素，从另一端移除元素
//队列中只有队头和队尾才可以被外界使用，因此队列不允许有遍历行为
//队列中进数据称为---入队 push
//队列中出数据称为---出队 pop


//queue常用接口
//功能描述：栈容器常用的对外接口
//构造函数：
//queue<T> que;//queue采用模板类实现，queue对象的默认构造形式
//queue(const queue &que);//拷贝构造函数
//
//赋值操作：
//queue& operator=（const queue &que);//重载等号操作符
//数据存取：
//push(elem);//往队尾添加元素
//pop();//从队头移除第一个元素
//back();//返回最后一个元素
//front();//返回第一个元素
//大小操作：
//empty();//判断堆栈是否为空
//size();//返回栈的大小
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
void test01()
{
    queue<Person> q;

    //创建数据
    Person p1("唐僧",30);
    Person p2("孙悟空",1000);
    Person p3("猪八戒",900);
    Person p4("沙僧",800);

    //入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    cout << "队列大小为：" << q.size() << endl;

    //判断只要队列不为空，查看队头，查看队尾，出队
    while(!q.empty())
    {
        //查看队头
        cout << "队头---- 姓名：" << q.front().m_Name << " 年龄：" << q.front().m_Age << endl;

        //查看队尾
        cout << "队尾---- 姓名：" << q.back().m_Name << " 年龄：" << q.back().m_Age << endl;

        //出队
        q.pop();

    }

    cout << "队列大小为：" << q.size() << endl;

}

//总结：
//入队--push
//出队--pop
//返回队买元素---front
//返回队尾元素---back
//判断队是否为空---empty
//返回队列大小---size

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();
    return 0;
}
