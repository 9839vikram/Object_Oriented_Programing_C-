#include <iostream>
#include"Point.h"

using namespace std;

int main()
{
  Point P1;
  P1.display();
  cout<<"Quadrant of point is: "<<P1.quadrant()<<"\n";
  cout<<"Distance from origin: "<<P1.distanceFromOrigin()<<"\n";
  cout<<"\n";
  Point P2(0,5);
  P2.display();
  cout<<"Quadrant of point is: "<<P2.quadrant()<<"\n";
  cout<<"Distance from origin: "<<P2.distanceFromOrigin()<<"\n";
  cout<<"\n";

  Point P3(-3,4);
  P3.display();
  cout<<"Quadrant of point is: "<<P3.quadrant()<<"\n";
  cout<<"Distance from origin: "<<P3.distanceFromOrigin()<<"\n";
  cout<<"\n";

  Point P4(-3,-4);
  Point P5(P4);
  P4.display();
  cout<<"Quadrant of point is: "<<P4.quadrant()<<"\n";
  cout<<"Distance from origin: "<<P4.distanceFromOrigin()<<"\n";
  cout<<"\n";

  return 0;

}
