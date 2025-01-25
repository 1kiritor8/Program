//#include "iostream"
//#include "windows.h"
//#include "string"
//
//using namespace std;
//
//
////函数调用运算符重载
////函数调用运算符（也可以重载)
//class MyPrint
//{
//public:
//
//    void operator()(string test)
//    {
//        cout << test << endl;
//
//    }
//
//};
//
//void MyPrint02(string test)
//{
//    cout << test << endl;
//}
//
//void test01()
//{
//    MyPrint myPrint;
//
//    myPrint("hello World");//由于使用起来非常类似于函数调用，因此称为仿函数
//
//    MyPrint02("hello World");
//}
//
////仿函数没有固定写法，非常灵活
////加法类
//class MyAdd
//{
//
//public:
//
//    int operator()(int x,int y)
//    {
//        return x+y;
//    }
//
//
//};
//
//void test02()
//{
//    MyAdd myadd;
//    int ret = myadd(100,100);
//
//    cout << "ret = " << ret << endl;
//
//    //匿名函数对象
//    cout << MyAdd()(100,100) << endl;
//
//}
//
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    test01();
//    test02();
//
//    return 0;
//}


#include "iostream"
#include "windows.h"
#include "string"


using namespace std;
//继承的基本语法
//继承实现页面
class BasePage
{

public:
    void header()
    {
        cout << "首页，公开课，登录，注册……（公共头部）" << endl;

    }

    void footer()
    {
        cout << "帮助中心，交流合作，站内地图……（公共底部）" << endl;

    }

    void left()
    {
        cout << "Java，Python，C++……(公共分类列表）" << endl;

    }


};

//继承的好处：减少重复代码
//语法：class子类：继承方式父类
//子类也称为派生类
//父类也称为基类

//Java页面
class Java : public BasePage
{

public:

    void content()
    {
        cout << "Java视频下载页面" << endl;
    }


};

//Python页面
class Python : public BasePage
{

public:

    void content()
    {
        cout << "Python视频下载页面" << endl;
    }


};

//C++页面
class CPP : public BasePage
{

public:

    void content()
    {
        cout << "CPP视频下载页面" << endl;
    }


};

//java实现页面
//class Java
//{
//public:
//    void header()
//    {
//        cout << "首页，公开课，登录，注册……（公共头部）" << endl;
//
//    }
//
//    void footer()
//    {
//        cout << "帮助中心，交流合作，站内地图……（公共底部）" << endl;
//
//    }
//
//    void left()
//    {
//        cout << "Java，Python，C++……(公共分类列表）" << endl;
//
//    }
//
//    void content()
//    {
//        cout << "Java学科视频" << endl;
//
//    }
//
//
//};
//
//class Python
//{
//public:
//    void header()
//    {
//        cout << "首页，公开课，登录，注册……（公共头部）" << endl;
//
//    }
//
//    void footer()
//    {
//        cout << "帮助中心，交流合作，站内地图……（公共底部）" << endl;
//
//    }
//
//    void left()
//    {
//        cout << "Java，Python，C++……(公共分类列表）" << endl;
//
//    }
//
//    void content()
//    {
//        cout << "Python学科视频" << endl;
//
//    }
//};
//
//class Cplusplus
//{
//public:
//    void header()
//    {
//        cout << "首页，公开课，登录，注册……（公共头部）" << endl;
//
//    }
//
//    void footer()
//    {
//        cout << "帮助中心，交流合作，站内地图……（公共底部）" << endl;
//
//    }
//
//    void left()
//    {
//        cout << "Java，Python，C++……(公共分类列表）" << endl;
//
//    }
//
//    void content()
//    {
//        cout << "C++学科视频" << endl;
//
//    }
//};
//
void test01()
{
    cout << "Java视频下载页面如下：" << endl;
    Java ja;
    ja.header();
    ja.footer();
    ja.left();
    ja.content();
    cout << "------------------------------------" << endl;
    cout << "Python视频下载页面如下：" << endl;
    Python python;
    python.header();
    python.footer();
    python.left();
    python.content();
    cout << "------------------------------------" << endl;
    cout << "C++视频下载页面如下：" << endl;
    CPP cpp;
    cpp.header();
    cpp.footer();
    cpp.left();
    cpp.content();

}



int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}











