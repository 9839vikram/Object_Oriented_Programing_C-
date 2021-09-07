#ifndef POINTCLASS_H_INCLUDED
#define POINTCLASS_H_INCLUDED

enum Quadrant {
  Q1=1,
  Q2,
  Q3,
  Q4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point<T>();
  Point<T>(T,T);
  double distanceFromOrigin();
  Quadrant quadrant();
  void display();
};


#endif // POINTCLASS_H_INCLUDED
