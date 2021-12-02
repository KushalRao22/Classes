/*
This is the .h file for Movie.cpp

Last modified: 12/2/21

By: Kushal Rao
*/
//Includes
#include <iostream>
#include "Media.h"
using namespace std;

class Movie : public Media{//Child of Media
 public:
  void setDuration(int outDuration);//Set duration to input
  int duration;//Variable to hold duration
  void setDirector(char* outDirector);//Set director to input
  char director[60];//Variable to hold director
  virtual void print();//Virtual to change print slightly
};
