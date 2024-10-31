#ifndef GAME_H
#define GAME_H

#include <cstring>
#include "Media.h"

class Game : public Media {
 public:
  char publisher[50];
  int rating;
  void getInfo();
};

#endif
