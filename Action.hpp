//
//  Action.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef Action_hpp
#define Action_hpp

#include <iostream>
#include <string>
#include "Personnage.hpp"
using namespace std;

class Action
{
  private:


  public:
    virtual string getNom() const = 0;
    virtual void execute(Personnage *emetteur, Personnage *recepteur) = 0;


};


#endif /* Action_hpp */
