
#ifndef Personnage_hpp
#define Personnage_hpp

#include <iostream>
#include <stdio.h>
#include "definitions.hpp"
#include <vector>
#include "Action.hpp"
#include "Competence.hpp"

class Action;

class Personnage{
private:
    int vie;
    std::string nom;
    int armure;
    int puissance;
    int vieMax;
    Classes classe;
    std::vector<Competence*> tabCompetence;
    std::vector<Action*> tabAction;
    bool isAlive = false;
    
    
public:
    Personnage(int _vie, std::string _nom, int _armure, int _puissance, Classes _classe);
    void print();
    void upStats();
    void takeDamage(int damage);
    void restoreStat();
    Competence* getCompetence(std:: string name);
    void ajouterCompetence(Competence* competence);
    std::vector<Competence*> getAllCompetence();
    Action* getAction(std::string name);
    void ajouterAction(Action* action);
    std::vector<Action*> getAllAction();
    double getVie();
    double getArmure();
    double getPuissance();
    bool getAlive();
};

#endif /* Personnage_hpp */
