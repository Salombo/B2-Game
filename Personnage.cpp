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

/*void Personnage::upStats()
{
    this->armure = this->armure * 1.05;
    this->vie = this->vie * 1.1;
    this->puissance = this->puissance * 1.05;
}*/
void Personnage::takeDamage(int damage)
{
    if(this->vie > 0) {
        if (damage > this->armure) {
            double realDamage = damage - this->armure;
            this->vie = this->vie - realDamage;
        }
    }else{
        this->isAlive = false;
        this->restoreStat();
    }
}
void Personnage::restoreStat()
{
    this->vie = 100;
    this->armure = 20;
    this->puissance = 10;
}
Competence* Personnage::getCompetence(std:: string name)
{

    for(int i = 0; i < this->tabCompetence.size(); i++){
        if(tabCompetence[i]->getName() == name){
            return tabCompetence[i];
        }
    }
};
void Personnage::ajouterCompetence(Competence* competence)
{
    this->tabCompetence.push_back(competence);
};
std::vector<Competence*> Personnage::getAllCompetence()
{
    return this->tabCompetence;
};
Action* Personnage::getAction(std::string name)
{
    for(int i = 0; i < this->tabAction.size(); i++){
        if(tabAction[i]->getName() == name){
            return tabAction[i];
        }
    }
};
void Personnage::ajouterAction(Action* action)
{
    this->tabAction.push_back(action);
};
std::vector<Action*> Personnage::getAllAction()
{
    return this->tabAction;
};
int Personnage::getVie()
{
    return this->vie;
}
int Personnage::getArmure()
{
    return this->armure;
}
int Personnage::getPuissance()
{
    return this->puissance;
}
bool Personnage::getAlive()
{
    return this->isAlive;
}
