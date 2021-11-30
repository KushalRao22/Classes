#include <iostream>
#include "Music.h"
using namespace std;

void Music::setDuration(int outDuration){
  duration = outDuration;
  cout << duration << endl;
  return;
}

void Music::setArtist(char* outArtist){
  for(int i = 0; i < 60; i++){
    artist[i] = outArtist[i];
  }
    cout << artist << endl;
  return;
}

void Music::print(){
  cout << "Year: " << year << "publisher: " << publisher << "Title: " << title << "Duration: " << duration << "arist: " << artist << endl;
  return;
}
