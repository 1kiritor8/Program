//
// Created by 27292 on 2024/12/11.
//
#include "iostream"
#include "windows.h"
using namespace std;


void my_qsort(int* str,int n)
{
    int i = 0;
    int j = 0;
    int sum = 0;

    for(i = 0;i < n - 1;i++)
    {
        for(j = i;j < n;j++)
        {
            if(str[i] > str[j])
            {
                sum = str[i];
                str[i] = str[j];
                str[j] = sum;
            }
        }
    }
}

struct Sudent
{
    string name;
    int age;
    string gender;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    int* pArr = new int[5] {1,3,5,7,9};
//
//    int* pNewArr = new int[7];
//
//    int offset = 0;
//    for(int i = 0;i < 7;i++)
//    {
//        if(i == 1)
//        {
//            pNewArr[i] = 11;
//            offset++;
//            continue;
//        }
//        else if(i == 3)
//        {
//            pNewArr[i] = 66;
//            offset++;
//            continue;
//        }
//
//        pNewArr[i] = pArr[i-offset];
//    }
//
//    delete[] pArr;
//    pArr = NULL;
//
//    for(int i = 0;i < 7;i++)
//    {
//        cout << pNewArr[i] << endl;
//    }
//
//    delete[] pNewArr;
//    pNewArr = NULL;


//    int* pArr = new int[10] {3,5,1,11,99,66,22,2,8,6};
//
//    my_qsort(pArr,10);
//
//    for(int i = 0;i < 10;i++)
//    {
//        cout << pArr[i] << "  ";
//    }
//
//    delete[] pArr;
//    pArr = NULL;


    int n = 0;
    int i = 0;
    Sudent stu;
    cin >> n;

    for(i = 1;i <= n;i++)
    {
        cout << "正在录入第" << i << "个学生信息" << endl;
        cout << "请输入姓名：";
        cin >> stu.name;
        cout << "请输入年龄：";
        cin >> stu.age;
        cout << "请输入性别：";
        cin >> stu.gender;
    }

    return 0;
}