/*
This is the parent function called Media.
It holds title, year and publsiher as well as methods to set and get those variables

Last modified: 12/2/21

By: Kushal Rao
*/
//Includes
#include <iostream>
#include "Media.h"
using namespace std;

void Media::setTitle(char* outTitle){//Set title
  for(int i = 0; i < 60; i++){
    title[i] = outTitle[i];//Set title to input of the function
  }
  return;
}

void Media::setYear(int outYear){//Set year
  year= outYear;//Set year to input of the function
}

void Media::getTitle(char* outStr){//Get title
  for(int i = 0; i <sizeof(title); i++){
    outStr[i] = title[i];//Change the input string to be the title
  }
}

int Media::getYear(){//Get Year
  return year;//return year to main
}

void Media::print(){//Function that all the child classes modify
}


void Media::setPublisher(char* outPublisher){//Set publisher
  for(int i = 0; i < 60; i++){
    publisher[i] = outPublisher[i];//Change input string to be the publisher
  }
  return;
}
