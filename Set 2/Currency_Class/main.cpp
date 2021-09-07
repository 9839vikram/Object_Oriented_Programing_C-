#include <iostream>
#include"Currency.h"

using namespace std;

int main()
{
    Currency C1;
    C1.display();
    cout<<"\n";

    Currency C2(100);
    C2.display();
    cout<<"\n";

    Currency C3(20,599);
    C3.display();
    cout<<"\n";

    Currency C4(10,50);
    Currency C5(20,80);
    Currency C6 = C4+C5;
    C6.display();
    cout<<"\n";
    Currency C7 = C5-C4;
    C7.display();
    cout<<"\n";
    Currency C8 = C5+10;
    C8.display();
    cout<<"\n";
    Currency C9 = C5-10;
    C9.display();
    cout<<"\n";
    Currency C10(7,99);
    ++C10;
    C10.display();
    cout<<"\n";
    C10++;
    C10.display();
    cout<<"\n";
    cout<<"Two Currency is given compare both:"<<"\n";
    Currency C11(8,520);
    C11.display();
    Currency C12(8,51);
    C12.display();
    if(C11==C12) cout<<"Both currency equal"<<"\n";
    if(C11>C12)  cout<<"first Currency is greater and second currency is lesser"<<"\n";
    if(C11<C12)  cout<<"Second currency is greater First Currency is lesser"<<"\n";
    cout<<"\n";
    Currency C(100,10);
    cout<<C;


    return 0;
}
