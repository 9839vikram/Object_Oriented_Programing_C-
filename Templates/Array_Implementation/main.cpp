#include <iostream>
#include"Array.h"
#include"Array.cpp"
using namespace std;

int main()
{
    MyArray<int> A1;
    MyArray<int> A2(2);
    A2.append(5);
    A2.at(0);
    A2.append(4);
    A2.at(1);
    A2.search(5);
    cout<<A2.sum()<<"\n";
    return 0;
}
