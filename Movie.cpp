#include <iostream>
#include <cstring>
#include "Media.h"
#include "Movie.h"

using namespace std;

void Movie::getInfo() {
  Media::getInfo();
  char input[50];

  cout << "Director: ";
  cin >> input;
  strcpy(Movie::director, input);

  cout << "Rating: ";
  cin >> input;
  Movie::rating = atoi(input);

  cout << "Duration: ";
  cin >> input;
  Movie::duration = atof(input);
}
