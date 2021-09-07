#include <iostream>
#include"Complex.h"
#include "Complex.cpp";
using namespace std;

int main()
{
    Complex<int> C1(5,10);
    C1.display();
    cout<<"Real part of Complex number: "<<C1.getReal()<<"\n";
    cout<<"Imaginary part of Complex number: "<<C1.getImag()<<"\n";
    return 0;
}
