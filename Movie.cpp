#include <iostream>
#include <cstring>
#include "Media.h"
#include "Movie.h"

using namespace std;

void Movie::getInfo() {
  Media::getInfo();
  char input[50];

  cout << "Director: ";
  cin.getline(input, 50, '\n');
  strcpy(Movie::director, input);

  cout << "Rating: ";
  cin >> input;
  Movie::rating = atoi(input);

  cout << "Duration: ";
  cin >> input;
  Movie::duration = atof(input);

  cin.ignore();
}

void Movie::printInfo() {
  cout << "Type: Movie" << endl;
  Media::printInfo();
  cout << "Director: " << Movie::director << endl;
  cout << "Rating: " << Movie::rating << endl;
  cout << "Duration: " << Movie::duration << endl;
}
