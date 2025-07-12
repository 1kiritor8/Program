//
// Created by dixhuitieme on 2025/4/14.
//

#ifndef SPEECH_CONTEST_MANAGEMENT_SYSTEM_SPEECHMANAGER_H
#define SPEECH_CONTEST_MANAGEMENT_SYSTEM_SPEECHMANAGER_H

#include "iostream"
#include "Windows.h"
#include <vector>
#include "map"
#include "speaker.h"
#include "algorithm"
#include "deque"
#include "functional"
#include "numeric"
#include "string"
#include "fstream"

using namespace std;

//设计演讲比赛管理类
class SpeechManager
{
public:

    SpeechManager();

    //菜单功能
    void show_Menu();

    //退出系统
    void exitSystem();

    //成员属性
    //保存第一轮比赛选手编号容器
    vector<int> v1;

    //第一轮晋级选手编号容器
    vector<int> v2;

    //胜出前三名选手编号容器
    vector<int> vVictory;

    //存放编号以及对应具体选手的容器
    map<int,Speaker> m_Speaker;

    //存放比赛轮数
    int m_Index;

    //初始化容器和属性
    void initSpeech();

    //创建12名选手
    void createSpeaker();

    //开始比赛 比赛整个流程控制函数
    void startSpeech();

    //抽签
    void speechDraw();

    //比赛
    void speechContest();

    //显示分数
    void showScore();

    //保存记录
    void saveRecord();

    //读取记录
    void loadRecord();

    //显示往届记录
    void showRecord();

    //清空文件
    void clearRecord();

    //判断文件是否为空
    bool fileIsEmpty;

    //存放往届记录的容器
    map<int,vector<string>> m_Record;

    ~SpeechManager();

};

enum Project
{
    退出比赛程序,
    开始演讲比赛,
    查看往届记录,
    清空比赛记录
};













#endif //SPEECH_CONTEST_MANAGEMENT_SYSTEM_SPEECHMANAGER_H
