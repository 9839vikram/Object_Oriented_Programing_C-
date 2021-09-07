#ifndef COMPLEX_NUMBER_H_INCLUDED
#define COMPLEX_NUMBER_H_INCLUDED

class Complex {
  int m_real;
  int m_imag;
  public:
  Complex();
  Complex(int,int);
  Complex(int);
  Complex(const Complex&);

  Complex operator+(const Complex&);
  Complex operator-(const Complex&);
  Complex operator*(const Complex&);
  Complex& operator++();
  Complex operator++(int);
  bool operator==(const Complex&);
  void display() const;
  int get_Real();
  int get_Img();
  //friend std::ostream& operator<<(const std::ostream&, const Complex&);
};

#endif // COMPLEX_NUMBER_H_INCLUDED
