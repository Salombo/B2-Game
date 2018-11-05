//
//  VoleurFactory.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef VoleurFactory_hpp
#define VoleurFactory_hpp

#include <iostream>
#include <stdio.h>
#include "Factory.hpp"
#include "Personnage.hpp"




#define VOLEUR_VIE             100
#define VOLEUR_ARMURE          7
#define VOLEUR_PUISSANCE       0


class VoleurFactory : Factory{
public:
    VoleurFactory();
    
    Personnage* create(std::string nom);
};

#endif /* VoleurFactory_hpp */
