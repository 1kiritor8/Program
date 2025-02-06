#include <iostream>
#include "windows.h"
#include "fstream"

using namespace std;

//  二进制文件
//以二进制的方式对文件进行读写操作
//打开方式要指定为ios:binary
//      写文件
//二进制方式写文件主要利用流对象调用成员函数write
//函数原型：ostream&write（const chan*buffer,int len);
//参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
class Person
{
public:

    char m_Name[64];
    int m_Age;
};

//void test01()
//{
//    ofstream ofs("person.txt",ios::out | ios::binary);
////    ofs.open("person.txt",ios::out | ios::binary);
//
//    Person p = {"张三",18};
//    ofs.write((const char*)&p,sizeof(Person));
//
//    ofs.close();
//}

//读文件
//二进制方式读文件主要利用流对象调用成员函数read
//函数原型：istream&read（char *buffer,int len）;
//参数解释：字符指针buffer指向内存中一段存储空间。len是读写的字节数
void test01()
{
    ifstream ifs;
    ifs.open("person.txt",ios::in | ios::binary);

    if(!ifs.is_open())
    {
        cout << "文件打开失败！！！" << endl;
        return;
    }

    Person p;
    ifs.read((char*)&p,sizeof(Person));

    cout << "姓名：" << p.m_Name << endl;
    cout << "年龄：" << p.m_Age << endl;

    ifs.close();
}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
