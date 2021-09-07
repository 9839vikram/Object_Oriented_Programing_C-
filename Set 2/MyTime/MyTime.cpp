#include <iostream>
#include "MyTime.h"

MyTime:: MyTime(): m_hours(0),m_minutes(0), m_seconds(0) {}

MyTime:: MyTime(int h,int m,int s){
    while(s>=60){
        s -=60;
        m +=1;
    }
    while(m>60)
    {
        m -=60;
        h +=1;
    }
    m_hours = h;
    m_minutes = m;
    m_seconds = s;
}
MyTime :: MyTime (int HH,int MM){
    while(MM>60)
    {
        MM -=60;
        HH +=1;
    }
    m_hours = HH;
    m_minutes =MM;
    m_seconds = 00;
}

MyTime MyTime::operator+(const MyTime & T) {
    int hh = m_hours + T.m_hours;
    int mm = m_minutes + T.m_minutes;
    int ss = m_seconds + T.m_seconds;
    while(ss>60){
        ss -=60;
        mm +=1;
    }
    while(mm>60)
    {
        mm -=60;
        hh +=1;
    }
    return MyTime(hh, mm,ss);
  }
MyTime MyTime::operator-(const MyTime& T){
    int hh = m_hours - T.m_hours;
    int mm = m_minutes - T.m_minutes; //TODO:tmins > 60
    int ss = m_seconds - T.m_seconds;
    while(ss>60){
        ss -=60;
        mm +=1;
    }
    while(mm>60)
    {
        mm -=60;
        hh +=1;
    }
    return MyTime(hh, mm,ss);
  }
MyTime MyTime::operator+(int mins){
    m_minutes = m_minutes + mins;
    while(m_minutes>60)
    {
        m_minutes -=60;
        m_hours +=1;
    }
    return MyTime(m_hours,m_minutes,m_seconds);
}
MyTime MyTime::operator-(int mins){
    m_minutes = m_minutes - mins;
    while(m_minutes>60)
    {
        m_minutes -=60;
        m_hours +=1;
    }
    return MyTime(m_hours,m_minutes,m_seconds);
}
MyTime& MyTime::operator++()
{
	this->m_minutes = (this->m_minutes) + 1;
	this->m_hours = (this->m_hours) + 1;
	this->m_seconds = (this->m_seconds) + 1;
	if ((this->m_minutes) > 60)
	{
		this->m_hours += 1;
		this->m_minutes -= 60;
	}
	if ((this->m_seconds) > 60)
	{
		this->m_minutes += 1;
		this->m_seconds -= 60;
	}
}
MyTime MyTime ::operator++ (int data)
{
	this->m_minutes += data;
	if ((this->m_minutes) > 60)
	{
		this->m_hours += 1;
		this->m_minutes -= 60;
	}
}
MyTime& MyTime::operator+=(const MyTime& T)
{
    m_hours += T.m_hours;
    m_minutes += T.m_minutes;
    return *this;
}
bool MyTime::operator == (const MyTime& T)
{
	return m_hours == T.m_hours && m_minutes == T.m_minutes && m_seconds == T.m_seconds;
}
bool MyTime::operator < (const MyTime& T)
{
	return m_hours<T.m_hours && m_minutes<T.m_minutes && m_seconds<T.m_seconds;
}
bool MyTime :: operator > (const MyTime& T)
{
	return m_hours>T.m_hours && m_minutes >T.m_minutes && m_seconds >T.m_seconds;
}

int MyTime::get_Hours()
{
    return m_hours;
}
int MyTime::get_Minutes()
{
    return m_minutes;
}
int MyTime::get_Seconds()
{
    return m_seconds;
}
void MyTime:: display() const {
    std::cout << " HH:MM:SS " << m_hours <<":"<< m_minutes <<":"<<m_seconds<<"\n";
}
/*std::ostream& operator<<( std::ostream& output, const MyTime& T)
{
    output<<T.m_hours<<":"<<T.m_minutes<<":"<<T.m_seconds;
    return output;
}*/

