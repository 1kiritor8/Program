#include "iostream"
#include "windows.h"
#include "string"

using namespace std;

//  多态案例一-计算器类
//案例描述：
//分别利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//多态的优点：
//1.代码组织结构清晰
//2.可读性强
//3·利于前期和后期的扩展以及维护

//普通写法
class Calculator
{
public:

    int getResult(string oper)
    {
        if(oper == "+")
        {
            return m_Num1 + m_Num2;
        }
        else if(oper == "-")
        {
            return m_Num1 - m_Num2;
        }
        else if(oper == "*")
        {
            return m_Num1 * m_Num2;
        }


    }

    int m_Num1;
    int m_Num2;

};

void test01()
{
    Calculator c;
    c.m_Num1 = 10;
    c.m_Num2 = 10;

    cout << c.m_Num1 << " + " << c.m_Num2 << " = " << c.getResult("+") << endl;
    cout << c.m_Num1 << " - " << c.m_Num2 << " = " << c.getResult("-") << endl;
    cout << c.m_Num1 << " * " << c.m_Num2 << " = " << c.getResult("*") << endl;

}

//利用多态实现计算器
class AbstractCalculator
{
public:
    virtual int getResult()
    {
        return 0;
    }

    int m_Num1;
    int m_Num2;

};

class AddCalculator :public AbstractCalculator
{
public:

    virtual int getResult()
    {
        return m_Num1 + m_Num2;
    }

};

class SubCalculator :public AbstractCalculator
{
public:

    virtual int getResult()
    {
        return m_Num1 - m_Num2;
    }

};

class MulCalculator :public AbstractCalculator
{
public:

    virtual int getResult()
    {
        return m_Num1 * m_Num2;
    }

};

void test02()
{
    AbstractCalculator* abc = new AddCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;

    cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new SubCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;

    cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

    abc = new MulCalculator;
    abc->m_Num1 = 100;
    abc->m_Num2 = 100;

    cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResult() << endl;
    delete abc;

}


int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}