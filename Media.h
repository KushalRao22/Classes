/*
This is the .h file for Media.cpp

Last modified: 12/2/21

By:Kushal Rao
*/
#include <iostream>
#ifndef ADD_H//Header Gaurd
#define ADD_H

using namespace std;

class Media{
 public:
  void setTitle(char* outTitle);//Set title
  void setYear(int year);//Set year
  void setPublisher(char* outPublisher);//Set publisher
  int  getYear();//Return year
  void getTitle(char* outStr);//Set input to be title
  char title[60];//Variable for Title
  char publisher[60];//Variable for publisher
  int year;//variable to keep track of year
  virtual void print();//Virtual because all children have slightly different prints
};

#endif
