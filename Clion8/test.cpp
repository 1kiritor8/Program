//
// Created by 27292 on 2024/11/30.
//
#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    int *p1 = new int;
//    *p1 = 10;
//
//    int* p2 = new int[10];
//    for(int i = 0;i<10;i++)
//    {
//        p2[i] = i+1;
//    }
//
//    cout << *p1 << endl;
//    for(int i = 0;i<10;i++)
//    {
//        cout << p2[i] << endl;
//    }
//
//    delete p1;
//    delete[] p2;
//    p1 = NULL;
//    p2 = NULL;


//    int* pArr = new int[5] {1,3,5,7,9};
//    int* pNewArr = new int[4];
//
//    for(int i = 0;i<5;i++)
//    {
//        if(i == 2)
//        {
//            continue;
//        }
//
//        if(i > 2)
//        {
//            pNewArr[i-1] = pArr[i];
//        }
//        else
//        {
//            pNewArr[i] = pArr[i];
//        }
//    }
//
//    delete[] pArr;
//    pArr = NULL;
//
//    for(int i = 0;i<4;i++)
//    {
//        cout << pNewArr[i] << endl;
//    }
//
//    delete[] pNewArr;
//    pNewArr = NULL;


    int* p1 = new int[10] {3,5,1,11,99,66,22,2,8,6};
    int* p2 = new int[8];

    int i = 0;
    for(i = 0;i < 10;i++)
    {
        if(i == 0 || i == 5)
        {
            continue;
        }

        if(i <5)
        {
            p2[i-1] = p1[i];
        }
        if(i > 5)
        {
            p2[i-2] = p1[i];
        }
    }

    for(i = 0;i < 8;i++)
    {
        cout << p2[i] << endl;
    }
    return 0;
}














