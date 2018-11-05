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
    Personnage* guerrier = new Personnage(WAR_VIE, nom, WAR_ARMURE, WAR_PUISSANCE, WAR);

    /*// Ajout des compétences
    CompetenceGuerrier* energie = new Competence();
    guerrier->ajouterCompetence(energie);

    // Ajout des actions
    DommageGuerrier* dmg = new DommageGuerrier();
    guerrier->ajouterAction(dmg);
    GrosDommageGuerrier* grosDmg = new GrosDommageGuerrier();
    guerrier->ajouterAction(grosDmg);*/

    return guerrier;
}
