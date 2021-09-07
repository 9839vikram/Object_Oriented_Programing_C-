#include <iostream>
#include"Box_Class.h"
using namespace std;

Box::Box(): m_length(0),m_breadth(0),m_height(0) { }

Box::Box(int len,int b, int h ) {
		m_length = len;
		m_breadth = b;
		m_height = h;
	}

Box::Box(int l) {
		m_length = l;
		m_breadth = l;
		m_height = l;
	}

Box::Box(const Box&B){
		m_length = B.m_length;
		m_breadth = B.m_breadth;
		m_height = B.m_height;
	}
 int Box::length() const { return m_length;}
 int Box::breadth() const {return m_breadth;}
 int Box::height() const {return m_height;}
 int Box::volume() const {return m_height*m_breadth*m_length;}
 void Box::display() const{cout<<"Length="<< m_length<<endl<<"breadth=" <<m_breadth<<endl<<"height=" <<m_height<<endl<<"Volume=" <<m_height*m_breadth*m_length<<endl<<endl ;}
