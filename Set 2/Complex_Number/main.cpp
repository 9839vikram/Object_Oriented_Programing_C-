#include <iostream>
#include"Complex_Number.h"


using namespace std;

int main()
{
  Complex C1;
  cout<<"Complex Number C1 is: ";

  C1.display();
  cout<<"\n";

  Complex C2(2, 3);
  cout<<"Complex Number C2 is: ";
  C2.display();
  cout<<"\n";

  Complex C3(4, 5);
  cout<<"Complex Number C3 is: ";
  C3.display();
  cout<<"\n";

  Complex C4,C5,C6;

  C4 = C2+C3;
  cout<<"Complex Number C4 (= C2+C3) is: ";
  C4.display();
  cout<<"\n";

  C5 = C2*C3;
  cout<<"Complex Number C5(=C2*C3) is: ";
  C5.display();
  cout<<"\n";

  C6=C2-C3;
  cout<<"Complex Number C6 (=C2-C3) is: ";
  C6.display();
  cout<<"\n";
  cout<<"is C2 and C3 equal: ";
  if (C2==C3)
    std::cout << "Yes";
  else
    std::cout << "No";
  cout<<"\n";

  return 0;
}
