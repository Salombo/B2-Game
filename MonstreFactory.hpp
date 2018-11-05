//
//  MonstreFactory.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef MonstreFactory_hpp
#define MonstreFactory_hpp
#include <iostream>
#include <stdio.h>
#include "Factory.hpp"
#include "Personnage.hpp"




#define MONSTRE_VIE             33
#define MONSTRE_ARMURE          1
#define MONSTRE_PUISSANCE       0


class MonstreFactory : Factory{
public:
    MonstreFactory();
    
    Personnage* create(std::string nom);
};
#endif /* MonstreFactory_hpp */
