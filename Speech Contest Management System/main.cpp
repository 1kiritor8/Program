#include "iostream"
#include "speechManager.h"
#include "string"
#include "ctime"

using namespace std;

#define TEST

//1.1比赛规则
//·学校举行一场演讲比赛，共有12个人参加。比赛共两轮，第一轮为淘汰赛，第二轮为决赛。
//·每名选手都有对应的编号，如10001～10012
//·比赛方式：分组比赛，每组6个人；
//·第一轮分为两个小组，整体按照选手编号进行抽签后顺序演讲。
//·十介评委分别给每名选手打分，去除最高分和最低分，求的平均分为本轮选手的成绩
//·当小组演讲完后，淘汰组内排名最后的三个选手，前三名晋级，进入下一轮的比赛。
//·第二轮为决赛，前三名胜出
//·每轮比赛过后需要显示晋级选手的信息

//1.2程序功能
//·开始演讲比赛：完成整届比赛的流程，每个比赛阶段需要给用户一个提示，用户按任意键后继续下一个阶段
//·查看往届记录：查看之前比赛前三名结果，每次比赛都会记录到文件中，文件用.cSV后缀名保存
//·清空比赛记录：将文件中数据清空
//·退出比赛程序：可以退出当前程序

//6、演讲比赛功能
//6.1功能分析
//比赛流程分析：
//抽签→开始演讲比赛→显示第一轮比赛结果→
//抽签→开始演讲比赛→显示前三名结果→保存分数
//6.2创建选手类
//选手类中的属性包含：选手姓名、分数
//头文件中创建speaker.h文件，并添加代码：

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    //创建随机数种子
    srand((unsigned int)time(NULL));

    //创建管理类对象
    SpeechManager sm;

#ifndef TEST

    for(map<int,Speaker>::iterator it = sm.m_Speaker.begin();it != sm.m_Speaker.end();it++)
    {
        cout << "编号为：" << it->first << " 姓名为：" << it->second.m_Name << " 分数：" << it->second.m_Score[0] << endl;
    }

#endif
    int choice = 0;

    while (true)
    {
        sm.show_Menu();
        cout << "请输入您的选择：" << endl;
        cin >> choice;

        switch (choice) {
            case 开始演讲比赛:
                sm.startSpeech();
                break;
            case 查看往届记录:
                sm.showRecord();
                break;
            case 清空比赛记录:
                sm.clearRecord();
                break;
            case 退出比赛程序:
                sm.exitSystem();
                break;
            default:
                system("cls");
                break;
        }
    }


    system("pause");
    return 0;
}
















