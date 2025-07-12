#include <iostream>
#include "Windows.h"
#include "vector"
#include "algorithm"
#include "ctime"

using namespace std;

//5.3.2random_shuffle
//功能描述：
//·洗牌指定范围内的元素随机调整次序
//函数原型：
//random_shuffle(iterator beg,iterator end);
//  //指定范围内的元素随机调整次序
//  //beg开始迭代器
//  //end结束迭代器
void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    srand((unsigned int) time(NULL));

    vector<int> v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    //利用洗牌算法打乱顺序
    random_shuffle(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
