//
// Created by 27292 on 2024/11/23.
//
#include "iostream"
using namespace std;


//c++
// 主函数入口
int main()
{
    // 初始化整型变量num为0，用于后续循环控制
    int num=0;
    // 声明一个字符串变量name，用于存储用户输入的名字
    string name;

    // 提示用户输入名字并存储到变量name中
    cin >> name;
    // 输出用户输入的名字
    cout << name << endl;

    // 循环输出从0到9的数字
    while(num<10)
    {
        // 输出当前的数字
        cout << num << endl;
        // 数字自增，为下一次循环做准备
        num++;
    }

    // 程序正常结束，返回0表示无错误
    return  0;
}
