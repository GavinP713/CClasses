#include <iostream>
#include <cstring>
#include <cstdlib>
#include "Media.h"

using namespace std;

void Media::getInfo() {
  char input[50];
  
  cout << "Title: ";
  cin.getline(input, 50, '\n');
  strcpy(Media::title, input);
  
  cout << "Year: ";
  cin >> input;
  Media::year = atoi(input);

  cin.ignore();
}

void Media::printInfo() {
  cout << "Title: " << Media::title << endl;
  cout << "Year: " << Media::title << endl;
}
