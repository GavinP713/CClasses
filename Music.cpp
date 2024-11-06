#include <iostream>
#include <cstring>
#include "Media.h"
#include "Music.h"

using namespace std;

void Music::getInfo() {
  Media::getInfo();
  char input[50];

  cout << "Artist: ";
  cin.getline(input, 50, '\n');
  strcpy(Music::artist, input);

  cout << "Publisher: ";
  cin.getline(input, 50, '\n');
  strcpy(Music::publisher, input);

  cout << "Duration: ";
  cin >> input;
  Music::duration = atof(input);

  cin.ignore();
}

void Music::printInfo() {
  cout << "Music" << endl;
  Media::printInfo();
  cout << "   - Artist: " << Music::artist << endl;
  cout << "   - Publisher: " << Music::publisher << endl;
  cout << "   - Duration: " << Music::duration << endl;
}
