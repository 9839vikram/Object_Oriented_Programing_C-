#include <iostream>
#include"AccountBase.h"
#include"SavingsAccount.h"
#include"CreditAccount.h"
using namespace std;

int main()
{
    CreditAccount C1("456789", "Harry");
    C1.display();
    C1.credit(15000);
    C1.display();
    C1.debit(5000);
    C1.display();
    cout<<"Balance: "<<C1.getBalance()<<"\n";

    SavingsAccount S1("123456","Anthony");
    S1.display();
    S1.credit(20000);
    S1.display();
    S1.debit(8000);
    S1.display();

    return 0;
}
