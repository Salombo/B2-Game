//
//  Factory.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef Factory_hpp
#define Factory_hpp

#include <iostream>
#include <stdio.h>
#include "Personnage.hpp"

class Factory{
public:
    virtual Personnage* create(std::string nom) = 0;
};

#endif /* Factory_hpp */
