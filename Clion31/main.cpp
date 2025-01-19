//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
//class Person
//{
//public:
//
//    void showClassName()
//    {
//        cout << "this is Person class" << endl;
//
//    }
//
//    void showPersonAge()
//    {
//        //报错原因是因为传入指针为NULL
//
//        if(this == NULL)
//        {
//            return;
//        }
//        cout << "age =" << this->m_Age << endl;
//
//    }
//
//    int m_Age;
//
//};
//
////  空指针访问成员函数
////C++中空指针也是可以调用成员函数的，但是也要注意有没有用到this指针
////如果用到this指针，需要加以判断保证代码的健壮性
//void test01()
//{
//    Person* p = NULL;
//
//    p->showClassName();
//
//    p->showPersonAge();
//
//}
//
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
//  const修饰成员函数
//常函数：
//1·成员函数后加const后我们称为这个函数为常函数
//2·常函数内不可以修改成员属性
//3·成员属性声明时加关键字mutable后，在常函数中依然可以修改
class Person
{
public:
    //this指针的本质是指针常量,指针的指向是不可以修改的
    //const this指针相当于const Person* const this;
    //在成员函数后面加const,修饰的是this指针,让this指针指向的值也不允许修改
    void showPerson() const
    {
//        this->m_A = 100;
//        this = NULL;  //this指针是不可以修改指向的
        this->m_B = 100;

    }

    void func()
    {

    }

    int m_A;
    mutable int m_B;    //特殊变量，即使在常函数中，也可以修改这个值,加关键字mutable

};

void test01()
{
    Person p;
    p.showPerson();

}
//常对象：
//1·声明对象前加const称该对象为常对象
//2·常对象只能调用常函数
void test02()
{
    const Person p{}; //在对象前加const，变为常对象
//    p.m_A = 100;
    p.m_B = 100;    //m_B是一个特殊值，在常对象下也可以修改

    //常对象只能调用常函数
    p.showPerson();
//    p.func();     //常对象不可以调用普通成员函数，因为普通成员函数可以修改属性

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    return 0;
}









