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
    Personnage* voleur = new Personnage(VOLEUR_VIE, nom, VOLEUR_ARMURE, VOLEUR_PUISSANCE, VOLEUR);

    /*CompetenceVoleur* combo = new CompetenceVoleur();
    voleur->ajouterCompetence(combo);

    DommageVoleur* dmgVoleur = new DommageVoleur();
    voleur->ajouterAction(dmgVoleur);
    ComboVoleur* comboVoleur = new ComboVoleur();
    voleur->ajouterAction(comboVoleur);*/

    return voleur;
}
