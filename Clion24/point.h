//
// Created by dixhuitieme on 2025/1/10.
//

#ifndef CLION24_POINT_H
#define CLION24_POINT_H

#include <iostream>
#include "windows.h"

using namespace std;

class Point
{
public:
    void setX(int x);

    void setY(int y);

    int getX();

    int getY();

private:
    int m_X;
    int m_Y;

};

#endif //CLION24_POINT_H
