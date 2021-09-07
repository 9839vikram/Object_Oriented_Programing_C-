#include<iostream>
#include <cmath>
#include <iomanip>
#include"Point.h"
using namespace std;

Point::Point():m_x{0},m_y{0} {};

Point::Point(int x,int y){ m_x =x; m_y=y;}

Point::Point(const Point& P){m_x= P.m_x; m_y = P.m_y;}

double Point::distanceFromOrigin()  const{
    double d = sqrt(m_x*m_x + m_y*m_y);
    return d;
  }
Quadrant Point::quadrant() const{
    if(m_x>0 && m_y>0)
      return Q1;
    if(m_x<0 && m_y>0)
      return Q2;
    if(m_x<0 && m_y<0)
      return Q3;
    if(m_x>0 && m_y<0)
      return Q4;
  }
bool Point::isOrigin() const
{
    if(m_x ==0 && m_y == 0)
      return true;
    else
      return false;
}

bool Point::isOnXAxis() const{
    if(m_x ==0)
      return true;
    else
        return false;
  }

bool Point::isOnYAxis() const{
    if(m_y==0)
      return true;
    else
      return false;
  }

void Point::display() const{

    cout<<"Given Point is: "<<"("<<m_x<<", "<<m_y<<")"<<endl;
    if(isOrigin())
      cout<<"Point is origin"<<"\n";
    if(isOnXAxis())
      cout<<"Point is on X axis"<<"\n";
    if(isOnYAxis())
        cout<<"Point is on Y axis"<<"\n";
  }
