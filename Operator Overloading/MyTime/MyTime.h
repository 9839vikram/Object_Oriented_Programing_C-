#ifndef MYTIME_H_INCLUDED
#define MYTIME_H_INCLUDED

class MyTime {
  int m_hours;
  int m_minutes;
  int m_seconds;
  public:
  MyTime();
  MyTime(int,int,int);
  MyTime(int,int);
  MyTime operator+(const MyTime&);
  MyTime operator-(const MyTime&);
  MyTime operator+(int);
  MyTime operator-(int);
  MyTime& operator++();
  MyTime operator++(int);
  MyTime& operator+=(const MyTime&);
  bool operator==(const MyTime&);
  bool operator<(const MyTime&);
  bool operator>(const MyTime&);
  void display() const;
  int get_Hours();
  int get_Minutes();
  int get_Seconds();
  //friend std::ostream& operator<<(std::ostream&, const MyTime&);
};

#endif // MYTIME_H_INCLUDED
