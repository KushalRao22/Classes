#include <iostream>
#include "Movie.h"
using namespace std;

void Movie::setDuration(int outDuration){
  duration = outDuration;
  cout << duration << endl;
  return;
}

void Movie::setDirector(char* outDirector){
  for(int i = 0; i < 60; i++){
    director[i] = outDirector[i];
  }
    cout << director << endl;
  return;
}

void Movie::print(){
  cout << "Year: " << year << "publisher: " << publisher << "Title: " << title << "Duration: " << duration << "director: " << director << endl;
  return;
}
