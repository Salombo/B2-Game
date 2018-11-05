//
//  VoleurFactory.cpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#include <iostream>
#include "VoleurFactory.hpp"
#include "definitions.hpp"

VoleurFactory::VoleurFactory(){
    
}

Personnage* VoleurFactory::create(std::string nom){
    return new Personnage(VOLEUR_VIE, nom, VOLEUR_ARMURE, VOLEUR_PUISSANCE, VOLEUR);
}
