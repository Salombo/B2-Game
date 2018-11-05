//
//  Personnage.cpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#include <iostream>
#include "Personnage.hpp"
#include "definitions.hpp"

Personnage::Personnage(int _vie, std::string _nom, int _armure, int _puissance, Classes _classe){
    this->vie = _vie;
    this->nom = _nom;
    this->armure = _armure;
    this->puissance = _puissance;
    this->vieMax = _vie;
    this->classe = _classe;
}

void Personnage::print(){
    std::string cl;
    
    switch (this->classe) {
        case WAR:
            cl = "Guerrier";
            break;
        case VOLEUR:
            cl = "Voleur";
            break;
        case MONSTRE:
            cl = "Monstre";
            break;
        default:
            cl = "Unknown";
            break;
    }
    
    std::cout << "Personnage : " << this->nom << " (Vie: " << this->vie << " | Armure : " << this->armure << " | Puissance : " << this->puissance << " | vieMax : " << this->vieMax << " | Classe : " << cl << ")" << std::endl;
}
