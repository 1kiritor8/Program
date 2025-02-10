//#include <iostream>
//#include "windows.h"
//
//using namespace std;
//
////函数模板注意事项
////注意事项：
//template<typename T>
//void mySwap(T& x,T& y)
//{
//    T temp = x;
//    x = y;
//    y = temp;
//}
////1.自动类型推导，必须推导出一致的数据类型T，才可以使用
//void test01()
//{
//    int a = 10;
//    int b = 20;
//    char c = 'c';
//
//    mySwap(a,b);
////    mySwap(a,c);//error   推导不出一致的T类型
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//}
////2.模板必须要确定出T的数据类型，才可以使用
//template<typename T>
//void func()
//{
//    cout << "func的调用" << endl;
//}
//
//void test02()
//{
//    func<int>();
//}
//
//int main()
//{
//    SetConsoleOutputCP(CP_UTF8);
////    test01();
//    test02();
//
//    return 0;
//}


#include <iostream>
#include "windows.h"

using namespace std;

//函数模板案例
//案例描述：
//·利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//·排序规则从大到小，排序算法为选择排序
//分别利用char数组和int数组进行测试
template<typename T>
void mySwap(T& x,T& y)
{
    T temp = x;
    x = y;
    y = temp;
}

template<typename T>
void mySort(T arr[],int len)
{
    for(int i = 0;i < len;i++)
    {
        int max = i;
        for(int j = i + 1;j < len;j++)
        {
            if(arr[max] < arr[j])
            {
                max = j;
            }
        }
        if(max != i)
        {
            mySwap(arr[max],arr[i]);
        }
    }
}

template<typename T>
void printArray(T arr[],int len)
{
    for(int i = 0;i < len;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test01()
{
    char charArr[] = "badcfe";
    int num = sizeof(charArr) / sizeof(charArr[0]);
    mySort(charArr,num);

    printArray(charArr,num);
}

void test02()
{
    int intArr[] = {7,5,1,3,9,2,4,6,8};
    int num = sizeof(intArr) / sizeof(intArr[0]);
    mySort(intArr,num);

    printArray(intArr,num);
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
























