#ifndef Competenceguerrier_hpp
#define Competenceguerrier_hpp

#include "Competence.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;

class Competenceguerrier:Competence{
private:
  int energie;
public:
  string getName();
  void incremente();
  void decremente();
};

#endif
