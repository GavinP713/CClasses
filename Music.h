#ifndef MUSIC_H
#define MUSIC_H

#include <cstring>
#include "Media.h"

class Music : public Media {
 public:
  char artist[50];
  char publisher[50];
  float duration;
  void getInfo();
  void printInfo();
};

#endif
