#include <iostream>
#include <Windows.h>
#include "fstream"
#include "string"
#include "student.h"
#include "teacher.h"
#include "manager.h"
#include "Identity.h"
#include "globalFile.h"

using namespace std;

//1.2身份简介
//分别有三种身份使用该程序
//学生代表：申请使用机房
//教师：审核学生的预约申请
//管理员：给学生、教师创建账号
//1.3机房简介
//机房总共有3间
//1号机房---最大容量20人
//2号机房---最容量50人
//3号机房---最多容量100人
//1.4申请简介
//申请的订单每周由管理员负责清空。
//学生可以预约未来一周内的机房使用，预约的日期为周一至周五，预约时需要选择预约时段（上午、下午）
//教师来审核预约，依据实际情况审核预约通过或者不通过
//1.5系统具体需求
//首先进入登录界面，可选登录身份有：
//学生代表
//老师
//管理员
//退出
//每个身份都需要进行验证后，进入子菜单
//学生需要输入学号、姓名、登录密码
//老师需要输入职工号、姓名、登录密码
//管理员需要输入：管理员姓名、登录密码
//学生具体功能
//申请预约-.-预约机房
//查看自身的预约-查看自己的预约状态
//查看所有预约…··查看全部预约信息以及预约状态
//取消预约取消自身的预约，预约成功或审核中的预约均可取消
//教师具体功能
//查看所有预约--查看全部预约信息以及预约状态
//审核预约对学生的预约进行审核
//注销登录退出登录
//管理员具体功能
//添加账号添加学生或教师的账号，需要检测学生编号或教师职工号是否重复
//查看账号可以选择查看学生或教师的全部信息
//查看机房---查看所有机房的信息
//清空预约清空所有预约记录
//注销登录退出登录

//进入学生子菜单
void studentMenu(Identity* &student) {
    while (true) {
        //调用学生子菜单
        student->operMenu();

        Student* stu = (Student*)student;

        int select = 0;
        cin >> select;

        if(select == 1) {
            //申请预约
            stu->applyOrder();
        }
        else if(select == 2) {
            //查看自身预约
            stu->showMyOrder();
        }
        else if(select == 3) {
            //查看所有预约
            stu->showAllOrder();
        }
        else if(select == 4) {
            //取消预约
            stu->cancalOrder();
        }
        else {
            //注销登录
            delete stu;
            cout << "注销成功！！！" << endl;
            system("pause");
            system("cls");
            return;

        }

    }

}

//进入教师子菜单
void teacherMenu(Identity* &teacher) {
    while (true) {
        //调用子菜单界面
        teacher->operMenu();

        Teacher* tea = (Teacher*)teacher;

        int select = 0;

        cin >> select;

        if(select == 1) {
            //查看所有预约
            tea->showAllOrder();
        }
        else if(select == 2) {
            //审核预约
            tea->validOrder();
        }
        else {
            delete teacher;
            cout << "注销成功！！！" << endl;
            system("pause");
            system("cls");
            return;
        }

    }

}

//进入管理员子菜单
void managerMenu(Identity* &manager) {
    while (true) {
        //调用管理员子菜单
        manager->operMenu();

        //将父类指针转为子类指针,调用子类里其他接口
        Manager* man = (Manager*)manager;

        int select = 0;
        //接受用户选项
        cin >> select;

        if(select == 1) {
            //添加账号
//            cout << "添加账号" << endl;
            man->addPerson();
        }
        else if(select == 2) {
            //查看账号
//            cout << "查看账号" << endl;
            man->showPerson();
        }
        else if(select == 3) {
            //查看机房信息
//            cout << "查看机房信息" << endl;
            man->showComputer();
        }
        else if(select == 4) {
            //清空预约信息
//            cout << "清空预约信息" << endl;
            man->clearFile();
        }
        else {
            //注销
            delete manager;//销毁堆区对象
            cout << "注销成功！！！" << endl;
            system("pause");
            system("cls");
            return;
        }

    }
}

//          操作文件名称          操作身份类型
void LoginIn(string fileName,int type) {
    //父类指针用于指向子类对象
    Identity *person = NULL;

    //读文件
    ifstream ifs;
    ifs.open(fileName,ios::in);

    //判断文件是否存在
    if(!ifs.is_open()) {
        cout << "文件不存在！！！" << endl;
        ifs.close();
        return;
    }

    //准备接受用户信息
    int id;
    string name;
    string pwd;

    //判断身份
    if(type == 学生登录) {
        cout << "请输入学号：" << endl;
        cin >> id;
    }
    else if(type == 教师登录) {
        cout << "请输入职工号：" << endl;
        cin >> id;
    }

    cout << "请输入用户名：" << endl;
    cin >> name;

    cout << "请输入密码：" << endl;
    cin >> pwd;

    if(type == 学生登录) {
        //学生身份验证
        int fId;//从文件中读取的Id号
        string fName;//从文件中读取的姓名
        string fPwd;//从文件中读取的密码
        while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
            //与用户输入信息做对比
            if(fId == id && fName == name && fPwd == pwd) {
                cout << "学生登录验证成功！！！" << endl;
                system("pause");
                system("cls");
                person = new Student(id,name,pwd);
                //进入学生子菜单
                studentMenu(person);
                return;

            }
        }

    }
    else if(type == 教师登录) {
        //教师身份验证
        int fId;
        string fName;
        string fPwd;
        while (ifs >> fId && ifs >> fName && ifs >> fPwd) {
            if (fId == id && fName == name && fPwd == pwd) {
                cout << "教师登录验证成功！！！" << endl;
                system("pause");
                system("cls");
                person = new Teacher(id, name, pwd);
                //进入教师子菜单
                teacherMenu(person);
                return;

            }
        }
    }
    else if(type == 管理员登录) {
        //管理员身份验证
        string fName;
        string fPwd;

        while (ifs >> fName && ifs >> fPwd) {
            if(name == fName && pwd == fPwd) {
                cout << "管理员验证登录成功！！！" << endl;
                system("pause");
                system("cls");

                person = new Manager(name,pwd);
                //进入管理员子菜单
                managerMenu(person);

                return;
            }
        }
    }

    cout << "验证登录失败！！！" << endl;
    system("pause");
    system("cls");

    return;
}

int main() {
    SetConsoleOutputCP(CP_UTF8);

    int select = 0;
    while (true) {
        cout << "=========== 欢迎来到传智播客机房预约系统 ===========" << endl;
        cout << endl << "请输入您的身份" << endl;
        cout << "\t\t--------------------------------\n";
        cout << "\t\t|                              |\n";
        cout << "\t\t|         1.学生代表           |\n";
        cout << "\t\t|                              |\n";
        cout << "\t\t|         2.老师               |\n";
        cout << "\t\t|                              |\n";
        cout << "\t\t|         3.管理员             |\n";
        cout << "\t\t|                              |\n";
        cout << "\t\t|         0.退出               |\n";
        cout << "\t\t|                              |\n";
        cout << "\t\t--------------------------------\n";
        cout << "请输入您的选择：";

        cin >> select;//接受用户选择

        switch (select) {   //根据用户选择实现不同接口
            case 学生代表:
                LoginIn(STUDENT_FILE,学生登录);
                break;
            case 教师:
                LoginIn(TEACHER_FILE,教师登录);
                break;
            case 管理员:
                LoginIn(ADMIN_FILE,管理员登录);
                break;
            case 退出:
                cout << "欢迎下次使用" << endl;
                system("pause");
                return 0;
                break;
            default:
                cout << "输入有误，请重新选择！！！" << endl;
                system("pause");
                system("cls");
                break;
        }
    }

    system("pause");
    return 0;
}
