//
//  GuerrierFactory.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef GuerrierFactory_hpp
#define GuerrierFactory_hpp

#include <iostream>
#include <stdio.h>
#include "Factory.hpp"
#include "Personnage.hpp"




#define WAR_VIE             100
#define WAR_ARMURE          10
#define WAR_PUISSANCE       0


class GuerrierFactory : Factory{
public:
    GuerrierFactory();
    
    Personnage* create(std::string nom);
};

#endif /* GuerrierFactory_hpp */
