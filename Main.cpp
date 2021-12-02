/*
This is a program that lets user input different forms of Media(Video games, Music, and movies).
It lets you add and remove them as well as search for a specific media.

Last updated: 12/2/21

By: Kushal Rao
*/
//Include everything
#include <iostream>
#include "VideoG.h"
#include "Music.h"
#include "Movie.h"
#include <vector>
#include <cstring>
using namespace std;

int main(){//Main loop
  bool quit = false;
  vector<Media*> artPieces;//Vector to hold all the forms of Media
  char input[7];
  char input2[3];
  char charInput[60];
  char charInput2[60];
  char checkArray[60];
  int  intInput;
  while(!quit){//While user wants to run the program
    cout << "Type a valid command(ADD, SEARCH, DELETE, QUIT)" << endl;
    cin >> input;
    if(strcmp(input,"ADD") == 0){//If user wants to add
      cout << "Enter the specific media tha you wish to add.(Video Games: VG, Movies: MO, Music, MU)" << endl;
      cin >> input2;
      if(strcmp(input2, "VG") == 0){//If user wants to add a Video Game
	VideoG* media = new VideoG();
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);//Set title of the game
	cout << "Set year" << endl;
	cin >> intInput;
	media-> setYear(intInput);//Set year
	cout<< "set Publisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);//Set the publisher of the game
	cout << "Set Rating" << endl;
	cin >> intInput;
	media->setRating(intInput);//Set the rating of the game
	artPieces.push_back(media);//Push the video game into the vector
      }
      if(strcmp(input2, "MU") == 0){//If user wants to add Music
	Music* media = new Music();
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);//Set title of song
	cout << "Set year" << endl;
	cin >> intInput;
	media-> setYear(intInput);//Set year
	cout<< "set Publisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);//Set the publisher of the song
	cout<< "setArtist" << endl;
	cin >> charInput;
	media->setArtist(charInput);//Set the artist
	cout << "Set Duration" << endl;
	cin >> intInput;
	media->setDuration(intInput);//Set the duration of the song
	artPieces.push_back(media);//Push the song into the vector
      }
      if(strcmp(input2, "MO") == 0){
	Movie* media = new Movie();
	cout << "Set Title" << endl;
	cin >> charInput;
	media->setTitle(charInput);//Set title of the movie
	cout << "Set year" << endl;
	cin >> intInput;
	media-> setYear(intInput);//Set year
	cout<< "setPublisher" << endl;
	cin >> charInput;
	media->setPublisher(charInput);// Set the publisher of the movie
	cout<< "setDirector" << endl;
	cin >> charInput;
	media->setDirector(charInput);//Set the director
	cout << "Set Duration" << endl;
	cin >> intInput;
	media->setDuration(intInput);//Set the duration of the movie
	artPieces.push_back(media);//Push the movie into the vector
      }
    }
    else if(strcmp(input,"SEARCH") == 0){//If user wants to Search
      cout << "Do you want to search by title or year?(T ot Y)" << endl;
      cin >> input2;
      if(strcmp(input2, "T") == 0){//Search by Title
	cout << "What is the Title" << endl;
	cin >> charInput;
	for(int i = 0; i < artPieces.size(); i++){
	  artPieces[i]->getTitle(checkArray);//set check array to the title of the specific media
	  if(strcmp(checkArray, charInput) == 0){//If the title of the media and input is the same
	    artPieces[i]->print();///Print media
	  }
	}
      }
      else{//User wants to search by year
	cout << "What is the year?" << endl;
	cin >> intInput;
	for(int i = 0; i < artPieces.size(); i++){
	  if(artPieces[i]->getYear() == intInput){//If year is the same as input
	    artPieces[i]->print();//Print media
	  }
	}
      }
    }
    else if(strcmp(input,"DELETE") == 0){//If user wants to delete
      cout << "What is the title of the media you wish to delete?" << endl;
      cin >> charInput;
	for(int i = 0; i < artPieces.size(); i++){
	  artPieces[i]->getTitle(checkArray);//Set check array to the title of the specific media
	  if(strcmp(checkArray, charInput) == 0){
	    artPieces[i]->print();
	    cout << "Confirm Delete? (Y/N)" << endl;//Ask for confirmation
	    cin >> charInput2;
	    if(strcmp(charInput2, "Y") == 0){//If user confirms
	      delete artPieces.at(i);//Delete media from heap
	      artPieces.erase(artPieces.begin() + i);//Remove pointer
	    }

	  }
	}
    }
    else if(strcmp(input,"QUIT") == 0){//If user wants to quit
      quit = true;
    }
  }
  return 0;
}
