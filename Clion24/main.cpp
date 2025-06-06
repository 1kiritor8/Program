#include <iostream>
#include "windows.h"
#include "point.h"
#include "circle.h"

using namespace std;

//class Point
//{
//public:
//    void setX(int x)
//    {
//        m_X = x;
//    }
//
//    void setY(int y)
//    {
//        m_Y = y;
//    }
//
//    int getX()
//    {
//        return m_X;
//    }
//
//    int getY()
//    {
//        return m_Y;
//    }
//
//private:
//    int m_X;
//    int m_Y;
//
//};

//class Circle
//{
//public:
//    void setR(int r)
//    {
//        m_R = r;
//    }
//
//    int getR()
//    {
//        return m_R;
//    }
//
//    void setCenter(Point center)
//    {
//        m_Center = center;
//    }
//
//    Point getCenter()
//    {
//        return m_Center;
//    }
//
//private:
//    int m_R;
//    //在类中可以让另一个类作为本来中的成员
//    Point m_Center;
//};

void isInCircle(Point& p, Circle& c)
{
    int distance = (c.getCenter().getX()-p.getX())*(c.getCenter().getX()-p.getX())+
            (c.getCenter().getY()-p.getY())*(c.getCenter().getY()-p.getY());
    int rDistance = (c.getR()*c.getR());
    if(distance < rDistance)
    {
        cout<<"点在圆内"<<endl;
    }
    else if(distance == rDistance)
    {
        cout<<"点在圆上"<<endl;
    }
    else
    {
        cout<<"点在圆外"<<endl;
    }

}
int main()
{
    SetConsoleOutputCP(CP_UTF8);
    Circle c;
    c.setR(10);
    Point center;
    center.setX(10);
    center.setY(0);
    c.setCenter(center);

    Point p;
    p.setX(10);
    p.setY(10);

    isInCircle(p,c);

    return 0;
}
