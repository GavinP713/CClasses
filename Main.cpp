#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"

using namespace std;

void search();
void remove();
void add();

static int inputlength = 5;

int main() {
  // ???? is this right? maybe but i literally do not know
  vector<Media>* mediaVector = new vector<Media>;

  // program loop
  char input[inputlength];
  while (true) {
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
    else {
      cout << "Invalid command!" << endl;
    }
  }
  
  return 0;
}

void add(Vector<Media>* mediaVector) {
  Media* media;
  char input[inputlength];

  // prompt for media type
  cout << "Movie, Game, Music" << endl;
  cout << "Media type: "; cin >> input;

  // set media type
  // MOVIE
  if (strcmp(input, "0") == 0) {
    media = new Movie(); 
  }
  // GAME
  if (strcmp(input, "1") == 0) {
    media = new Game();
  }
  // MUSIC
  if (strcmp(input, "2") == 0) {
    media = new Music();
  }

  // set data of media
  media->getinfo();
}

void remove() {

}

void search() {

}
