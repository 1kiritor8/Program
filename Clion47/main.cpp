#include <iostream>
#include "windows.h"
#include "fstream"

using namespace std;

//  文件操作
//程序运行时产生的数据都属于临时数据，程序一旦运行结束都会被释放
//通过文件可以将数据持久化
//C++中对文件操作需要包含头文件fstream>
//文件类型分为两种：
//1.文本文件－文件以文本的ASCII码形式存储在计算机中
//2.二进制文件－文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
//操作文件的三大类：
//1.ofstream：写操作
//2.ifstream：读操作
//3.fstream：读写操作
void test01()
{
    ofstream ofs;
    ofs.open("test.txt",ios::out);

    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：18" << endl;

    ofs.close();

}

void test02()
{
    ifstream ifs;
    ifs.open("test.txt",ios::in);

    if(!ifs.is_open())
    {
        cout << "文件打开失败" << endl;
        return;
    }

//    //第一种读取方式
//    char buf[1024] = { 0 };
//    while(ifs >> buf)
//    {
//        cout << buf << endl;
//    }

//    //第二种读取方式
//    char buf[1024] = { 0 };
//    while(ifs.getline(buf,sizeof(buf)))
//    {
//        cout << buf << endl;
//    }

//    //第三种读取方法
//    string buf;
//    while(getline(ifs,buf))
//    {
//        cout << buf << endl;
//    }

    //第四种读取方式
    char c;
    while((c = ifs.get()) != EOF)//EOF：  end of file
    {
        cout << c;
    }

    ifs.close();

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
