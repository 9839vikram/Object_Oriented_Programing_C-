#include<iostream>
#include"AccountBase.h"
#include"CreditAccount.h"
#include"SavingsAccount.h"
using namespace std;

AccountBase::AccountBase(){}

AccountBase::AccountBase(string number,string name,double balance):
    m_accNumber(number),m_accName(name),m_balance(balance){}

AccountBase::AccountBase(string number,string name):
   m_accNumber(number),m_accName(name),m_balance(0){
}
AccountBase::AccountBase(const AccountBase &A):
    m_accNumber(A.m_accNumber),m_accName(A.m_accName),m_balance(A.m_balance){
}


CreditAccount::CreditAccount():m_accNumber("12345"),m_accName("Harry"),m_balance(0.0) {}
CreditAccount::CreditAccount(string number,string name,double balance):
    m_accNumber(number),m_accName(name),m_balance(balance){
}
CreditAccount::CreditAccount(string number,string name):
   m_accNumber(number),m_accName(name),m_balance(0){
}

SavingsAccount::SavingsAccount():m_accNumber("12345"),m_accName("Harry"),m_balance(0.0) {}
SavingsAccount::SavingsAccount(string number,string name,double balance):
    m_accNumber(number),m_accName(name),m_balance(balance){
}
SavingsAccount::SavingsAccount(string number,string name):
    m_accNumber(number),m_accName(name),m_balance(0){
}

double CreditAccount::debit(double dbt)
{
    m_balance -= dbt;
    return m_balance;
}
double SavingsAccount::debit(double dbt)
{
    m_balance -= dbt;
    return m_balance;
}
double CreditAccount::credit(double crt)
{
    m_balance += crt;
    return m_balance;
}
double CreditAccount::getBalance()
{
    return m_balance;
}
double SavingsAccount::credit(double crt)
{
    m_balance += crt;
    return m_balance;
}
double SavingsAccount::getBalance()
{
    return m_balance;
}

void CreditAccount::display(){
    cout<<"Current:"<<m_accName<<","<<m_accNumber<<","<<m_balance<<endl;
}
void SavingsAccount::display(){
    cout<<"Savings:"<<m_accName<<","<<m_accNumber<<","<<m_balance<<endl;
}
