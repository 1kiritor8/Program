#include <iostream>
#include "windows.h"

using namespace std;

//string赋值操作
//功能描述：
//给string字符串进行赋值
//赋值的函数原型：
//string& operator=(const char* s);          //char*类型字符串赋值给当前的字符串
//string& operator=(const string &s）;       //把字符串s赋给当前的字符串
//string& operator=(char c);                 //字符赋值给当前的字符串
//string& assign(const char *s);             //把字符串s赋给当前的字符串
//string& assign(const char *s,int n);       //把字符串s的前n个字符赋给当前的字符串
//string& assign(const string &s);           //把字符串s赋给当前字符串
//string& assign（int n,char c);             //用n个字符c赋给当前字符串
//void test01()
//{
//    string str1;
//    str1 = "Hello World";
//    cout << "str1= " << str1 << endl;
//
//    string str2;
//    str2 = str1;
//    cout << "str2= " << str2 << endl;
//
//    string str3;
//    str3 = 'a';
//    cout << "str3= " << str3 << endl;
//
//    string str4;
//    str4.assign("Hello C++");
//    cout << "str4=" << str4 << endl;
//
//    string str5;
//    str5.assign("Hello C++",5);
//    cout << "str5=" << str5 << endl;
//
//    string str6;
//    str6.assign(str5);
//    cout << "str6=" << str6 << endl;
//
//    string str7;
//    str7.assign(10,'w');
//    cout << "str7=" << str7 << endl;
//
//}

//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}


//string字符串拼接
//功能描述：
//实现在字符串末尾拼接字符串
//函数原型：
//string& operator+=(const char* str);                           //重载+=操作符
//string& operator+=(const char c);                              //重载+=操作符
//string& operator+=(const string& str);                         //重载+=操作符
//string& append(const char *s);                                 //把字符串s连接到当前字符串结尾
//string& append(const char *s, int n);                          //把字符串s的前n个字符连接到当前字符串结尾
//string& append(const string &s);                               //同operator+=(const string&str)
//string&append(const string&s，int pos，int n);                  //字符串s中从pos开始的n个字符连接到字符串结尾
void test01()
{
    string str1 = "我";

    str1 += "爱玩游戏";
    cout << "str1= " << str1 << endl;

    str1 += ':';
    cout << "str1= " << str1 << endl;

    string str2 = "LOL DNF";
    str1 += str2;
    cout << "str1= " << str1 << endl;

    string str3 = "I";
    str3.append(" Love ");
    cout << "str3= " << str3 << endl;

    str3.append("game abcde",4);
    cout << "str3= " << str3 << endl;

    str3.append(str2);
    cout << "str3=" << str3 << endl;

    str3.append(str2,0,3);
    cout << "str3= " << str3 << endl;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}