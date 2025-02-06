#include "iostream"
#include "windows.h"

using namespace std;


//  继承方式
//继承的语法：class子类：继承方式父类
//继承方式一共有三种：
class Base1
{

public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;

};
//1·公共继承
class Son1 : public Base1
{
public:
    void func()
    {
        m_A = 10;//父类中的公共权限成员到子类中依然是公共权限
        m_B = 10;//父类中的保护权限成员到子类中依然是保护权限
//        m_C = 10;//父类中的私有权限成员子类访问不到

    }

};

void test01()
{
    Son1 s1;
    s1.m_A = 100;
//    s1.m_B = 100;//到Son1中m_B是保护权限类外访问不到

}

//2·保护继承
class Son2 : protected Base1
{
public:
    void func()
    {
        m_A = 100;//父类中的公共成员到子类中变为保护权限
        m_B = 200;//父类中的保护权限成员到子类中依然是保护权限
//        m_C = 100;//父类中的私有权限成员子类访问不到

    }

};

void test02()
{
    Son2 s2;
//    s2.m_A = 100;//在Son2中m_A变为保护权限，因此类外访问不到
//    s2.m_B = 100;//在Son2中m_B保护权限不可以访问
//    s2.m_C = 100;//在Son2中m_C私有权限不可以访问

}

//3·私有继承
class Son3 : private Base1
{
public:
    void func()
    {
        m_A = 100;//父类中公共成员到子类中变为私有成员
        m_B = 100;//父类中保护成员到子类中变为私有成员
//        m_C = 100;//父类中私有成员，子类访问不到

    }

};

class GrandSon3 : public Son3
{
public:
    void func()
    {
//        m_A = 100;//到了GrandSon3中m_A变为私有，即使是儿子，也是访问不到
//        m_B = 100;//到了GrandSon3中m_A变为私有，即使是儿子，也是访问不到
//        m_C = 100;

    }
};

void test03()
{
    Son3 s3;
//    s3.m_A = 1000;//到Son3中变为私有成员类外访问不到
//    s3.m_B = 1000;//到Son3中变为私有成员类外访问不到
//    s3.m_C = 1000;

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    return 0;
}