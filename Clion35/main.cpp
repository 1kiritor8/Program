//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
//
////左移运算符重载
////作用：可以输出自定义数据类型
//class Person
//{
//    friend ostream& operator<<(ostream& cout,Person& p);
//
//public:
//    Person(int x,int y)
//    {
//        m_A = x;
//        m_B = y;
//
//    }
//private:
//
//    //利用成员函数重载<<运算符 p. operator<<(cout)简化版本p〈<cout
//    //不会利用成员函数重载<<运算符，因为无法实现cout在左侧
////    void operator<<(cout)
////    {
////
////    }
//
//    int m_A;
//    int m_B;
//
//};
//
////只能利用全局函数重载<<运算符
//ostream& operator<<(ostream& cout,Person& p)     //本质operator<<(cout,p)  简化 cout << p
//{
//    cout << "m_A = " << p.m_A << " m_B = " << p.m_B << endl;
//    return cout;
//
//}
//
//void test01()
//{
//    Person p(10,10);
////    p.m_A = 10;
////    p.m_B = 10;
//
//    cout << p << endl;
//
//}
//
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    test01();
//
//    return 0;
//}


#include "iostream"
#include "windows.h"

using namespace std;


//  递增运算符重载
//作用：通过重载递增运算符，实现自已的整型数据
//自定义整形
class MyInteger
{
public:

    friend ostream& operator<<(ostream& cout ,MyInteger myint);

    MyInteger()
    {
        m_Num = 0;

    }
    //重载前置++运算符     返回引用为了一直对一个数据进行递增操作
    MyInteger& operator++()
    {
        //先进行++运算
        m_Num++;
        //再将自身返回
        return *this;

    }

    //重载后置++运算符
    //void operator++(int)  int代表占位参数,可以用于区分前置和后置递增
    MyInteger operator++(int)
    {
        //先记录当时结果
        MyInteger tmp = *this;

        //后递增
        m_Num++;
        //最后将记录结果做返回
        return tmp;

    }

private:

    int m_Num;

};

//重载左移运算符
ostream& operator<<(ostream& cout ,MyInteger myint)
{
    cout << myint.m_Num << endl;
    return cout;

}

void test01()
{
    MyInteger myint;

    cout << ++(++myint) << endl;
    cout << myint << endl;

}

void test02()
{
    MyInteger myint;

    cout << myint++ << endl;
    cout << myint << endl;

}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}















