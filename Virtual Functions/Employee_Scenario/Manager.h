#ifndef MANAGER_H_INCLUDED
#define MANAGER_H_INCLUDED
#include"Employee.h"
#include "Employee.h"

class Manager : public Employee {
  int m_projCode;
  int m_reportees;
  public:
  Manager(std::string , std::string , double ,int ,int ,int );
  int payroll();
  int appraisal(int);
  void display();
};


#endif // MANAGER_H_INCLUDED
