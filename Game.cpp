#include <iostream>
#include <cstring>
#include "Media.h"
#include "Game.h"

using namespace std;

void Game::getInfo() {
  Media::getInfo();
  char input[50];

  cout << "Publisher: ";
  cin.getline(input, 50, '\n');
  strcpy(Game::publisher, input);

  cout << "Rating: ";
  cin >> input;
  Game::rating = atoi(input);

  cin.ignore();
}

void Game::printInfo() {
  cout << "Game" << endl;
  Media::printInfo();
  cout << "   - Publisher: " << Game::publisher << endl;
  cout << "   - Rating: " << Game::rating << endl;
}
