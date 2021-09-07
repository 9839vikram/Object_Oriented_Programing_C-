#include <iostream>
#include"Account_Class.h"
using namespace std;
Account::Account(){
    m_accNumber = "xyz";
    m_accName = "XYZ";
    m_balance = 00;}

Account::Account(std::string accNumber ,std::string accName, double balance ){
    m_accNumber = accNumber;
    m_accName = accName;
    m_balance = balance;}

Account::Account(std::string accNumber,std::string accName){
    m_accNumber = accNumber;
    m_accName = accName;
    m_balance = 100000.50;
  }
Account::Account(const Account& A){
    m_accNumber = A.m_accNumber;
    m_accName = A.m_accName;
    m_balance = A.m_balance;
  }

void Account::debit(double x){ m_balance -= x;}

void Account::credit(double y){m_balance += y;}

double Account::getBalance() const { return m_balance;}

void Account::display() const{
    std::cout<<"Acc no.:"<<m_accNumber<<", "<<"Name:"<<m_accName<<", "<<"Balance:"<<m_balance<<"\n";}
