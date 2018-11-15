//
//  CombatSimple.cpp
//  Game
//
//  Created by Adrien LENOIRE on 05/11/2018.
//  Copyright © 2018 Adrien LENOIRE. All rights reserved.
//

#include "CombatSimple.hpp"
#include "Combat.hpp"

CombatSimple::CombatSimple(Personnage& player1, Personnage& player2) : Combat(player1, player2){
    
}

bool CombatSimple::start(){
    /*int turn = 1;
    
    while(this->fighter1->isAlive() && this->fighter2->isAlive()){
        
    
        turn == 2 ? turn=1:turn++;
    }*/
    
    //return this->fighter1->isAlive();
    
    return true;
}
