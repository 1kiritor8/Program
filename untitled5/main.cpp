#include <iostream>
#include "Windows.h"
#include "vector"

using namespace std;

//vector赋值操作
//功能描述：
//给vector容器进行赋值
//函数原型：
//vector&operator=（constvector&vec）;//重载等号操作符
//assign(beg,end);//将[beg，end)区间中的数据拷贝赋值给本身。
//assign(n, elem);//将n个elem拷贝赋值给本身。
//void printVector(vector<int>& v)
//{
//    for(vector<int>::iterator it = v.begin();it != v.end();it++)
//    {
//        cout << *it << " ";
//    }
//    cout << endl;
//}
//
//void test01()
//{
//    vector<int> v1;
//    for(int i = 0;i < 10;i++)
//    {
//        v1.push_back(i);
//    }
//    printVector(v1);
//
//    //赋值operator=
//    vector<int> v2 = v1;
//    printVector(v2);
//
//    //assign
//    vector<int> v3;
//    v3.assign(v1.begin(),v1.end());
//    printVector(v3);
//
//    //n个elem方式赋值
//    vector<int> v4;
//    v4.assign(10,100);
//    printVector(v4);
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//    return 0;
//}


//vector容量和大小
//功能描述：
//对vector容器的容量和大小操作
//函数原型：
//empty();//判断容器是否为空
//capacity();//容器的容量
//size();//返回容器中元素的个数
//resize（int num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
                   //如果容器变短，则末尾超出容器长度的元素被删除。
//resize(int num，elem）;//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
                       //如果容器变短，则末尾超出容器长度的元素被删除
void printVector(vector<int>& v)
{
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int> v1;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if(v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
        cout << "v1的容量为：" << v1.capacity() << endl;
        cout << "v1的大小为：" << v1.size() << endl;
    }

    //重新制定大小
    v1.resize(15,100);//利用重载版本，可以指定默认填充值，参数2
    printVector(v1);//如果重新指定的比原来长了，默认用0填充新的位置

    v1.resize(5);
    printVector(v1);//如果重新指定的比原来短了，超出部分会删除掉
}
//总结：
//判断是否为空--- empty
//返回元素个数--- size
//返回容器容量---capacity
//重新指定大小---resize

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();
    return 0;
}
