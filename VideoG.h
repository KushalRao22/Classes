#include <iostream>
#include "Media.h"
using namespace std;

class VideoG : public Media{
 public:
  void setRating(int rating);
  int rating;
  
};
