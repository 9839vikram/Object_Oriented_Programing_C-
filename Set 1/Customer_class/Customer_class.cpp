#include <iostream>
#include"Customer_class.h"

using namespace std;


Customer::Customer(){
    m_custId = "xyz";
    m_custName = " XYZ";
    m_phone = "00";
    m_balance = 00;
    m_type = Prepaid;

  }

Customer::Customer(std::string id ,std::string name,std::string phone,double balance)
  {
    m_custId = id;
    m_custName = name;
    m_phone = phone;
    m_balance = balance;
    m_type = Postpaid;
  }
Customer::Customer(std::string id , std::string name,std::string phone){
    m_custId = id;
    m_custName = name;
    m_phone = phone;
    m_balance = 0.0;
    m_type = Prepaid;
  }


Customer::Customer(const Customer&C)
  {
    m_custId = C.m_custId;
    m_custName = C.m_custName;
    m_phone = C.m_phone;
    m_balance = C.m_balance;
    m_type = C.m_type;
  }
  void Customer::credit(double x){ m_balance +=x;}           //recharge or billPay

  void Customer::makeCall(double y){m_balance -=y;}

  double Customer::getBalance() const { return m_balance;}

  void Customer::display() const {
      cout<<"Customer ID: "<<m_custId<<", "<<"Customer Nmae: "<<m_custName<<", "<<"Customer Phone: " <<m_phone<<"\n"<<"Balance: "<<m_balance<<", "<<"Type(0 for prepaid, 1 for postpaid): "<<m_type<<"\n";}
