#ifndef MEDIA_H
#define MEDIA_H

class Media {
 public:
  char title[50];
  int year;
  virtual void getInfo();
  virtual void printInfo();
};

#endif
