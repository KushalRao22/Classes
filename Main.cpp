#include <iostream>
#include "VideoG.h"
#include "Music.h"
#include "Movie.h"
#include <vector>
#include <cstring>
using namespace std;

int main(){
  bool quit = false;
  vector<Media*> artPieces;
  char input[7];
  char input2[3];
  char charInput[60];
  char checkArray[60];
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
	artPieces.push_back(media);
      }
      if(strcmp(input2, "MU") == 0){
	Music* media = new Music();
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);
	cout << "Set year" << endl;
	cin >> intInput;
	media-> setYear(intInput);
	cout<< "setPublisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);
	cout<< "setArtist" << endl;
	cin >> charInput;
	media->setArtist(charInput);
	cout << "Set Duration" << endl;
	cin >> intInput;
	media->setDuration(intInput);
	artPieces.push_back(media);
      }
      if(strcmp(input2, "MO") == 0){
	Movie* media = new Movie();
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);
	cout << "Set year" << endl;
	cin >> intInput;
	media-> setYear(intInput);
	cout<< "setPublisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);
	cout<< "setDirector" << endl;
	cin >> charInput;
	media->setDirector(charInput);
	cout << "Set Duration" << endl;
	cin >> intInput;
	media->setDuration(intInput);
	artPieces.push_back(media);
      }
    }
    else if(strcmp(input,"SEARCH") == 0){
      cout << "Do you want to search by title or year?(T ot Y)" << endl;
      if(strcmp(input2, "T")){
	cout << "What is the Title" << endl;
	cin >> charInput;
	for(int i = 0; i < artPieces.size(); i++){
	  artPieces[i]->getTitle(checkArray);
	  cout << checkArray << endl;
	  cout << charInput << endl;
	  if(strcmp(checkArray, charInput)){
	    cout << "IF" << endl;
	    artPieces[i]->print();
	  }
	}
      }
    }
    else if(strcmp(input,"DELETE") == 0){
      
    }
    else if(strcmp(input,"QUIT") == 0){
      quit = true;
    }
  }
  return 0;
}
