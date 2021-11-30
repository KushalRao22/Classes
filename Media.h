#include <iostream>
#ifndef ADD_H
#define ADD_H

using namespace std;

class Media{
 public:
  void setTitle(char* outTitle);
  void setYear(int year);
  void setPublisher(char* outPublisher);
  void getTitle(char* outStr);
  char title[60];
  char publisher[60];
  int year;
  virtual void print();
  
};

#endif
