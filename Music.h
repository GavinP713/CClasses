#include <cstring>
#include "Media.h"

class Music : public Media {
 public:
  char artist[];
  char publisher[];
  float duration;
};
