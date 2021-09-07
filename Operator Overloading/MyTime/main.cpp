#include <iostream>
#include "MyTime.h"

using namespace std;

int main()
{
    MyTime T1;
    T1.display();
    MyTime T2(5,69,68);
    //cout<<T1.get_Hours()<<"\n";
    T2.display();
    MyTime T3(10,5);
    T3.display();
    MyTime T4(4,5,6);
    T4.display();
    T4 +=T3;
    T4.display();
    T4++;
    T4++;
    T4.display();

    return 0;
}
