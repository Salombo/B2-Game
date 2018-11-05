//
//  MonstreFactory.cpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#include <iostream>
#include "MonstreFactory.hpp"
#include "definitions.hpp"

MonstreFactory::MonstreFactory(){
    
}

Personnage* MonstreFactory::create(std::string nom){
    
    Personnage* monstre = new Personnage(MONSTRE_VIE, nom, MONSTRE_ARMURE, MONSTRE_PUISSANCE, MONSTRE);

    // Competence de monstre et action

    return monstre;
}
