#include <iostream>
#include"Account_Class.h"
using namespace std;
int main()
{
  cout<<"Output By Default constructor:"<<endl;
  Account A1;
  A1.display();
  cout<<"\n";

  cout<<"Output By Parameterized constructor first:"<<endl;
  Account A2("12345678", "XXYYZZ", 5000.00);
  cout<<"Balance: "<<A2.getBalance()<<"\n";
  A2.display();
  cout<<"Output By Parameterized constructor after credited 1000Rs:"<<endl;
  A2.credit(1000.00);
  A2.display();
  cout<<"\n";

  cout<<"Output By Parameterized constructor second:"<<endl;
  Account A3("123456789", "PPXXYYZZ");
  A3.display();
  cout<<"\n";

  cout<<"Output By Copy constructor:"<<endl;
  Account A4(A2);
  A4.display();
  return 0;
}
