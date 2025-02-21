#include <iostream>
#include "windows.h"
#include "vector"

using namespace std;

//Vector容器嵌套容器
//学习目标：容器中嵌套容器，我们将所有数据进行遍历输出
//void test01()
//{
//    vector< vector<int> > v;
//
//    //创建小容器
//    vector<int> v1;
//    vector<int> v2;
//    vector<int> v3;
//    vector<int> v4;
//
//    for(int i = 0;i < 4;i++)
//    {
//        v1.push_back(i + 1);
//        v2.push_back(i + 2);
//        v3.push_back(i + 3);
//        v4.push_back(i + 4);
//    }
//
//    //将小容器插入到大容器中
//    v.push_back(v1);
//    v.push_back(v2);
//    v.push_back(v3);
//    v.push_back(v4);
//
//    //通过大容器将所有数据遍历一遍
//    for(vector< vector<int> >::iterator it = v.begin();it != v.end();it++)
//    {
//        for(vector<int>::iterator vit = (*it).begin();vit != (*it).end();vit++)
//        {
//            cout << *vit << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}


//string基本概念
//本质：
//string是C++风格的字符串，而string本质上是一个类
//string和char*区别：
//char*是一个指针
//string是一个类，类内部封装了char*，管理这个字符串，是一个char*型的容器。
//特点：
//string类内部封装了很多成员方法
//例如：查找find，拷贝copy，删除delete 替换replace，插入insert
//string管理char*所分配的内存，不用担心复制越界和取值越界等，由类内部进行负责


//string构造函数
//构造函数原型：
//string(）;//创建一个空的字符串例如：string str;
//string(const char* s);//使用字符串s初始化
//string(const string& sr);//使用一个string对象初始化另一个string对象
//string(int n, char c）;//使用n个字符c初始化
void test01()
{
    string s1;//默认构造

    const char* str = "Hello World";
    string s2(str);

    cout << "s2= " << s2 << endl;

    string s3(s2);
    cout << "s3= " << s3 << endl;

    string s4(10,'a');
    cout << "s4= " << s4 << endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}







