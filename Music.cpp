/*
This is a class to hold music

Last modified: 12/2/21

By: Kushal Rao
*/
//Includes
#include <iostream>
#include "Music.h"
using namespace std;

void Music::setDuration(int outDuration){//Set duration to input
  duration = outDuration;
  return;
}

void Music::setArtist(char* outArtist){//Set artist to input
  for(int i = 0; i < 60; i++){
    artist[i] = outArtist[i];
  }
  return;
}

void Music::print(){//Print
  cout << "Title: " << title << endl << "Year: " << year << endl << "Publisher: " << publisher << endl << "Arist: " << artist << endl << "Duration: " << duration << endl << endl;;
  return;
}
