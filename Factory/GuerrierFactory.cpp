//
//  GuerrierFactory.cpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#include <iostream>
#include "GuerrierFactory.hpp"
#include "definitions.hpp"

GuerrierFactory::GuerrierFactory(){
    
}

Personnage* GuerrierFactory::create(std::string nom){
    return new Personnage(WAR_VIE, nom, WAR_ARMURE, WAR_PUISSANCE, WAR);
}
