
#include<iostream>
#include"Currency.h"
Currency::Currency(): m_rupees(0),m_paise(0) {}

Currency::Currency(int x,int y)
{
    m_rupees=x;
    m_paise=y;
    while(m_paise>99)
    {
        m_rupees +=1;
        m_paise -=100;
    }
}

Currency::Currency(int x): m_rupees(x),m_paise(0) {}

Currency Currency::operator+(const Currency& C)
{
    int rupees = m_rupees + C.m_rupees;
    int paise = m_paise + C.m_paise;
    while(paise>99)
    {
        rupees += 1;
        paise -= 100;
    }
    return Currency(rupees,paise);
}
Currency Currency::operator-(const Currency& C)
{
    int rupees = m_rupees - C.m_rupees;
    int paise = m_paise - C.m_paise;
    return Currency(rupees,paise);
}
Currency Currency::operator+(int x)
{
    int rupees = m_rupees + x;
    int paise = m_paise;
    return Currency(rupees,paise);
}
Currency Currency::operator-(int x)
{
    int rupees = m_rupees - x;
    int paise = m_paise;
    return Currency(rupees,paise);
}
Currency& Currency::operator++()
{
    m_rupees = ++m_rupees;
    m_paise = m_paise;
    while(m_paise>99)
    {
        m_rupees +=1;
        m_paise -=100;
    }
}
Currency Currency::operator++(int)
{
    m_rupees = m_rupees;
    m_paise = m_paise+1;
    while(m_paise>99)
    {
        m_rupees +=1;
        m_paise -=100;
    }
}
bool Currency::operator==(const Currency& C)
{
    return m_rupees==C.m_rupees && m_paise == C.m_paise;
}
bool Currency::operator<(const Currency& C)
{
    return m_rupees < C.m_rupees || m_rupees == C.m_rupees && m_paise<C.m_paise;
}
bool Currency::operator>(const Currency& C)
{
    return m_rupees > C.m_rupees || m_rupees == C.m_rupees && m_paise>C.m_paise;
}
void Currency::display() const
{
    std::cout<<"Currency is: "<<m_rupees<<"."<<m_paise<<std::endl;
}
std::ostream& operator<<(std::ostream& output, const Currency& C)
{
    output<<"Currency is (by << overloading) : "<<C.m_rupees<<"."<<C.m_paise<<std::endl;
    return output;
}
