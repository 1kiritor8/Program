//
// Created by 27292 on 2024/11/28.
//
//#include "iostream"
//#include "windows.h"
//#include "random"
//#include <cstdio>
//using namespace std;
//
//
//int get_random_number(int min, int max)
//{
//    random_device rd;
//    mt19937 gen(rd());
//    uniform_int_distribution<> dis(min, max);
//    return dis(gen);
//}
//
//int Add(int a, int b)
//{
//    return a + b;
//}
//
//void Search(int* str)
//{
//    for (int i = 0; i < 9 - 1; i++)
//    {
//        for (int j = 0; j < 9 - 1 - i; j++)
//        {
//            if (str[j] > str[j + 1])
//            {
//                int temp = str[j];
//                str[j] = str[j + 1];
//                str[j + 1] = temp;
//            }
//        }
//    }
//
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    int i = 0;
//    int arr[10] = { 0 };
//
//    for (i = 0; i < 10; i++)
//    {
//        arr[i] = get_random_number(1, 100);
//    }
//    int length = sizeof(arr)/sizeof(arr[0]);
//    int sub = 0;
//
//    Search(arr);
//    sub = Add(arr[0],arr[length-1]);
//
//    cout << sub << endl;
//
//    return 0;
//}


#include "iostream"
using namespace std;


int main()
{
    int v1[2][3] = {{1,2,3},{4,5,6}};

//    for(int i = 0;i < sizeof(v1) / sizeof(v1[0]);i++)
//    {
//        //v1[0] -> {1 , 2 , 3 };
//        //v1[1] -> {4 , 5 , 6 };
//        for(int j =0;j < sizeof(v1[0]) / sizeof(v1[0][0]);j++)
//        {
//            //v1[0[0] , v1[0][1] , v1[0][2]};
//            //v1[1[0] , v1[1][1] , v1[1][2]};
//            cout << v1[i][j] << endl;
//        }
//    }


    int v2[2][2][3] = {\
                        {
                             {1, 2, 3},
                             {4, 5, 6}
                             },
                        {
                             {7,8,9},
                             {10,11,12}
                             }
                      };

    for(int i = 0;i < sizeof(v2) / sizeof(v2[0]);i++)
    {
        //v2[0] ->{
        //            {1, 2, 3},
        //            {4, 5, 6}
        //        }
        //v2[1] ->{
        //          {7, 8, 9},
        //          {10, 11, 12}
        //          }
        //        };

        for(int j = 0;j < sizeof(v2[0]) / sizeof(v2[0][0]);j++)
        {
            //v2[0][0] -> {1, 2, 3}
            //v2[0][1] -> {4, 5, 6}
            //v2[1][0] -> {7, 8, 9}
            //v2[1][1] -> {10, 11, 12}
            for(int k = 0;k < sizeof(v2[0][0]) / sizeof(v2[0][0][0]);k++)
            {
                //v2[0][0][0] -> 1
                cout << v2[i][j][k] << endl;
            }
        }
    }

    return 0;
}





















