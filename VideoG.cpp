#include <iostream>
#include "VideoG.h"
using namespace std;

void VideoG::setRating(int outRating){
  rating = outRating;
  cout << rating<< endl;
  return;
}
void VideoG::print(){
  cout << "Year: " << year << "publisher: " << publisher << "Title: " << title << "Rating: " << rating << endl;
  return;
}
