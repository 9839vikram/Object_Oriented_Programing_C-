#include <iostream>
#include"PointClass.h"
#include "PointClass.cpp"
using namespace std;

int main()
{
    Point<int> P1(-5,6);
    P1.display();
    cout<<"Quadrant of point is: "<<P1.quadrant()<<"\n";
    cout<<"Distance From origin of point is: "<<P1.distanceFromOrigin()<<"\n";
    return 0;
}
