//
// Created by 27292 on 2024/11/27.
//
//#include "iostream"
//#include "windows.h"
//using namespace std;
//
//
//enum CoLor
//{
//    RED,
//    GREEN,
//    BLUE
//};
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
//    //特点1：任意类型均可构建数组
//    cout<<"特点1：任意类型均可构建数组"<<endl;
//    float v1[] = {1.1,2.2,3.3,4.4,5.5};
//    double v2[] = {1.1,2.2,3.3,4.4,5.5};
//    char v3[] = {'a','b',1,2,3};
//    string v4[] = {"林志铃","蔡依临”,“刘亦飞"};
//    bool v5[] = {true,0,1,true,false};
//    CoLor v6[] ={RED, GREEN, BLUE, GREEN, BLUE};
//    cout << "float数组的第一个元素：" << v1[0] << endl;
//    cout << "double数组的第一个元素：" << v2[0] << endl;
//    cout << "char数组的第一个元素：" << v3[0] << endl;
//    cout << "string数组的第一个元素：" << v4[0] << endl;
//    cout << "bool数组的第一个元素：" << v5[0] << endl;
//    cout << "枚举数组的第一个元素：" << v6[0] << endl;
//
//    //特点2：固定大小（无边界检查）
//    cout << "特点2：固定大小（无边界检查）" << endl;
//    int v7[] = {1,2,3,4,5};
////    cout << "访问v7数组的10号下标：" << v7[10] << endl;
////    v7[100] = 10;
//    cout << endl;
//
//    //特点3：内存连续且有序，可通过 sizeof（数组）/sizeof（数组元素）得到数组长度
//    cout << "特点3：内存连续且有序---------------------" << endl;
//    cout << "v7数组的第一个元素是：" << v7[0] << endl;
//    cout << "v7数组的第一个元素是：" << v7[0] << endl;
//    cout << "v7数组的第一个元素是：" << v7[0] << endl;
//    cout << "v7数组空间占用大小：" << sizeof(v7) << "字节" << endl;
//    cout << "v7数组第一个元素的空间占用大小：" << sizeof(v7[0]) << "字节" << endl;
//    cout << "v7数组有" << sizeof(v7)/sizeof(v7[0]) << "个元素：" << endl;
//    cout << endl;
//
//    //特点4：元素值可以修改
//    cout << "特点4：元素值可以修改------------------" << endl;
//    int v8[] = {1,2,3,4,5};
//    cout << "修改之前，v8下标为0的元素是：" << v8[0] << endl;
//    cout << "修改之前，v8下标为1的元素是：" << v8[1] << endl;
//    v8[0] = 11;
//    v8[1] = 66;
//    cout << "经过修改，v8下标为0的元素是：" << v8[0] << endl;
//    cout << "经过修改，v8下标为1的元素是：" << v8[1] << endl;
//    cout<<endl;
//
//    //特点5：数组变量本身不记录数据
//    cout << "特点5：数组变量本身不记录数据" << endl;
//    int v9[] = {1,2,3,4,5};
//    cout << "直接cout v9这个变量：" << v9 << endl;
//    cout << endl;
//    //v9变量本身记录的是内存地址，这个地址是v9的0号元素的地址
//
//    return 0;
//}


#include "iostream"
#include "windows.h"
using namespace std;


int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int arr[] = {1,2,3,4,5};

    int i = 0;
    while(i < sizeof(arr)/sizeof(arr[0]))
    {
        cout << "while循环取出数组内容：" << arr[i] << endl;
        i++;
    }

    for(i = 0;i < sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout << "for循环取出数组内容：" << arr[i] << endl;
    }

    for(int element: arr)
    {
        cout << "for循环高级用法取出数组内容：" << element << endl;
    }


    return 0;
}






















