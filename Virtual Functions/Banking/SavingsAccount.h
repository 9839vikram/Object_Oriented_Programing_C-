#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include<string>
#include"AccountBase.h"

class SavingsAccount : public AccountBase {
 std::string m_accNumber;
  std::string m_accName;
double m_balance;
    public:
  SavingsAccount();
  SavingsAccount(std::string,std::string,double);
  SavingsAccount(std::string,std::string);
  double debit(double);
  double credit(double);
  double getBalance();
  void display();
};

#endif // SAVINGSACCOUNT_H_INCLUDED
