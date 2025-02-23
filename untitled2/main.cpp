#include <iostream>
#include "Windows.h"

using namespace std;

//3.1.5string查找和替换
//功能描述：
//·查找：查找指定字符串是否存在
//·替换：在指定的位置替换字符串
//函数原型：
//int find(const string& str, int pos =θ) const;        //查找str第一次出现位置，从pos开始查找
//int find(const chan* s, int pos =θ) const;            //查找s第一次出现位置，从pos开始查找
//int find(const chan* s, int pos, int n) const;        //从pos位置查找s的前n个字符第一次位置
//int find(const char c, int pos =θ) const;             //查找字符c第一次出现位置
//int rfind(const string& str, int pos = npos) const;   //查找str最后一次位置，从pos开始查找
//int rfind(const chan* s, int pos = npos) const;       //查找s最后一次出现位置，从pos开始查找
//int rfind(const chan* s, int pos, int n) const;       //从pos查找s的前n个字符最后一次位置
//int rfind(const char c,int pos = θ) const;            //查找字符c最后一次出现位置
//string& replace(int pos, int n, const string& str);   //替换从pos开始n个字符为字符串str
//string& replace(int pos, int n,const chan* s);        //替换从pos开始的n个字符为字符串s
//void test01()
//{
////    string str1 = "abcdefg";
////    int pos = str1.find("de");
////    if(pos == -1)
////    {
////        cout << "未找到字符串" << endl;
////    }
////    else
////    {
////        cout << "找到字符串，pos = " << pos << endl;
////    }
////
////    //rfind 和 find的区别
////    //rfind是从右往左查找
////    //find是从左往右查找
////    pos = str1.rfind("de");
////    cout << "pos = " << pos << endl;
//
////    string str2 = "abacadaeafaga";
////    int pos = str2.rfind('a',11);
////    cout << "pos = " << pos << endl;
//
//    string str3 = "abcdabceabcfabcg";
//    int pos = str3.rfind("abc",7,3);
//    cout << "pos = " << pos << endl;
//
//
//}
//
//void test02()
//{
//    string str1 = "abcdefg";
//    //从1号位置起，三个字符替换为“1111”
//    str1.replace(1,3,"1111");
//    cout << "str1 = " << str1 << endl;
//
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    test01();
//    test02();
//
//    return 0;
//}


//string字符串比较
//功能描述：
//字符串之间的比较
//比较方式：
//字符串比较是按字符的ASCII码进行对比
//=返回0
//>返回
//<返回-1
//函数原型：
//int compare（const string& s）const；//与字符串s比较
//int compare(const char* s) const;//与字符串s比较
void test01()
{
    string str1 = "hello";
    string str2 = "hello";

    if(str1.compare(str2) == 0)
    {
        cout << "str1 == str2" << endl;
    }
    else if(str1.compare(str2) > 0)
    {
        cout << "str1 > str2" << endl;
    }
    else
    {
        cout << "str1 < str2" << endl;
    }

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}


























































































