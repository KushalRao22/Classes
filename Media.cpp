#include <iostream>
#include "Media.h"
using namespace std;

void Media::setTitle(char* outTitle){
  for(int i = 0; i < 60; i++){
    title[i] = outTitle[i];
  }
    cout << title << endl;
  return;
}

void Media::setYear(int outYear){
  year= outYear;
  cout << year << endl;
}

void Media::getTitle(char* outStr){
  cout << "Checking Title" << endl;
  for(int i = 0; i <sizeof(title); i++){
    outStr[i] = title[i];
  }
}

void Media::print(){
  cout << year << endl;
}


void Media::setPublisher(char* outPublisher){
  for(int i = 0; i < 60; i++){
    publisher[i] = outPublisher[i];
  }
    cout << publisher << endl;
  return;
}
