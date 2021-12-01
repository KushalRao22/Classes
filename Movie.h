#include <iostream>
#include "Media.h"
using namespace std;

class Movie : public Media{
 public:
  void setDuration(int outDuration);
  int duration;
  void setDirector(char* outDirector);
  char director[60];
  virtual void print();
};
