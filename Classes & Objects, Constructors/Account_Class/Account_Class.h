#ifndef ACCOUNT_CLASS_H_INCLUDED
#define ACCOUNT_CLASS_H_INCLUDED
class Account {
  std::string m_accNumber;
  std::string m_accName;
  double m_balance;
  public:
  Account();
  Account(std::string,std::string,double);
  Account(std::string,std::string);
  Account(const Account&);
  void debit(double);
  void credit(double);
  double getBalance() const;
  void display() const;
};
#endif // ACCOUNT_CLASS_H_INCLUDED
