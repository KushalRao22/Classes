#include <iostream>
#include "Media.h"
using namespace std;

class Music : public Media{
 public:
  void setDuration(int outDuration);
  int duration;
  void setArtist(char* outArtist);
  char artist[60];
  virtual void print();
};
