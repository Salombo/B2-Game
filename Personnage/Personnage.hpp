//
//  Personnage.hpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#ifndef Personnage_hpp
#define Personnage_hpp

#include <iostream>
#include <stdio.h>
#include "definitions.hpp"

class Personnage{
private:
    int vie;
    std::string nom;
    int armure;
    int puissance;
    int vieMax;
    Classes classe;
    
    
public:
    Personnage(int _vie, std::string _nom, int _armure, int _puissance, Classes _classe);
    void print();
};

#endif /* Personnage_hpp */
