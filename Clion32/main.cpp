#include "iostream"
#include "windows.h"
#include <string>

using namespace std;

//  友元
//在程序里，有些私有属性也想让类外特殊的一些函数或者类进行访问，就需要用到友元的技术
//友元的目的就是让一个函数或者类访问另一个类中私有成员
//友元的关键字为   friend
//友元的三种实现
//1·全局函数做友元

//建筑物类
//class Building
//{
//    //goodGay全局函数是Building好朋友，可以访问Building中私有成员
//    friend void goodGuy(Building* building);
//public:
//    Building()
//    {
//        m_SettingRoom = "客厅";
//        m_BedRoom = "卧室";
//
//    }
//public:
//    string m_SettingRoom;   //客厅
//
//private:
//    string m_BedRoom;   //卧室
//
//};
//
////全局函数
//void goodGuy(Building* building)
//{
//    cout << "好基友全局函数 正在访问：" << building->m_SettingRoom << endl;
//
//    cout << "好基友全局函数 正在访问：" << building->m_BedRoom << endl;
//
//}
//
//void test01()
//{
//    Building building;
//    goodGuy(&building);
//
//}

//2·类做友元
//class Building;
//
//class GoodGay
//{
//public:
//
//    GoodGay();
//
//    void visit();
//
//    Building* building;
//
//};
//
//class Building
//{
//    friend class GoodGay;
//
//public:
//
//    Building();
//
//public:
//
//    string m_SettingRoom;
//
//private:
//
//    string m_BedRoom;
//
//};
//
////类外写成员函数
//Building::Building()
//{
//    m_SettingRoom = "客厅";
//    m_BedRoom = "卧室";
//
//}
//
//GoodGay::GoodGay()
//{
//    building = new Building;
//
//}
//
//void GoodGay::visit()
//{
//    cout << "好基友类正在访问：" << building->m_SettingRoom << endl;
//    cout << "好基友类正在访问：" << building->m_BedRoom << endl;
//
//}
//
//void test01()
//{
//    GoodGay gg;
//    gg.visit();
//
//
//}

//3·成员函数做友元
class Building;

class GoodGay
{

public:

    GoodGay();

    void visit();   //可以访问私有成员
    void visit2();  //不能访问私有成员

    Building* building;

};

class Building
{
    //告诉编译器GoodGay类下的visit成员函数作为本类的好朋友，可以访问私有成员
    friend void GoodGay::visit();

public:
    Building();

public:

    string m_SettingRoom;

private:

    string m_BedRoom;

};

//类外实现成员函数
Building::Building()
{
    m_SettingRoom = "客厅";
    m_BedRoom = "卧室";

}

GoodGay::GoodGay()
{
    building = new Building;

}

void GoodGay::visit()
{
    cout << "visit函数正在访问：" << building->m_SettingRoom << endl;
    cout << "visit函数正在访问：" << building->m_BedRoom << endl;

}

void GoodGay::visit2()
{
    cout << "visit2函数正在访问：" << building->m_SettingRoom << endl;
//    cout << "visit函数正在访问：" << building->m_BedRoom << endl;

}

void test01()
{
    GoodGay gg;
    gg.visit();
    gg.visit2();

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}












