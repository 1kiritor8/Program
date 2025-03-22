#include <iostream>
#include "vector"
#include "deque"
#include "algorithm"
#include "ctime"

using namespace std;

//案例-评委打分
//  案例描述
//有5名选手：选手ABCDE，10个评委分别对每一名选手打分，去除最高分，去除评委中最低分，取平均分。
//  实现步骤
//1.创建五名选手，放到vector中
//2.遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
//3.sort算法对deque容器中分数排序，去除最高和最低分
//4.deque容器遍历一遍，累加总分
//5.获取平均分
class Person
{
public:
    Person(string name,int score)
    {
        m_Name = name;
        m_Score = score;
    }

    string m_Name;
    int m_Score;
};

void creatPerson(vector<Person>& v)
{
    string nameSeed = "ABCDE";
    for(int i = 0;i < 5;i++)
    {
        string name = "选手";
        name += nameSeed[i];

        int score = 0;

        Person p(name,score);

        //将创建的Person对象放到容器中
        v.push_back(p);
    }
}

void setScore(vector<Person>& v)
{
    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
    {
        //将评委的分数放入到deque容器中
        deque<int> d;
        for(int i = 0;i < 10;i++)
        {
            int score = rand()%41 + 60;//60~100
            d.push_back(score);
        }

        //排序
        sort(d.begin(),d.end());

        //去除最高分和最低分
        d.pop_back();
        d.pop_front();

//        cout << "选手：" << it->m_Name << "分数：" << endl;
//        for(deque<int>::const_iterator dit = d.begin();dit != d.end();dit++)
//        {
//            cout << *dit << " ";
//        }
//        cout << endl;

        //取平均分
        int sum = 0;
        for(deque<int>::const_iterator dit = d.begin();dit != d.end();dit++)
        {
            sum += *dit;//累加每个评委的分数
        }

        int avg = sum / d.size();

        //将平均分赋值给选手
        it->m_Score = avg;
    }
}

void showScore(const vector<Person>& v)
{
    for(vector<Person>::const_iterator it = v.begin();it != v.end();it++)
    {
        cout << it->m_Name << " 平均分：" << it->m_Score << endl;
    }
}

int main()
{
    system("chcp 65001");

    //随机数种子
    srand((unsigned int) time(NULL));

    //1.创建五名选手
    vector<Person> v;//存放选手的容器
    creatPerson(v);

    //测试
//    for(vector<Person>::iterator it = v.begin();it != v.end();it++)
//    {
//        cout << "姓名：" << (*it).m_Name << " 分数：" << (*it).m_Score << endl;
//    }

    //2.给五名选手打分
    setScore(v);
    //3，显示最后得分
    showScore(v);
    system("pause");

    return 0;
}
