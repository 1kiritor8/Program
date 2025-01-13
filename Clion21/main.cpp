#include <iostream>
#include "windows.h"
#include <string>

using namespace std;

const double Pi = 3.14;
//class代表设计一个类，类后面紧跟着的就是类名称
 class Circle
 {
     //访问权限
     //公共权限
 public:
     //属性
     int m_r;
     //行为
     //获取圆的周长
     double calculateZC()
     {
         return 2 * Pi * m_r;
     }
 };

 class Student
 {
     //类中的属性和行为，我们统一称为成员
     //属性   成员属性    成员变量
     //行为   成员函数    成员方法
 public:

     string Stu_name;
     long long Stu_ID;

     void show()
     {
         cout << "学生姓名：" << Stu_name << "  学生学号：" << Stu_ID << endl;
     }

     //给姓名赋值
     void SetName(string name)
     {
         Stu_name = name;
     }

     void SetID(long long ID)
     {
         Stu_ID = ID;
     }

//     string show_name()
//     {
//         return Stu_name;
//     }
//
//     long long show_ID()
//     {
//         return Stu_ID;
//     }
 };
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    //通过圆类，创造具体的圆（对象）
    Circle c1;
    //给圆（对象）的属性进行赋值
    c1.m_r = 10;

    cout << "圆的周长为：" << c1.calculateZC() << endl;


    Student stu1;
    //stu1.Stu_name = "张三";
    stu1.SetName("张三");
    //stu1.Stu_ID = 2301212004;
    stu1.SetID(2301212004);

//    cout << "学生的姓名是：" << stu1.show_name() << endl;
//    cout << "学生的学号是：" << stu1.show_ID() << endl;
    stu1.show();

    Student stu2;
    stu2.Stu_name = "李四";
    stu2.Stu_ID = 2301212005;
    stu2.show();

    return 0;
}
