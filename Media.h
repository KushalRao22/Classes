#include <iostream>

using namespace std;

class Media{
 public:
  void setTitle(char* outTitle);
  void setYear(int year);
  void setPublisher(char* outPublisher);
protected:
  char title[60];
  char publisher[60];
  int year;
  
};
