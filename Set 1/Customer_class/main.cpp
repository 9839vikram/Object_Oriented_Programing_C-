#include <iostream>
#include"Customer_class.h"
using namespace std;

int main()
{
  cout<<"Output By Default constructor:"<<endl;
  Customer C1;
  C1.display();
  cout<<"\n";

  cout<<"Output By Parameterized constructor first:"<<endl;
  Customer C2("abcd123", "VKRAMLTTS", "7568961234", 2000);
  C2.display();
  cout<<"\n";

  cout<<"Output By Parameterized constructor second:"<<endl;
  Customer C3("pqrs123", "LTTSVKRAMLTTS", "7568967894");
  C3.credit(1500);
  C3.display();
  cout<<"\n";

  cout<<"Output By copy constructor:"<<endl;
  Customer C4(C2);
  C4.makeCall(1500);
  C4.display();
  cout<<"\n";

  return 0;
}
