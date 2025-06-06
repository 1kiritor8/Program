#include "MyArray.hpp"

//类模板案例
//案例描述：实现一个通用的数组类，要求如下：
//·可以对内置数据类型以及自定义数据类型的数据进行存储
//·将数组中的数据存储到堆区
//·构造函数中可以传入数组的容量
//提供对应的拷贝构造函数以及operator=防止浅拷贝问题
//提供尾插法和尾删法对数组中的数据进行增加和删除
//可以通过下标的方式访问数组中的元素
//可以获取数组中当前元素个数和数组的容量
void printIntArray(MyArray<int>& arr)
{
    for(int i = 0;i < arr.getSize();i++)
    {
        cout << arr[i] << endl;
    }
}

void test01()
{
    MyArray<int> arr1(5);

    for(int i = 0;i < 5;i++)
    {
        arr1.Push_Back(i);
    }
    cout << "arr1" << endl;
    printIntArray(arr1);
    cout << arr1.getSize() << endl;
    cout << arr1.getCapacity() << endl;

    MyArray<int> arr2(arr1);
    cout << "arr2" << endl;
    printIntArray(arr2);
    arr2.Pop_Back();
    cout << arr2.getSize() << endl;
    cout << arr2.getCapacity() << endl;

    //
//    MyArray<int> arr3(100);
//    arr3 = arr1;
}

class Person
{
public:
    Person(){};
    Person(string name,int age)
    {
        m_Name = name;
        m_Age = age;
    }

    string m_Name;
    int m_Age;
};

void printPersonArray(MyArray<Person>& arr)
{
    for(int i = 0;i < arr.getSize();i++)
    {
        cout << "姓名：" << arr[i].m_Name <<
        " 年龄：" << arr[i].m_Age << endl;
    }
}

void test02()
{
    MyArray<Person> arr(10);

    Person p1("孙悟空",999);
    Person p2("韩信",30);
    Person p3("妲己",20);
    Person p4("赵云",25);
    Person p5("安琪拉",27);

    arr.Push_Back(p1);
    arr.Push_Back(p2);
    arr.Push_Back(p3);
    arr.Push_Back(p4);
    arr.Push_Back(p5);

    printPersonArray(arr);

    cout << arr.getCapacity() << endl;
    cout << arr.getSize() << endl;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
//    test01();
    test02();

    return 0;
}
