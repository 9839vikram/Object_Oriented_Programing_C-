#include<iostream>
#include"Employee.h"
#include"Engineer.h"
#include"Manager.h"
using namespace std;

Employee::Employee(string id, string name, double salary,int exp):m_empid(id),m_name(name),m_salary(salary),m_exp(exp){}

Engineer::Engineer(string E_id, string E_name, double E_salary,int E_exp,int E_code):Employee(E_id,E_name,E_salary,E_exp),m_projCode(E_code){}

Manager::Manager(string M_id, string M_name, double M_salary,int M_exp,int M_code,int M_reportees):Employee(M_id,M_name,M_salary,M_exp),m_projCode(M_code),m_reportees(M_reportees){}


int Engineer::payroll()
{
    return m_salary;
}
int Manager::payroll()
{
    return m_salary;
}

int Engineer::appraisal(int aprl)
{
    m_salary += aprl;
    return m_salary;
}
int Manager::appraisal(int aprl)
{
    m_salary += aprl;
    return m_salary;
}

void Engineer::display()
{
	cout<<"Details of Engineer Employee:"<<"\n";
	cout<<"ID: "<<m_empid<<"\n";
	cout<<"Name: "<<m_name<<"\n";
	cout<<"Salary: "<<m_salary<<"\n";
	cout<<"Project Code: "<<m_projCode<<"\n"<<"\n";
}
void Manager::display()
{
    cout<<"Details of Manager Employee:"<<"\n";
	cout<<"ID: "<<m_empid<<"\n";
	cout<<"Name: "<<m_name<<"\n";
	cout<<"Salary: "<<m_salary<<"\n";
	cout<<"Project Code: "<<m_projCode<<"\n";
	cout<<"Reportees: "<<m_reportees<<"\n"<<"\n";

}
