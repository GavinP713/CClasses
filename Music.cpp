#include <iostream>
#include <cstring>
#include "Media.h"
#include "Music.h"

using namespace std;

void Music::getInfo() {
  Media::getInfo();
  char input[50];

  cout << "Artist: ";
  cin >> input;
  strcpy(Music::artist, input);

  cout << "Publisher: ";
  cin >> input;
  strcpy(Music::publisher, input);

  cout << "Duration: ";
  cin >> input;
  Music::duration = atof(input);
}
