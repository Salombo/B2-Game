//
//  Combat.cpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#include <stdio.h>
#include "Combat.hpp"
#include "Personnage.hpp"

Combat::Combat(Personnage& player1, Personnage& player2){
    this->fighter1 = &player1;
    this->fighter2 = &player2;
}
