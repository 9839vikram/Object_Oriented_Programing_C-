#ifndef CREDITACCOUNT_H_INCLUDED
#define CREDITACCOUNT_H_INCLUDED
#include<string>
#include"AccountBase.h"

class CreditAccount : public AccountBase {
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  CreditAccount();
  CreditAccount(std::string,std::string,double);
  CreditAccount(std::string,std::string);
  double debit(double);
  double credit(double);
  double getBalance();
  void display();
};

#endif // CREDITACCOUNT_H_INCLUDED
