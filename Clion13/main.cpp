#include <iostream>
#include "windows.h"

using namespace std;

#define test 1
void switch_num1(int x,int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void switch_num2(int* x,int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void query_money(string* name,const int* money)
{
    cout << "----------查询余额----------"<<endl;
    cout << *name << "，您好，您的余额剩余：" << *money << "元" << endl;
}

void save_money(string* name,int* money,int num)
{
    cout << "----------存款----------" << endl;
    cout << *name << "，您好，您存款" << num << "元成功" << endl;
    //余额发生变更
    *money = *money + num;
    cout << *name << "，您好，您的余额剩余：" << *money << "元" << endl;
}

void get_money(string* name,int* money,int num)
{
    cout << "----------取款----------" << endl;
    cout << *name << "，您好，您取款" << num << "元成功" << endl;
    //余额发生变更
    *money = *money - num;
    cout << *name << "，您好，您的余额剩余：" << *money << "元" << endl;
}

int menu(string* name)
{
    cout << *name << "，您好，欢迎来到黑马银行ATM。请选择操作：" << endl;
    cout << "查询余额\t[输入1]" << endl;
    cout << "存款\t[输入2]" << endl;
    cout << "取款\t[输入3]" << endl;
    cout << "退出\t[输入4]" << endl;
    cout << "请输入您的选择：";
    int num;
    cin >> num;
    return num;
}

int main()
{
#ifdef test
    // 设置控制台输入和输出为 UTF-8 编码
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
#endif

//    int x = 1;
//    int y = 2;
//    switch_num1(x,y);
//    cout << x << "," << y << endl;
//
//    switch_num2(&x,&y);
//    cout << x << "," << y << endl;


    //1启动要求输入用户姓名
    string name;
    cout << "请输入您的用户名：" << endl;
    cin >> name;
    bool is_run = true;
    int money = 50000;
    while(is_run)
    {
        int select_num = menu(&name);
        int n = 0;
        //对用户输入做选择判断
        switch (select_num)
        {
            case 1:
                query_money(&name,&money);
                break;
            case 2:
                cout << "请输入存款金额：";
                cin >> n;
                save_money(&name,&money,n);
                break;
            case 3:
                cout << "请输入取款金额：";
                cin >> n;
                get_money(&name,&money,n);
                break;
            case 4:
                is_run = false;
                break;
            default:
                cout << "输入有误，请重新输入" << endl;
                break;
        }
    }

    return 0;
}
