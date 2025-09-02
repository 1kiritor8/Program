//
// Created by dixhuitieme on 2025/4/28.
//

#include "manager.h"

//默认构造
Manager::Manager() {

}

//有参构造
Manager::Manager(string name,string pwd) {
    //初始化管理员信息
    this->m_Name = name;
    this->m_Pwd = pwd;

    //初始化容器，并获取所有文件中学生、老师信息
    this->initVector();

    //初始化机房信息
    ifstream ifs;
    ifs.open(COMPUTER_FILE,ios::in);

    ComputerRoom com;
    while (ifs >> com.m_ComId && ifs >> com.m_MaxNum) {
        vCom.push_back(com);
    }

    ifs.close();
    cout << "机房的数量为：" << vCom.size() << endl;

}

//菜单界面
void Manager::operMenu() {
    cout << "欢迎管理员：" << this->m_Name << "登录！" << endl;
    cout << "\t\t----------------------------------\n";
    cout << "\t\t|                                |\n";
    cout << "\t\t|               1.添加账号       |\n";
    cout << "\t\t|                                |\n";
    cout << "\t\t|               2.查看账号       |\n";
    cout << "\t\t|                                |\n";
    cout << "\t\t|               3.查看机房       |\n";
    cout << "\t\t|                                |\n";
    cout << "\t\t|               4.清空预约       |\n";
    cout << "\t\t|                                |\n";
    cout << "\t\t|               0.注销登录       |\n";
    cout << "\t\t|                                |\n";
    cout << "\t\t----------------------------------\n";
    cout << "请选择您的操作：" << endl;
}

//添加账号
void Manager::addPerson() {
    cout << "请输入添加账号类型：" << endl;
    cout << "1.学生账号" << endl;
    cout << "2.教师账号" << endl;

    string fileName;//操作文件名
    string tip;//提示id号
    string errorTip;

    ofstream ofs;

    int select = 0;
    cin >> select;

    if(select == 1) {
        //添加学生账号
        fileName = STUDENT_FILE;
        tip = "请输入学号：";
        errorTip = "学号重复，请重新输入！！！";
    }
    else {
        fileName = TEACHER_FILE;
        tip = "请输入职工号：";
        errorTip = "职工号重复，请重新输入！！！";
    }

    //利用追加的方式写文件
    ofs.open(fileName,ios::out | ios::app);

    int id;
    string name;
    string pwd;

    cout << tip << endl;

    while (true) {
        cin >> id;
        bool ret = checkRepeat(id,select);
        if(ret) {
            //有重复
            cout << errorTip << endl;
        }
        else {
            break;
        }
    }

    cout << "请输入姓名：" << endl;
    cin >> name;

    cout << "请输入密码：" << endl;
    cin >> pwd;

    //向文件中添加数据
    ofs << id << " " << name << " " << pwd << " " << endl;
    cout << "添加成功！！！" << endl;

    system("pause");
    system("cls");

    ofs.close();

    //调用初始化容器接口，重新获取文件中的数据
    this->initVector();

}

void printStudent(Student& s) {
    cout << "学号：" << s.m_Id << " 姓名：" << s.m_Name << " 密码：" << s.m_Pwd << endl;
}

void printTeacher(Teacher& t) {
    cout << "职工号：" << t.m_EmpId << " 姓名：" << t.m_Name << " 密码：" << t.m_Pwd << endl;
}

//查看账号
void Manager::showPerson() {
    cout << "请选择查看内容：" << endl;
    cout << "1.查看所有学生" << endl;
    cout << "2.查看所有教师" << endl;

    int select = 0;
    cin >> select;

    if(select == 1) {
        //查看学生
        cout << "所有学生信息如下：" << endl;
        for_each(vStu.begin(),vStu.end(), printStudent);
    }
    else {
        //查看教师
        cout << "所有教师信息如下：" << endl;
        for_each(vTea.begin(),vTea.end(), printTeacher);
    }

    system("pause");
    system("cls");

}

//查看机房信息
void Manager::showComputer() {
    cout << "机房信息如下：" << endl;

    for(vector<ComputerRoom>::iterator it = vCom.begin();it != vCom.end();it++) {
        cout << "机房的编号为：" << it->m_ComId << "  机房的最大容量为：" << it->m_MaxNum << endl;

    }

    system("pause");
    system("cls");

}

//清空预约记录
void Manager::clearFile() {
    ofstream ofs(ORDER_FILE,ios::trunc);
    ofs.close();

    cout << "清空成功！！！" << endl;
    system("pause");
    system("cls");

}

//初始化容器
void Manager::initVector() {
    //确保容器为空
    vStu.clear();
    vTea.clear();

    //读取学生信息
    ifstream ifs;
    ifs.open(STUDENT_FILE,ios::in);
    if(!ifs.is_open()) {
        cout << "文件读取失败！！！" << endl;
        return;
    }

    Student s;
    while (ifs >> s.m_Id && ifs >> s.m_Name && ifs >> s.m_Pwd) {
        vStu.push_back(s);
    }

    cout << "当前学生数量为：" << vStu.size() << endl;
    ifs.close();

    //读取老师信息
    ifs.open(TEACHER_FILE,ios::in);
    if(!ifs.is_open()) {
        cout << "文件读取失败！！！" << endl;
        return;
    }

    Teacher t;
    while (ifs >> t.m_EmpId && ifs >> t.m_Name && ifs >> t.m_Pwd) {
        vTea.push_back(t);
    }

    cout << "当前教师数量为：" << vTea.size() << endl;
    ifs.close();

}

//检测重复          学号、职工号  类型
bool Manager::checkRepeat(int id,int type) {
    if(type == 1) {
        //检测学生
        for(vector<Student>::iterator it = vStu.begin();it != vStu.end();it++) {
            if(id == it->m_Id) {
                return true;
            }

        }

    }
    else {
        //检测老师
        for(vector<Teacher>::iterator it = vTea.begin();it != vTea.end();it++) {
            if(id == it->m_EmpId) {
                return true;
            }

        }

    }

    return false;
}