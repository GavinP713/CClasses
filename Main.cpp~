#include <iostream>
#include <cstring>
#include <vector>
#include "Media.h"
#include "Game.h"
#include "Movie.h"
#include "Music.h"

using namespace std;

// function prototypes
void add(vector<Media>*);
void remove();
void search(vector<Media>*);
void help();

static int inputlength = 5;

int main() {
  vector<Media>* mediaVector = new vector<Media>;

  cout << "------ MEDIA LIBRARY ------" << endl;
  
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
      search(mediaVector);
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
  cout << "---------------------------" << endl;

  Media* media;
  char input[inputlength];

  // prompt for media type
  cout << "Types" << endl;
  cout << " - movie" << endl;
  cout << " - game" << endl;
  cout << " - music" << endl;
  cout << "Media type: ";
  cin >> input;
  cin.ignore();
  
  // set media type
  // MOVIE
  if (strcmp(input, "movie") == 0) {
    media = new Movie(); 
  }
  // GAME
  else if (strcmp(input, "game") == 0) {
    media = new Game();
  }
  // MUSIC
  else if (strcmp(input, "music") == 0) {
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

void search(vector<Media>* mediaVector) {
  char input[inputlength];
  char title[50];
  int year;
  
  cout << "Search for: " << endl;
  cout << " - Title:      0" << endl;
  cout << " - Year:       1" << endl;
  cout << " - Title/Year: 2" << endl;
  cin >> input;

  if (atoi(input) == 0) {
    cout << "enter Title: ";
    cin.getline(title, 50, '\n');
    cin.ignore();
  }
  else if (atoi(input) == 1) {
    cout << "enter Year: ";
    cin >> year;
    cin.ignore();
  }
  else if (atoi(input) == 2) {
    cout << "enter Title: ";
    cin.getline(title, 50, '\n');
    cout << "enter Year: ";
    cin >> year;
    cin.ignore();
  }

  for (int i = 0; i < mediaVector->size(); i++) {
    Media media = (*mediaVector)[i];

    // search for title
    if (atoi(input) == 0) {
      // compare titles
      if (strcmp(title, media.title) == 0) {
	media.printInfo();
      }
    }
    // search for year
    else if (atoi(input) == 1) {
      // compare years
      if (year == media.year) {
	media.printInfo();
      }
    }
    // search for title and year
    else if (atoi(input) == 2) {
      // compare titles and years
      if (strcmp(title, media.title) == 0 && year == media.year) {
	media.printInfo();
      }
    }
  }
}

void help() {
  cout << "---------------------------" << endl;
  cout << "\"add\": add content to the library" << endl;
  cout << "\"remove\": remove content from library" << endl;
  cout << "\"search\": search for content in the library" << endl;
  cout << "\"quit\": exit program" << endl;
  cout << "\"help\": display list of commands" << endl;
  cout << "---------------------------" << endl;
}
