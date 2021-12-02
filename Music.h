/*
This is a .h file for Music.cpp

Last modified: 12/2/21

By: Kushal Rao
*/
//Includes
#include <iostream>
#include "Media.h"
using namespace std;

class Music : public Media{//Child of Media
 public:
  void setDuration(int outDuration);//Set duration to input
  int duration;//Variable to hold duration
  void setArtist(char* outArtist);//Set input to artist
  char artist[60];//Variable to hold aritist
  virtual void print();//Virtual because is modified slightly
};
