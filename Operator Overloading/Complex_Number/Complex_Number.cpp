
#include <iostream>
#include"Complex_Number.h"

Complex::Complex():m_real(0),m_imag(0) {}

Complex::Complex(int r ,int i):m_real(r),m_imag(i) {}

Complex::Complex(int x): m_real(x),m_imag(x) {}

Complex::Complex(const Complex& C):m_real(C.m_real),m_imag(C.m_imag) {}


Complex Complex::operator+(const Complex& C){
    int real = m_real + C.m_real;
    int imag = m_imag +C.m_imag;
    return Complex(real,imag);
}
Complex Complex::operator-(const Complex& C){
    int real = m_real - C.m_real;
    int imag = m_imag -C.m_imag;
    return Complex(real,imag);

}
Complex Complex::operator*(const Complex& C){
    int real = m_real*C.m_real-m_imag*C.m_imag;
    int imag = m_imag*C.m_real + m_real*C.m_imag;
    return Complex(real,imag);
}
Complex& Complex::operator++()
{
    ++m_real;
    ++m_imag;
    return (*this);
}
Complex Complex::operator++(int)
{
    Complex temp(*this);
    this->m_real++;
    this->m_imag++;
    return (temp);
}

bool Complex::operator==(const Complex& C)
{
    return m_real==C.m_imag && m_imag==C.m_imag;
}
int Complex::get_Real()
{
    return m_real;
}

int Complex::get_Img()
{
    return m_imag;
}
void Complex::display() const
{
    std::cout<<m_real<<" + "<<m_imag<<"i"<<std::endl;
}
