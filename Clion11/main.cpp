#include <iostream>
#include "windows.h"
using namespace std;

struct Student
{
    string name;
    int age;
    string gender;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Student arr1[3] = {{"周杰轮"}, {"林俊接"}, {"王力洪"}};
    Student* p1 = arr1;

    cout << "数组中第一个元素记录的名字是：" << p1[0].name << endl;
    cout << "数组中第二个元素记录的名字是：" << p1[1].name << endl;
    cout << "数组中第三个元素记录的名字是：" << p1[2].name << endl;
    cout << endl;

    Student* p2 = new Student[3] {{"周杰轮"}, {"林俊接"}, {"王力洪"}};

    cout << "数组2中第一个元素记录的名字是：" << p2[0].name << endl;
    cout << "数组2中第二个元素记录的名字是：" << p2[1].name << endl;
    cout << "数组2中第三个元素记录的名字是：" << p2[2].name << endl;

    delete[] p2;
    p2 = NULL;

    return 0;
}
