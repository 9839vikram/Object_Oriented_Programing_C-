#include<iostream>
#include"Complex.h"

template<typename T>
Complex<T>::Complex():m_real(0),m_image(0){}

template<typename T>
Complex<T>::Complex(T x,T y)
{
    m_real=x;
    m_image=y;
}
template<typename T>
T Complex<T>::getReal()
{
    return m_real;
}
template<typename T>
T Complex<T>::getImag()
{
    return m_image;
}
template<typename T>
void Complex<T>::display(){
	std::cout<<"Complex Number is: "<<m_real<<" + "<<m_image<<"i"<<"\n";
}
