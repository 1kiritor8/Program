//
// Created by dixhuitieme on 2025/1/10.
//

#ifndef CLION24_CIRCLE_H
#define CLION24_CIRCLE_H

#include <iostream>
#include "windows.h"
#include "point.h"

using namespace std;

class Circle
{
public:
    void setR(int r);

    int getR();

    void setCenter(Point center);

    Point getCenter();

private:
    int m_R;
    Point m_Center;
};

#endif //CLION24_CIRCLE_H
