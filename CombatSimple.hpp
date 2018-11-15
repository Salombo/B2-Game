//
//  CombatSimple.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef CombatSimple_hpp
#define CombatSimple_hpp

#include <stdio.h>
#include "Combat.hpp"

class CombatSimple : Combat {
public:
    CombatSimple(Personnage& player1, Personnage& player2);
    
    bool start();
};

#endif /* CombatSimple_hpp */
