/*
This is a class to hold movies

Last modified: 12/2/21

By: Kushal Rao
*/
//Includes
#include <iostream>
#include "Movie.h"
using namespace std;

void Movie::setDuration(int outDuration){//Set duration to input
  duration = outDuration;
  return;
}

void Movie::setDirector(char* outDirector){//Set director
  for(int i = 0; i < 60; i++){
    director[i] = outDirector[i];//Make director equal to input
  }
  return;
}

void Movie::print(){//Print
  cout << "Title: " << title << endl << "Year: " << year << endl << "publisher: " << publisher << endl << "director: " << director << endl << "Duration: " << duration << endl << endl;
  return;
}
