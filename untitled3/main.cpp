#include <iostream>
#include "Windows.h"

using namespace std;

//string字符存取
//string中单个字符存取方式有两种
//char& operator[](int n);//通过[方式取字符
//char& at（int n);//通过at方法获取字符
//void test01()
//{
//    string str = "hello";
////    cout << "str = " << str << endl;
//
//    //1.通过[]访问单个字符
//    for(int i = 0;i < str.size();i++)
//    {
//        cout << str[i] << " ";
//    }
//    cout << endl;
//    //2.通过at方式访问单个字符
//    for(int i = 0;i < str.size();i++)
//    {
//        cout << str.at(i) << " ";
//    }
//    cout << endl;
//
//    str[0] = 'x';
//    cout << "str = " << str << endl;
//
//    str.at(1) = 'x';
//    cout << "str = " << str << endl;
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}


//string插入和删除
//功能描述：
//对string字符串进行插入和删除字符操作
//函数原型：
//string& insert(int pos,const chan* s);        //插入字符串
//string& insert(int pos, const string& str);   //插入字符串
//string& insert(int pos, int n, charIc);       //在指定位置插入n个字符c
//string& erase（int pos,int n = npos）;         //删除从Pos开始的n个字符
void test01()
{
    string str = "hello";
    str.insert(1,"111");
    cout << "str= " << str << endl;

    str.erase(1,3);
    cout << "str= " << str << endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}