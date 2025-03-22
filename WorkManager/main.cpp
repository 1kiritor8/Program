#include "workerManager.h"
//#include "worker.h"
//#include "employee.h"
//#include "manager.h"
//#include "boos.h"

using namespace std;

int main()
{
    SetConsoleOutputCP(CP_UTF8);

//    //测试代码
//    Worker* worker = NULL;
//    worker = new Employee(1,"张三",1);
//    worker->showInfo();
//    delete worker;
//
//    worker = new Manager(2,"李四",2);
//    worker->showInfo();
//    delete worker;
//
//    worker = new Boss(3,"王五",3);
//    worker->showInfo();
//    delete worker;


    WorkerManager wm;
    int choice = 0;
    while(1)
    {
        wm.Show_Menu();
        cout << "请输入您的选择：" << endl;
        cin >> choice;
        switch(choice)
        {
            case 退出系统:
                wm.exitSystem();
                break;
            case 添加职工:
                wm.Add_Emp();
                break;
            case 显示职工:
                wm.show_Emp();
                break;
            case 删除职工:
                wm.Del_Emp();
                break;
            case 修改职工:
                wm.Mod_Emp();
                break;
            case 查找职工:
                wm.Find_Emp();
                break;
            case 排序职工:
                wm.Sort_Emp();
                break;
            case 清空所有文档:
                wm.Clean_File();
            default:
                system("cls");
                break;
        }
    }

    return 0;
}
