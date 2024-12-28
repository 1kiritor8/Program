#include <iostream>
#include "windows.h"
#include "string"
#include "ctime"

using namespace std;

struct Student
{
    string name;
    int score;
};

struct Teather
{
    string name;
    Student Array[5];
};

void allocatSpace(Teather *teather,int length)
{
    for(int i=0;i<length;i++)
    {
        string teacherName = "teacher_";
        string studentName = "student_";
        string allow = "ABCDE";
        for(int j=0;j<length;j++)
        {
            teather[i].name = teacherName;
            teather[i].name += allow[i];
            for(int j = 0;j<5;j++)
            {
                teather[i].Array[j].name = studentName;
                teather[i].Array[j].name += allow[j];
                teather[i].Array[j].score = rand() % 61 + 40;
            }
        }
    }
}

void printf_All(Teather *teather,int length)
{
    for(int i=0;i<length;i++)
    {
        cout << "老师姓名：" << teather[i].name << endl;
        for(int j = 0;j < 5;j++)
        {
            cout << "\t学生姓名：" <<teather[i].Array[j].name <<
            "学生成绩：" << teather[i].Array[j].score << endl;
        }
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    srand((unsigned int)time(NULL));
    Teather teather[3];
    int length = sizeof(teather) / sizeof(teather[0]);
    allocatSpace(teather,length);
    printf_All(teather,length);
    
    return 0;
}
