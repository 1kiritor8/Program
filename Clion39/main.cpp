//#include "iostream"
//#include "windows.h"
//
//using namespace std;
//
//
////继承中的对象模型
//class Base
//{
//public:
//    int m_A;
//protected:
//    int m_B;
//private:
//    int m_C;
//
//};
//
//class Son : public Base
//{
//public:
//    int m_D;
//
//};
//
////利用开发人员命令提示工具查看对象模型
////跳转盘符  F:
////跳转文件路径 cd 具体路径下
////查看命名
////cl d1 reportSingleClassLayout类名 文件名
//
//void test01()
//{
//    //16
//    //父类中所有非静态成员属性都会被子类继承下去
//    //父类中私有成员属性是被编译器给隐藏了，因此是访问不到，但是确实被继承下去了
//    cout << sizeof(Son) << endl;
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


//继承中构造和析构顺序
//
//子类继承父类后，当创建子类对象，也会调用父类的构造函数
//问题：父类和子类的构造和析构顺序是谁先谁后？
class Base
{
public:
    Base()
    {
        cout << "Base的构造函数调用" << endl;
    }

    ~Base()
    {
        cout << "Base的析构函数调用" << endl;
    }


};

class Son :public Base
{
public:
    Son()
    {
        cout << "Son的构造函数调用" << endl;
    }

    ~Son()
    {
        cout << "Son的析构函数调用" << endl;
    }


};

void test01()
{
//    Base b;


    //继承中的构造和析构顺序如下：
    //先构造父类，再构造子类，析构的顺序与构造的顺序相反
    Son s1;

}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}







