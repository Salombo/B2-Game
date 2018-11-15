//
//  Combat.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef Combat_hpp
#define Combat_hpp

#include <stdio.h>
#include "Personnage.hpp"

class Combat{
protected:
    Personnage* fighter1;
    Personnage* fighter2;
public:
    Combat(Personnage& player1, Personnage& player2);
    
    virtual bool start() = 0;
};

#endif /* Combat_hpp */
