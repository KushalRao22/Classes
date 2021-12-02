/*
This is a .h file for VideoG.cpp

Last modified: 12/2/21

By: Kushal Rao
*/
//Includes
#include <iostream>
#include "Media.h"
using namespace std;

class VideoG : public Media{//is a child of media
 public:
  void setRating(int rating);//Mehod to set rating to input
  int rating;//Variable to hold rating
  virtual void print();//changes print
};
