#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex<T>();
  Complex<T> (T x,T y);
  T getReal();
  T getImag();
  void display();
};


#endif // COMPLEX_H_INCLUDED
