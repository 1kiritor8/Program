#include <iostream>
#include "Windows.h"
#include "list"
#include "string"

using namespace std;

//list大小操作
//功能描述：
//对list容器的大小进行操作
//函数原型：
//size();//返回容器中元素的个数
//empty();//判断容器是否为空
//resize(num);//重新指定容器的长度为num，若容器变长，则以默认值填充新位置。
//            //如果容器变短，则末尾超出容器长度的元素被删除。
//resize(num, elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置。
//                  //如果容器变短，则末尾超出容器长度的元素被删除。
void printList(const list<int>& L)
{
    for(list<int>::const_iterator it = L.begin();it != L.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int> L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);
    printList(L1);

    //判断list是否为空
    if(L1.empty())
    {
       cout << "L1为空" << endl;
    }
    else
    {
        cout << "L1不为空" << endl;
        cout << "L1的元素个数为：" << L1.size() << endl;
    }

    //重新指定大小
    L1.resize(10,10000);
    printList(L1);

    L1.resize(2);
    printList(L1);

}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    test01();

    return 0;
}
