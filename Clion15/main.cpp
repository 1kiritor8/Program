#include <iostream>
#include "windows.h"

using namespace std;

int* add(int x,int y)
{
    static int sum;
    sum = x + y;

    return &sum;
}

int* Add(int x,int y)
{
    int* sum = new (int);
    *sum = x + y;

    return sum;
}

int* search_max_num1(int* str,int length)
{
    int i = 0;
    static int max_num = str[i];
    for(i = 0;i < length - 1;i++)
    {
        for(int j = i + 1;j < length;j++)
        {
            if (str[i] < str[j])
            {
                max_num = str[j];
            }
        }
    }

    return &max_num;
}
int* search_max_num2(int* str,int length)
{
    int i = 0;
    int* max_num = new int;
    *max_num = str[i];
    for(i = 0;i < length - 1;i++)
    {
        for(int j = i + 1;j < length;j++)
        {
            if (str[i] < str[j])
            {
                *max_num = str[j];
            }
        }
    }

    return max_num;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    int* result1 = add(1,2);
//    cout << *result1 << endl;
//
//    int* result2 = Add(1,2);
//    cout << *result2 << endl;
//    delete result2;


    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(arr)/sizeof(arr[0]);

    int* result3 = search_max_num1(arr,length);
    cout << "search_max_num1的结果：" << *result3 << endl;

    int* result4 = search_max_num2(arr,length);
    cout << "search_max_num2的结果：" << *result4 << endl;




    delete result4;

    return 0;
}
