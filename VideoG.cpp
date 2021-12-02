/*
This is a program that holds Video games

Last modified: 12/2/21

By: Kushal Rao
*/
//Includes
#include <iostream>
#include "VideoG.h"
using namespace std;

void VideoG::setRating(int outRating){//Set rating to input
  rating = outRating;
  return;
}
void VideoG::print(){//Print
  cout << "Title: " << title << endl << "Year: " << year << endl << "Publisher: " << publisher << endl << "Rating: " << rating << endl << endl;
  return;
}
