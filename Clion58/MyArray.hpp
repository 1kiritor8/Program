//
// Created by dixhuitieme on 2025/2/16.
//

#ifndef CLION58_MYARRAY_HPP
#define CLION58_MYARRAY_HPP

#include <iostream>
#include "windows.h"

using namespace std;

template<class T>
class MyArray
{
public:

    MyArray(int capacity)
    {
//        cout << "MyArray的有参构造调用" << endl;
        m_Capacity = capacity;
        m_Size = 0;
        pAddress = new T[m_Capacity];
    }
    MyArray(const MyArray& arr)
    {
//        cout << "MyArray的拷贝构造调用" << endl;
        m_Capacity = arr.m_Capacity;
        m_Size = arr.m_Size;
//        pAddress = arr.pAddress;
        pAddress = new T[arr.m_Capacity];

        for(int i = 0;i < m_Size;i++)
        {
            pAddress[i] = arr.pAddress[i];
        }
    }

    MyArray& operator=(const MyArray& arr)
    {
//        cout << "MyArray的opertaor=构造调用" << endl;
        if(pAddress != NULL)
        {
            delete[] pAddress;
            pAddress = NULL;
            m_Capacity = 0;
            m_Size = 0;
        }

        m_Capacity = arr.m_Capacity;
        m_Size = arr.m_Size;
        pAddress = new T[arr.m_Capacity];
        for(int i = 0;i < m_Size;i++)
        {
            pAddress[i] = arr.pAddress[i];
        }

        return *this;
    }

    //尾插法
    void Push_Back(const T& val)
    {
        if(m_Capacity == m_Size)
        {
            cout << "容量已满！" << endl;
            return;
        }

        pAddress[m_Size] = val;
        m_Size++;
    }

    //尾删法
    void Pop_Back()
    {
        if(m_Size == 0)
        {
            cout << "数据为空，无法删除！！！" << endl;
            return;
        }
        m_Size--;
    }

    int getCapacity()
    {
        return m_Capacity;
    }

    int getSize()
    {
        return m_Size;
    }

    T& operator[](int index)
    {
        return pAddress[index];
    }

    ~MyArray()
    {
        if(pAddress != NULL)
        {
//            cout << "MyArray的析构函数调用" << endl;
            delete[] pAddress;
            pAddress = NULL;
        }
    }

private:

    T* pAddress;
    int m_Capacity;
    int m_Size;
};





















#endif //CLION58_MYARRAY_HPP
