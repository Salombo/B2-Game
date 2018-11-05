#include <iostream>
#include <string>
#include "Action.hpp"
using namespace std;

class DommageGuerrier : public Action{

  public:
    virtual string getNom() const;
    virtual void execute(Personnage *emetteur, Personnage *recepteur);

};
