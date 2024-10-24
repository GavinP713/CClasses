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
  vector<Media>* media = new vector<Media>;

  // program loop
  char input[inputlength];
  while (true) {
    cin >> input;

    if (strcmp(input, "add") == 0) {
      add();
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

void add() {
  char input[inputlength];

  // Define media type
  cout << "Movie: 0" << endl;
  cout << "Game:  1" << endl;
  cout << "Music: 2" << endl;
  cout << "Media type: "; cin >> input;

  if (strcmp(input, "0") == 0) {
    
  }
  if (strcmp(input, "1") == 0) {

  }
  if (strcmp(input, "2") == 0) {

  }
}

void remove() {

}

void search() {

}
