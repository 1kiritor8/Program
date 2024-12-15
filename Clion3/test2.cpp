//
// Created by 27292 on 2024/11/25.
//
//#include "iostream"
//using namespace std;
//
//int main()
//{
//    int row = 1;
//    int col = 0;
//    while(row<=9)
//    {
//        for(col=1;col<=row;col++)
//        {
//            cout << col << "*" << row << "=" << col*row << "\t";
//        }
//        cout << endl;
//        row++;
//    }
//    return 0;
//}


//#include "iostream"
//using namespace std;
//
//
//int main()
//{
////    int i = 0;
////    for(i = 0;i < 20;i++)
////    {
////        if(i % 2 == 0)
////        {
////            continue;
////        }
////        cout << i << endl;
////    }
//
//    int i = 0;
//    for(i = 0;;i++)
//    {
//        cout << i << endl;
//        if(i == 20)
//        {
//            break;
//        }
//    }
//    return 0;
//}


#include "iostream"
#include "windows.h"
#include "random"
using namespace std;


int get_random_number(int min, int max)
{
    SetConsoleOutputCP(CP_UTF8);
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main()
{
    int day = 0;
    for(day = 1;day <= 30;day++)
    {
        int num = get_random_number(1,10);
        int is_argue = get_random_number(1,10);
        int unhappy = get_random_number(1,50);
        int is_unhappy = get_random_number(1,50);
        cout << "今天是表白的第" << day << "天。" << endl;
        cout << "小美这是我送你的花！" << endl;
        if(is_argue == num)
        {
            break;
        }
        if(is_unhappy == unhappy)
        {
           continue;
        }
        cout << "小美，我喜欢你！" << endl;
        cout << "小美你可以和我一起去看电影吗？" << endl;

    }
    return 0;
}





