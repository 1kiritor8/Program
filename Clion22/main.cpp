//#include <iostream>
//#include "windows.h"
//
//using namespace std;
//
////访问权限
////1.公共权限    public  成员  类内可以访问    类外可以访问
////2.保护权限    protected   成员 类内可以访问 类外不可以访问   子类可以访问父类中的内容
////3.私有权限    private     成员 类内可以访问 类外不可以访问   子类不可以访问父类中的内容
////class Person
////{
////public:
////    string m_Name;
////protected:
////    string m_Car;
////private:
////    int m_Password;
////
////public:
////    void func()
////    {
////        m_Name = "张三";
////        m_Car = "拖拉机";
////        m_Password = 123456;
////    }
////};
//
//
////struct 和 class的区别
////struct默认权限是public
////class默认权限是private
//
//class C1
//{
//    int m_A;    //默认权限是 私有  private
//};
//
//struct C2
//{
//    int m_A;    //默认权限是 公共  public
//};
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    Person p1;
////
////    p1.m_Name = "李四";
////    //p1.m_Car = "奔驰";    //保护权限内容，在类外访问不到
////    //p1.m_Password = 123;    //私有权限内容，在类外访问不到
//
//
//    C1 c1;
//    //c1.m_A = 100;
//
//    C2 c2;
//    c2.m_A = 100;
//    return 0;
//}


#include <iostream>
#include "windows.h"
#include <string>

using namespace std;

//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据有效性

class Person
{
public:
    void setName(string name)
    {
        m_Name = name;
    }

    string getName()
    {
        return m_Name;
    }

    int getAge()
    {
        return m_Age;
    }

    void setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            cout << "年龄  " << age << "  输入有误，赋值失败" << endl;
            return;
        }
        m_Age = age;
    }
    void setIdol(string Idol)
    {
        m_Idol = Idol;
    }

private:
    string m_Name;  //可读可写

    int m_Age = 18;      //只读

    string m_Idol;  //只写
};
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Person p;
    p.setName("张三");
    cout << "姓名：" << p.getName() << endl;

    p.setAge(160);
    //p.m_Age = 20;
    cout << "年龄：" << p.getAge() << endl;    //也可以写，年龄必须在0~150之间

    p.setIdol("小明");
    //cout << "偶像：" << p.m_Idol << endl;  //只写状态，外界访问不到
    return 0;
}















