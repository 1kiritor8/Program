//
// Created by 27292 on 2024/11/26.
//
//#include "iostream"
//#include "windows.h"
//#include "random"
//using namespace std;
//
//
//int get_random_number(int min, int max)
//{
//    SetConsoleOutputCP(CP_UTF8);
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<> dis(min, max);
//    return dis(gen);
//}
//
//int main()
//{
//    int money = 10000;
//    int i = 1;
//    while(i < 21)
//    {
//        int num = get_random_number(1,10);
//        if(num < 5)
//        {
//            cout << "员工" << i << "，绩效分" << num << ",低于5，不发工资，下一位" << endl;
//        }
//        if(money == 0)
//        {
//            cout << "向员工" << i-1 << "发放工资" << 1000 << "账户余额还剩0元。" << endl;
//            break;
//        }
//        if(num >= 5)
//        {
//            money -= 1000;
//        }
//        i++;
//        cout << money << endl;
//    }
//    return 0;
//}


//#include "iostream"
//#include "windows.h"
//using namespace std;
//
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    a:
//    cout << "a" << endl;
//
//    b:
//    cout << "b" << endl;
//
////    goto a;
//
//    c:
//    cout << "c" << endl;
//
//    d:
//    cout << "d" << endl;
//
//
//    int i = 1;
//    loop:
//    cout << i << endl;
//    i++;
//    if(i <= 10)
//    {
//        goto loop;
//    }
//
//    return 0;
//}


#include "iostream"
#include "windows.h"
#include "random"
using namespace std;


int get_random_number(int min, int max)
{
    SetConsoleOutputCP(CP_UTF8);
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main()
{
    int num[10];
    int i = 0;
    int guess;
    while(i < 10)
    {
        num[i] = get_random_number(1, 10);
        cout << num[i] << endl;
        cin >> guess;
        if(num[i] == guess)
        {
            cout << num[i] << endl;
        }
        i++;
    }
    return 0;
}










