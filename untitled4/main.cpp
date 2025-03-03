#include <iostream>
#include "Windows.h"

using namespace std;

//string子串
//功能描述：
//从字符串中获取想要的子串
//函数原型：
//string substr（int pos =0,int n=npos) const;//返回由pos开始的n个字符组成的字符串
//void test01()
//{
//    string str = "abcdef";
//    string subStr = str.substr(1,3);
//    cout << "subStr= " << subStr << endl;
//}
//
//void test02()
//{
//    string email = "hello@sina.com";
//
//    int pos = email.find("@");
//    string usrName = email.substr(0,pos);
//    cout << "usrName= " << usrName << endl;
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


//vector容器
//      vector基本概念
//功能：
//vector数据结构和数组非常相似，也称为单端数组
//vector与普通数组区别：
//不同之处在于数组是静态空间，而vector可以动态扩展
//动态扩展：
//并不是在原空间之后续接新空间，而是找更大的内存空间，然后将原数据拷贝新空间，释放原空间


#include "vector"
//vector构造函数
//功能描述：
//创建vector容器
//函数原型：
//vector<T> v;//采用模板实现类实现，默认构造函数
//vector(v.begin(), v.end());//将v[begin(),end()区间中的元素拷贝给本身。
//vector(n, elem);//构造函数将n个elem拷贝给本身。
//vector(const vector &vec);//拷贝构造函数。
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
    vector<int> v1;//默认构造

    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
    }
    printVector(v1);


    //通过区间方式进行构造
    vector<int> v2(v1.begin(),v1.end());
    printVector(v2);

    //n个elem方式构造
    vector<int> v3(10,100);
    printVector(v3);

    //拷贝构造
    vector<int> v4(v3);
    printVector(v4);

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}






