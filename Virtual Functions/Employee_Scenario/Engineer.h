#ifndef ENGINEER_H_INCLUDED
#define ENGINEER_H_INCLUDED
#include "Employee.h"

class Engineer : public Employee {
  int m_projCode;
  public:
  Engineer(std::string, std::string , double ,int ,int );
  int payroll();
  int appraisal(int);
  void display();
};

#endif // ENGINEER_H_INCLUDED
