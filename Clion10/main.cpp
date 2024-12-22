#include <iostream>
#include "windows.h"
using namespace std;

struct Student
{
    string name;
    string major_code = "003032";
    int dormitory_num = 1;
};

struct Student1
{
    string name;
    int age;
    string gender;
};

int main()
{
    SetConsoleOutputCP(CP_UTF8);

//    Student s1 = {"周杰轮"};;
//    Student s2 = {"凌俊杰","003001",3};
//
//    cout << "学生1的姓名" << s1.name << endl;
//    cout << "学生1的专业代码" << s1.major_code << endl;
//    cout << "学生1的宿舍楼号" << s1.dormitory_num << endl;
//    cout << endl;
//    cout << "学生2的姓名" << s2.name << endl;
//    cout << "学生2的专业代码" << s2.major_code << endl;
//    cout << "学生2的宿舍楼号" << s2.dormitory_num << endl;


//    Student1 arr[3];
//    arr[0] = {"周杰轮",11,"男"};
//    arr[1] = {"林俊接",11,"男"};
//    arr[2] = {"蔡依琳",11,"女"};
//
//    for(int i = 0;i < 3;i++)
//    {
//        cout << arr[i].name <<endl;
//        cout << arr[i].age <<endl;
//        cout << arr[i].gender <<endl;
//        cout << endl;
//    }

    Student s1 = {"凌俊杰","003001",3};
    Student* p1 = &s1;

    cout << p1->name << endl;
    cout << p1->major_code << endl;
    cout << p1->dormitory_num << endl;

    Student* p2 = new Student {"周杰伦","003002",4};
    cout << p2->name << endl;
    cout << p2->major_code << endl;
    cout << p2->dormitory_num << endl;

    delete p2;
    p2 = NULL;
    
    return 0;
}
