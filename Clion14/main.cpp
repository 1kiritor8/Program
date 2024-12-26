#include <iostream>
#include "windows.h"

using namespace std;

void my_swap(int arr[],int length)
{
    int tmp = 0;
    for(int i = 0;i < length -1;i++)
    {
        for(int j = i;j< length;j++)
        {
            if(arr[i] > arr[j])
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

void switch_num(int x,int y)
{
    int tmp = x;
    x = y;
    y = tmp;
}

void switch_num1(int* x,int* y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void switch_num2(int& x,int& y)
{
    int tmp = x;
    x = y;
    y = tmp;
}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    int arr[10] = {1,3,5,7,9,2,4,6,8,10};
//    int length = sizeof(arr)/sizeof(arr[0]);
//    my_swap(arr,10);
//    for(int i = 0;i < 10;i++)
//    {
//        cout << arr[i] << endl;
//    }


//    int a = 10;
//    int& b = a;
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//    a = 20;
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//    b = 30;
//    cout << "a=" << a << endl;
//    cout << "b=" << b << endl;
//
//
//    double d1 = 11.11;
//    double& d2 = d1;
//    cout << "d1=" << d1 << endl;
//    cout << "d2=" << d2 << endl;
//    d1 = 22.22;
//    cout << "d1=" << d1 << endl;
//    cout << "d2=" << d2 << endl;
//    d2 = 33.33;
//    cout << "d1=" << d1 << endl;
//    cout << "d2=" << d2 << endl;


    int a = 10;
    int b = 20;
    switch_num(a,b);
    cout << "函数switch_num中a=" << a << "," << "b=" << b << endl;

    switch_num1(&a,&b);
    cout << "函数switch_num1中a=" << a << "," << "b=" << b << endl;

    switch_num2(a,b);
    cout << "函数switch_num2中a=" << a << "," << "b=" << b << endl;


    return 0;
}
