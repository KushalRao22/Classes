#include <iostream>
#include "VideoG.h"
#include <vector>
#include <cstring>
using namespace std;

int main(){
  bool quit = false;
  vector<Media> artPieces;
  char input[7];
  char input2[3];
  char charInput[60];
  int  intInput;
  while(!quit){
    cout << "Type a valid command(ADD, SEARCH, DELETE, QUIT)" << endl;
    cin >> input;
    if(strcmp(input,"ADD") == 0){
      cout << "Enter the specific media tha you wish to add.(Video Games: VG, Movies: MO, Music, MU)" << endl;
      cin >> input2;
      if(strcmp(input2, "VG") == 0){
	VideoG* media = new VideoG();
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);
	cout << "Set year" << endl;
	cin >> intInput;
	media-> setYear(intInput);
	cout<< "setPublisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);
	cout << "Set Rating" << endl;
	cin >> intInput;
	media->setRating(intInput);
      }
    }
    else if(strcmp(input,"SEARCH") == 0){
      
    }
    else if(strcmp(input,"DELETE") == 0){
      
    }
    else if(strcmp(input,"QUIT") == 0){
      quit = true;
    }
  }
  return 0;
}
