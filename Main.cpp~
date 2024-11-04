#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"
#include "Game.h"
#include "Movie.h"
#include "Music.h"

using namespace std;

// function prototypes
void search();
void remove();
void add(vector<Media>*);
void help();

static int inputlength = 5;

int main() {
  vector<Media>* mediaVector = new vector<Media>;

  cout << "###### MEDIA LIBRARY ######" << endl;
  
  // program loop
  char input[inputlength];
  while (true) {
    cout << "type \"help\" for a list of commands" << endl;
    
    cin >> input;

    if (strcmp(input, "add") == 0) {
      add(mediaVector);
    }
    else if (strcmp(input, "remove") == 0) {
      remove();
    }
    else if (strcmp(input, "search") == 0) {
      search();
    }
    else if (strcmp(input, "help") == 0) {
      help();
    }
    else if (strcmp(input, "quit") == 0) {
      cout << "Exitting program ..." << endl;
      return 0;
    }
    else {
      cout << "Invalid command!" << endl;
    }
  }

  cout << "Unexpected exit!" << endl;
  return 1;
}

void add(vector<Media>* mediaVector) {
  cout << "new -----------------------" << endl;

  Media* media;
  char input[inputlength];

  // prompt for media type
  cout << "Types" << endl;
  cout << " - Movie" << endl;
  cout << " - Game" << endl;
  cout << " - Music" << endl;
  cout << "Media type: "; cin >> input;

  // set media type
  // MOVIE
  if (strcmp(input, "Movie") == 0) {
    media = new Movie(); 
  }
  // GAME
  else if (strcmp(input, "Game") == 0) {
    media = new Game();
  }
  // MUSIC
  else if (strcmp(input, "Music") == 0) {
    media = new Music();
  }
  else {
    cout << "Invalid command!" << endl;
  }

  // set data of media
  media->getInfo();
  cout << "Media added" << endl;

  cout << "---------------------------" << endl;
}

void remove() {

}

void search() {

}

void help() {
  cout << "commands ------------------" << endl;
  cout << "\"add\": add content to the library" << endl;
  cout << "\"remove\": remove content from library" << endl;
  cout << "\"search\": search for content in the library" << endl;
  cout << "\"quit\": exit program" << endl;
  cout << "\"help\": display list of commands" << endl;
  cout << "---------------------------" << endl;
}
