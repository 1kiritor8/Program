//
// Created by dixhuitieme on 2025/4/14.
//

#include "speechManager.h"

SpeechManager::SpeechManager() {
    //初始化容器和属性
    this->initSpeech();
    //创建12名选手
    this->createSpeaker();
    //加载往届记录
    this->loadRecord();
}

void SpeechManager::show_Menu() {
    cout << "*************************************" << endl;
    cout << "*********** 欢迎参加演讲比赛 ********" << endl;
    cout << "*********** 1.开始演讲比赛 **********" << endl;
    cout << "*********** 2.查看往届记录 **********" << endl;
    cout << "*********** 3.清空比赛记录 **********" << endl;
    cout << "*********** 0.退出比赛程序 **********" << endl;
    cout << "*************************************" << endl;
    cout << endl;
}

void SpeechManager::exitSystem() {
    cout << "欢迎下次使用" << endl;
    system("pause");
    exit(0);
}

void SpeechManager::initSpeech() {
    //容器都置空
    this->v1.clear();
    this->v2.clear();
    this->vVictory.clear();
    this->m_Speaker.clear();

    //初始化比赛轮数
    this->m_Index = 1;

    //将记录的容器也清空
    this->m_Record.clear();
}

void SpeechManager::createSpeaker() {
    string nameSeed = "ABCDEFGHIJKL";
    for(int i = 0;i < nameSeed.size();i++){
        string name = "选手";
        name += nameSeed[i];

        Speaker sp;
        sp.m_Name = name;

        for(int j = 0;j < 2;j++){
            sp.m_Score[j] = 0;
        }

        //创建选手编号并放入v1容器
        this->v1.push_back(i + 10001);

        //选手编号以及对应选手放入map容器
        this->m_Speaker.insert(make_pair(i + 10001,sp));
    }
}

void SpeechManager::startSpeech() {
    //第一轮开始比赛

    //1.抽签
    this->speechDraw();
    //2.比赛
    this->speechContest();
    //3.显示晋级结果
    this->showScore();
    //第二轮开始比赛
    this->m_Index++;
    //1.抽签
    this->speechDraw();
    //2.比赛
    this->speechContest();
    //3.显示最终结果
    this->showScore();
    //4.保存分数到文件中
    this->saveRecord();

    //重制比赛并获取记录
    //初始化容器和属性
    this->initSpeech();
    //创建12名选手
    this->createSpeaker();
    //加载往届记录
    this->loadRecord();

    cout << "本届比赛完毕!!!" << endl;
    system("pause");
    system("cls");
}

void SpeechManager::speechDraw() {
    cout << "第 [" << this->m_Index << "] 轮比赛选手正在抽签" << endl;
    cout << "---------------------" << endl;
    cout << "抽签后，演讲顺序如下：" << endl;

    if(this->m_Index == 1){
        //第一轮比赛
        random_shuffle(v1.begin(),v1.end());
        for(vector<int>::iterator it = v1.begin();it != v1.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    else{
        //第二轮比赛
        random_shuffle(v2.begin(),v2.end());
        for(vector<int>::iterator it = v2.begin();it != v2.end();it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
    system("pause");
    cout << endl;
}

void SpeechManager::speechContest() {
    cout << "-----------第 " << this->m_Index << " 轮比赛开始-----------" << endl;

    //准备临时容器存放小组成绩
    multimap<double,int,greater<double>> groupScore;
    int num = 0;//记录人员个数（6人一组）


    vector<int> v_Src;//比赛选手容器
    if(this->m_Index == 1){
        v_Src = v1;
    }
    else{
        v_Src = v2;
    }

    //遍历所有选手进行比赛
    for(vector<int>::iterator it = v_Src.begin();it != v_Src.end();it++){
        num++;
        //评委打分
        deque<double> d;
        for(int i = 0;i < 10;i++){
            double score = (rand() %401 + 600) / 10.f;
//            cout << score << " ";
            d.push_back(score);
        }
//        cout << endl;

        sort(d.begin(),d.end(),greater<double>());
        d.pop_front();//去除最高分
        d.pop_back();//去除最低分

        double sum = accumulate(d.begin(),d.end(),0.0f);//总分
        double avg = sum / (double)d.size();//平均分

//        //打印平均分
//        cout << "编号为：" << *it << " 选手：" << this->m_Speaker[*it].m_Name << " 得分：" << avg << endl;

        //将平均分放入map容器中
        this->m_Speaker[*it].m_Score[this->m_Index - 1] = avg;

        //将打分数据放入临时小组容器中
        groupScore.insert(make_pair(avg,*it));//key是得分 value是选手编号
        //每6人取出前3名
        if(num % 6 == 0){
            cout << "第" << num / 6 << " 小组比赛名次：" << endl;
            for(multimap<double,int,greater<double>>::iterator it = groupScore.begin();it != groupScore.end();it++){
                cout << "选手编号为：" << it->second << " 姓名为：" << this->m_Speaker[it->second].m_Name
                     << " 成绩为：" << this->m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;
            }

            //取走前3名
            int count = 0;
            for(multimap<double,int,greater<double>>::iterator it = groupScore.begin();it != groupScore.end() && count <3;it++,count++){
                if(this->m_Index == 1){
                    v2.push_back(it->second);
                }
                else{
                    vVictory.push_back(it->second);
                }
            }

            groupScore.clear();//小组容器清空
            cout << endl;
        }
    }
    cout << "-----------第 " << this->m_Index << " 轮比赛结束-----------" << endl;
    system("pause");
}

void SpeechManager::showScore() {
    cout << "-----------第" << this->m_Index << " 轮晋级选手得分如下:-----------" << endl;
    vector<int> v;
    if(this->m_Index == 1){
        v = v2;
    }
    else{
        v = vVictory;
    }

    for(vector<int>::iterator it = v.begin();it != v.end();it++) {
        cout << "选手编号：" << *it << " 姓名：" << this->m_Speaker[*it].m_Name
             << " 得分为：" << this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
    this->show_Menu();
}

void SpeechManager::saveRecord() {
    ofstream ofs;
    ofs.open("speech.csv",ios::out | ios::app);//用追加的方式写文件

    //将每个选手的数据写入到文件中
    for(vector<int>::iterator it = vVictory.begin();it != vVictory.end();it++) {
        ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
    }
    ofs << endl;

    //关闭文件
    ofs.close();
    cout << "文件已保存" << endl;

    //更改文件状态
    this->fileIsEmpty = false;
}

void SpeechManager::loadRecord() {
    ifstream ifs("speech.csv",ios::in);
    if(!ifs.is_open())
    {
        this->fileIsEmpty = true;
//        cout << "文件不存在！！！" << endl;
        ifs.close();
        return;
    }

    //文件清空
    char ch;
    ifs >> ch;
    if(ifs.eof())
    {
//        cout << "文件为空" << endl;
        this->fileIsEmpty = true;
        ifs.close();
        return;
    }

    //文件不为空
    this->fileIsEmpty = false;
    ifs.putback(ch);//将读取的单个字符放回来
    string data;
    int index = 0;

    while (ifs >> data) {
//        cout << data << endl;
        //10002,86.675,10009,81.3,10007,78.55,
        int pos = -1;//查到“，”位置的变量
        int start = 0;
        vector<string> v;//存放6个string字符串

        while (true) {
            pos = data.find(",",start);
            if(pos == -1) {
                //没有找到情况
                break;
            }
            string temp = data.substr(start,pos - start);
//            cout << temp << endl;
            v.push_back(temp);

            start = pos + 1;
        }

        this->m_Record.insert(make_pair(index,v));
        index++;

    }

    ifs.close();

//    for(map<int,vector<string>>::iterator it = this->m_Record.begin();it != this->m_Record.end();it++) {
//        cout << it->first << "冠军编号：" << it->second[0] << " 分数：" << it->second[1] << endl;
//    }

}

void SpeechManager::showRecord() {
    if(this->fileIsEmpty) {
        cout << "文件为空或文件不存在！！！" << endl;
    }
    else {
        for(int i = 0;i < this->m_Record.size();i++) {
            cout << "第" << i + 1 << "届"
                 << "冠军编号：" << this->m_Record[i][0] <<"得分：" << this->m_Record[i][1] << " "
                 << "亚军编号：" << this->m_Record[i][2] <<"得分：" << this->m_Record[i][3] << " "
                 << "季军编号：" << this->m_Record[i][4] <<"得分：" << this->m_Record[i][5] << endl;
        }
    }

    system("pause");
    system("cls");
}

void SpeechManager::clearRecord() {
    cout << "是否确定清空文件？" << endl;
    cout << "1.确定" << endl;
    cout << "2.取消" << endl;

    int select = 0;
    cin >> select;

    if(select == 1) {
        //确认清空
        ofstream ofs("speech.csv",ios::trunc);

        //初始化容器和属性
        this->initSpeech();
        //创建12名选手
        this->createSpeaker();
        //加载往届记录
        this->loadRecord();

        cout << "清空成功！！！" << endl;
    }

    system("pause");
    system("cls");
}

SpeechManager::~SpeechManager() {

}

















