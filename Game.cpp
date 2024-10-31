#include <iostream>
#include <cstring>
#include "Media.h"
#include "Game.h"

using namespace std;

void Game::getInfo() {
  Media::getInfo();
  char input[50];

  cout << "Publisher: ";
  cin >> input;
  strcpy(Game::publisher, input);

  cout << "Rating: ";
  cin >> input;
  Game::rating = atoi(input);
}
