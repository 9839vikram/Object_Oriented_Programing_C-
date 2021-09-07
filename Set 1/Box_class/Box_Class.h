#ifndef BOX_CLASS_H_INCLUDED
#define BOX_CLASS_H_INCLUDED
class Box {
 int m_length;
 int m_breadth;
 int m_height;
 public:
 Box();
 Box(int,int,int);
 Box(int);
 Box(const Box&);
 int length() const;
 int breadth() const;
 int height() const;
 int volume() const;
 void display() const;
};

#endif // BOX_CLASS_H_INCLUDED
