#ifndef MOVIE_H
#define MOVIE_H

#include <cstring>
#include "Media.h"

class Movie : public Media {
 public:
  char director[50];
  int rating;
  float duration;
  void getInfo();
};

#endif
