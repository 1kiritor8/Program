//#include <iostream>
//#include "windows.h"
//
//using namespace std;
//
////  纯虚函数和抽象类
////在多态中，通常父类中虚函数的实现是毫无意义的，主要都是调用子类重写的内容
////因此可以将虚函数改为纯虚函数
////纯虚函数语法：virtual返回值类型函数名（参数列表）=θ；
////当类中有了纯虚函数，这个类也称为抽象类
////抽象类特点：
////1·无法实例化对象
////2.子类必须重写抽象类中的纯虚函数，否则也属于抽象类
//class Base
//{
//public:
//
//    //纯虚函数
//    virtual void func() = 0;
//
//
//};
//
//class Son :public Base
//{
//
//public:
//
//    virtual void func()
//    {
//        cout << "func函数调用" << endl;
//
//    }
//
//
//};
//
//void test01()
//{
////    Base b;//抽象类是无法实例化对象的
////    new Base;//抽象类是无法实例化对象的
//
////    Son s;//子类必须重写父类中的纯虚函数,否则无法实例化对象
//    Base* base = new Son;
//    base->func();
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


#include <iostream>
#include "windows.h"

using namespace std;

//多态案例二 —— 制作饮品
//案例描述：
//制作饮品的大致流程为：煮水－冲泡——倒入杯中——加入辅料
//利用多态技术实现本案例，提供抽象制作饮品基类，提供子类制作咖啡和茶叶
class AbstractDrinking
{

public:

    virtual void Boil() = 0;

    virtual void Brew() = 0;

    virtual void PourInCup() = 0;

    virtual void PutSomething() = 0;

    void makeDrink()
    {
        Boil();
        Brew();
        PourInCup();
        PutSomething();

    }


};

class Coffee :public AbstractDrinking
{
public:

    virtual void Boil()
    {
        cout << "煮农夫山泉" << endl;
    }

    virtual void Brew()
    {
        cout << "冲泡咖啡" << endl;
    }

    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    virtual void PutSomething()
    {
        cout << "加入糖和牛奶" << endl;
    }


};

class Tea :public AbstractDrinking
{
public:

    virtual void Boil()
    {
        cout << "煮矿泉水" << endl;
    }

    virtual void Brew()
    {
        cout << "冲泡茶叶" << endl;
    }

    virtual void PourInCup()
    {
        cout << "倒入杯中" << endl;
    }

    virtual void PutSomething()
    {
        cout << "加入柠檬" << endl;
    }


};

void doWork(AbstractDrinking* abs)  //AbstractDrinking* abs = new Coffee
{
    abs->makeDrink();
    delete abs;

}

void test01()
{
    //制作咖啡
    doWork(new Coffee);
    cout << "-----------------------------" << endl;
    //制作茶叶
    doWork(new Tea);

}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}















